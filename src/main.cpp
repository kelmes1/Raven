#include "Adafruit_PWMServoDriver.h"
#include "animation1.h"
#include "animation2.h"
#include "animation3.h"
#include <Adafruit_NeoPixel.h>
#include <BlenderServoAnimation.h>
#include <DFPlayerMini_Fast.h>
// #include <Keypad.h>
// #include <PS4_Controller_Host.h>
#include <WiFi.h>
#include "SPIFFS.h"
#include "webpage.h"
#include <WiFiClient.h>
#include <WiFiAP.h>
#include <WebServer.h>
#include <ESPmDNS.h>
#include <WiFiUdp.h>
#include <ArduinoOTA.h>
// #include "BluetoothA2DPSource.h"

using namespace BlenderServoAnimation;

#define FPSerial Serial1
#define SDA_PIN 35
#define SCL_PIN 36
#define RXD 17
#define TXD 18
bool dfPlayerAvailable = false;
unsigned int selectedAnimation = 0;
unsigned int tempFrame = 0;
Animation obj;
bool state = 0;
unsigned int loopStartTime = 0;
const unsigned int delayDuration = 600;
unsigned int total_frames = 0;
bool playing = false;
bool looping = false;
// bool livemode = false;
const char *ap_ssid = "Raven-Access-Point";
const char *ap_password = "123456789";

const int NUM_SERVOS = 7;

WiFiServer server(80);

DFPlayerMini_Fast myDFPlayer;

Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver(0x40, Wire);

// #define ROW_NUM 4    // four rows
// #define COLUMN_NUM 4 // four columns

// char keys[ROW_NUM][COLUMN_NUM] = {{'1', '2', '3', 'A'},
//                                   {'4', '5', '6', 'B'},
//                                   {'7', '8', '9', 'C'},
//                                   {'*', '0', '#', 'D'}};

// byte pin_rows[ROW_NUM] = {1, 2, 42, 41};
// byte pin_column[COLUMN_NUM] = {40, 39, 38, 37};

// Keypad keypad =
//     Keypad(makeKeymap(keys), pin_rows, pin_column, ROW_NUM, COLUMN_NUM);

void move(byte servoID, int position) { pwm.setPWM(servoID, 0, position); }

Animation animations[3] = {
    {Animation1::FPS, Animation1::FRAMES},
    {Animation2::FPS, Animation2::FRAMES},
    {Animation3::FPS, Animation3::FRAMES},
};

Servo animation1Servos[NUM_SERVOS] = {
    Servo(0, Animation1::mouth, move, 50),
    Servo(1, Animation1::necktop, move, 50),
    Servo(2, Animation1::neckside, move, 50),
    Servo(3, Animation1::hip, move, 50),
    Servo(4, Animation1::wing, move, 50),
    Servo(5, Animation1::eye_led_R, move, 50),
    Servo(6, Animation1::eye_led_L, move, 50),
};

Servo animation2Servos[NUM_SERVOS] = {
    Servo(0, Animation2::mouth, move, 50),
    Servo(1, Animation2::necktop, move, 50),
    Servo(2, Animation2::neckside, move, 50),
    Servo(3, Animation2::hip, move, 50),
    Servo(4, Animation2::wing, move, 50),
    Servo(5, Animation2::eye_led_R, move, 50),
    Servo(6, Animation2::eye_led_L, move, 50),
};

Servo animation3Servos[NUM_SERVOS] = {
    Servo(0, Animation3::mouth, move, 50),
    Servo(1, Animation3::necktop, move, 50),
    Servo(2, Animation3::neckside, move, 50),
    Servo(3, Animation3::hip, move, 50),
    Servo(4, Animation3::wing, move, 50),
    Servo(5, Animation3::eye_led_R, move, 50),
    Servo(6, Animation3::eye_led_L, move, 50),
};

void setupAP()
{
  Serial.print("Setting AP (Access Point)…");
  WiFi.softAP(ap_ssid, ap_password);
  IPAddress IP = WiFi.softAPIP();
  Serial.print("AP IP address: ");
  Serial.println(IP);
  server.begin();
}

void setupWifi()
{
  Serial.println("Connecting to WiFi...");
  WiFi.begin(wifi_ssid, wifi_password);
  while (WiFi.status() != WL_CONNECTED)
  {
    delay(1000);
    Serial.println("Connecting...");
  }
  Serial.println("Connected to WiFi");
}

void setupDFPlayer()
{
  if (!myDFPlayer.begin(FPSerial))
  {
    Serial.println(F("Unable to begin:"));
    Serial.println(F("1.Please recheck the connection!"));
    Serial.println(F("2.Please insert the SD card!"));
  }
  else
  {
    myDFPlayer.volume(23);
    dfPlayerAvailable = true;
    Serial.println("DFPlayer is available.");
  }
}

