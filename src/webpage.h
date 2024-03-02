const char HTML[] PROGMEM = R"=====(
<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Crow Control</title>
  <style>
    .container {
      display: flex;
      flex-direction: column;
      align-items: center;
      justify-content: center;
      height: 100vh;
      background-color: #1b1b1b;
      color: white;
      font-family: 'Roboto', sans-serif;
      accent-color: #0c316e;
    }

    .header {
      font-size: 40px;
      margin-bottom: 20px;
    }

    .buttons {
      display: flex;
      flex-wrap: wrap;
      justify-content: center;
      gap: 10px;
    }

    .button {
      border: 0;
      background-color: #0c316e;
      padding: 15px 32px;
      text-align: center;
      font-size: 20px;
      cursor: pointer;
      border-radius: .25rem;
      box-sizing: border-box;
      color: #fff;
      font-weight: 600;
      line-height: 1.75rem;
      padding: 1rem 1.25rem;
    }
    .controls {
      margin-top: 20px;
      display: flex;
      flex-wrap: wrap;
      flex-direction: column;
      align-items: center;
      justify-content: center;
      gap: 10px;
    }
    .custom-select {
      background-color: #0c316e;
      color: white;
      font-family: 'Roboto', sans-serif;
      font-size: 20px;
      accent-color: #0c316e;
      border: 0;
      padding: 10px 8px;
      border-radius: .25rem;  
    }
    .checkboxes {
   	  margin-right: 10px;
    }
    
    label {
      font-size: 20px;
      margin-right: 5px;
    }

    .disabled {
      opacity: 0.5;
      pointer-events: none;
    }

  </style>
</head>
<body>
  <div class="container">
    <h1 class="header">Crow Control</h1>
    <div class="buttons">
      <button class="button" onclick="playAnimation()">Play Animation</button>
      <button class="button" onclick="pauseAnimation()">Pause Animation</button>
      <button class="button" onclick="neutralPositions()">Neutral Positions</button>
  
    </div>
    <div class="controls">    
      <div>
        <label for="animationSelect">Select Animation:</label>
        <select class="custom-select" id="animationSelect" onchange="executeSelectedAnimation()">
          <option value="animation1">Animation 1</option>
          <option value="animation2">Animation 2</option>
          <option value="animation3">Animation 3</option>
        </select>
      </div>
      <div>
        <label for="loopButton">Loop Animation</label>
        <button id="loopButton" class="button checkboxes" onclick="toggleLoop()">Off</button>
        <label id="livelabel" for="liveButton">Live Control Mode</label>
        <button id="liveButton" class="button" onclick="toggleLive()">Off</button>  
        <div class="buttons">
          <button class="button" onclick="otaUpdate()">Update OTA</button>
        </div>                
      </div>      
    </div>
  </div>

  <script>
    var loopState = false;
    var liveState = false;

    function playAnimation() {
      var xhr = new XMLHttpRequest();
      xhr.open("GET", "/play", true);
      xhr.send();
    }

    function pauseAnimation() {
      var xhr = new XMLHttpRequest();
      xhr.open("GET", "/pause", true);
      xhr.send();
    }

    function neutralPositions() {
      var xhr = new XMLHttpRequest();
      xhr.open("GET", "/neutral", true);
      xhr.send();
    }


    function executeSelectedAnimation() {
      var selectedAnimation = document.getElementById("animationSelect").value;
      var xhr = new XMLHttpRequest();
      xhr.open("GET", "/" + selectedAnimation, true);
      xhr.send();
    }

    function toggleLoop() {
      loopState = !loopState;
      var loopButton = document.getElementById("loopButton");
      loopButton.textContent = loopState ? "On" : "Off";
      var xhr = new XMLHttpRequest();
      xhr.open("GET", "/loopcheckbox=" + loopState, true);
      xhr.send();
    }

    function toggleLive() {
      liveState = !liveState;
      var liveButton = document.getElementById("liveButton");
      liveButton.textContent = liveState ? "On" : "Off";

      // Disable all controls except for live control mode button
      var otherControls = document.querySelectorAll('.container button:not(#liveButton), .container select, .container label:not(#livelabel)');
      otherControls.forEach(function(control) {
        if (liveState) {
          control.classList.add('disabled');
        } else {
          control.classList.remove('disabled');
        }
      });

      var xhr = new XMLHttpRequest();
      xhr.open("GET", "/livecheckbox=" + liveState, true);
      xhr.send();
    }

    function otaUpdate() {
      var xhr = new XMLHttpRequest();
      xhr.open("GET", "/otamode", true);
      xhr.send();
    }    
    
  </script>
</body>
</html>

)=====";