void setupOTA()
{
  ArduinoOTA
      .onStart([]()
               {
      String type;
      if (ArduinoOTA.getCommand() == U_FLASH)
        type = "sketch";
      else // U_SPIFFS
        type = "filesystem";

      // NOTE: if updating SPIFFS this would be the place to unmount SPIFFS using SPIFFS.end()
      Serial.println("Start updating " + type); })
      .onEnd([]()
             { Serial.println("\nEnd"); })
      .onProgress([](unsigned int progress, unsigned int total)
                  { Serial.printf("Progress: %u%%\r", (progress / (total / 100))); })
      .onError([](ota_error_t error)
               {
      Serial.printf("Error[%u]: ", error);
      if (error == OTA_AUTH_ERROR) Serial.println("Auth Failed");
      else if (error == OTA_BEGIN_ERROR) Serial.println("Begin Failed");
      else if (error == OTA_CONNECT_ERROR) Serial.println("Connect Failed");
      else if (error == OTA_RECEIVE_ERROR) Serial.println("Receive Failed");
      else if (error == OTA_END_ERROR) Serial.println("End Failed"); });

  ArduinoOTA.begin();

  Serial.println("Ready");
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());
}

/**
 * @brief Initializes the necessary components and configurations for the setup of the program.
 *
 * This function sets up the serial communication, initializes the Wire library for I2C communication,
 * sets up the Wi-Fi connection, adds servos to animations, initializes the DFPlayer, and sets the PWM frequency.
 * It also calculates the total number of frames for the selected animation.
 */
void setup()
{
  FPSerial.begin(9600, SERIAL_8N1, RXD, TXD);
  Wire.begin(SDA_PIN, SCL_PIN);
  Serial.println();
  setupAP();
  animations[0].addServos(animation1Servos, NUM_SERVOS);
  animations[1].addServos(animation2Servos, NUM_SERVOS);
  animations[2].addServos(animation3Servos, NUM_SERVOS);
  delay(100);
  Serial.begin(115200);
  setupDFPlayer();
  pwm.begin();
  pwm.setPWMFreq(50);
  total_frames = animations[selectedAnimation].getFrames();
  delay(10);
}

void neutral()
{
  playing = false;
  if (dfPlayerAvailable)
  {
    myDFPlayer.stop();
  }
  animations[selectedAnimation].play(selectedAnimation + 1);
  delay(500);
  animations[selectedAnimation].stop();
}

void pauseFunct()
{
  playing = false;
  if (dfPlayerAvailable)
  {
    myDFPlayer.pause();
  }
  animations[selectedAnimation].pause();
}

void playFunct()
{
  if (dfPlayerAvailable)
  {
    myDFPlayer.play(selectedAnimation + 1);
    delay(500);
  }
  animations[selectedAnimation].play();
  playing = true;
  Serial.println("Play trigger");
}

/**
 * The main loop function that runs repeatedly in the program.
 * It handles key inputs, animation execution, and communication with clients.
 */
void loop()
{
  // char key = keypad.getKey();
  animations[selectedAnimation].run();
  WiFiClient client = server.available();
  // if (livemode) {
  //   liveControl();
  //   return;
  // }
  if (client)
  {
    char request[25];
    client.readBytesUntil('\r', request, sizeof(request));
    if (strstr(request, "/") != nullptr)
    {
      client.println(F(HTML));
    }
    if (strstr(request, "/livecheckbox=false") != nullptr)
    {
      // PS4.end();
      // livemode = false;
    }
    else if (strstr(request, "/livecheckbox=true") != nullptr)
    {
      // livemode = true;
      client.stop();
      // PS4.begin("1C:66:6D:65:BD:64");
      return;
    }
    if (strstr(request, "/animation1") != nullptr)
    {
      Serial.println("Execute Animation 1");
      neutral();
      selectedAnimation = 0;
    }
    if (strstr(request, "/animation2") != nullptr)
    {
      Serial.println("Execute Animation 2");
      neutral();
      selectedAnimation = 1;
    }
    if (strstr(request, "/animation3") != nullptr)
    {
      Serial.println("Execute Animation 3");
      neutral();
      selectedAnimation = 2;
    }
    if (strstr(request, "/loopcheckbox=true") != nullptr)
    {
      looping = true;
    }
    else if (strstr(request, "/loopcheckbox=false") != nullptr)
    {
      looping = false;
      playing = false;
    }

    if ((strstr(request, "/play") != nullptr) and animations[selectedAnimation].getMode() != Animation::MODE_PLAY)
    {
      Serial.println("Play animation");
      playFunct();
    }
    if (strstr(request, "/pause") != nullptr and animations[selectedAnimation].getMode() != Animation::MODE_PAUSE)
    {
      Serial.println("Pause animation");
      pauseFunct();
    }
    if (strstr(request, "/neutral") != nullptr)
    {
      Serial.println("Neutral positions");
      neutral();
    }
    if (strstr(request, "/otamode") != nullptr)
    {
      WiFi.softAPdisconnect(true);
      setupWifi();
      setupOTA();
      while (true)
      {
        ArduinoOTA.handle(); // Handle OTA updates
      }
      // delay(120000);
      // ESP.restart();
    }
    client.stop();
  }
  if (looping and playing and animations[selectedAnimation].getMode() == Animation::MODE_DEFAULT)
  {
    playFunct();
  }
}
