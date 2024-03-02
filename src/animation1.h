/*
  Blender Servo Animation Positions

  FPS: 60
  Frames: 500
  Seconds: 8
  Bones: 7
  Armature: Armature.002
  Scene: Scene
  File: raven.blend
*/

#include <Arduino.h>

namespace Animation1 {

const byte FPS = 60;
const int FRAMES = 500;

// Servo ID: 0
const int mouth[FRAMES] PROGMEM = {
  358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 356, 354, 349, 344, 337, 330, 323, 316, 309, 302, 296, 291, 286, 283, 283, 283, 283, 283, 283, 283, 283, 283, 283, 283, 283, 283, 283, 283, 283,
  283, 283, 283, 283, 283, 284, 288, 292, 297, 304, 312, 322, 332, 341, 349, 354, 357, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358,
  358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358,
  358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358,
  358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358,
  358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358,
  358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 357, 354, 350, 345, 339, 333, 327, 322, 317, 313, 310, 307, 306, 306, 306, 306, 307, 309, 311, 314, 317, 321, 327, 333, 339, 345, 350, 354, 357, 358, 358, 358, 358,
  358, 358, 358, 358, 358, 358, 358, 356, 352, 346, 338, 330, 321, 314, 307, 302, 298, 295, 293, 293, 293, 294, 295, 296, 299, 302, 306, 310, 316, 322, 330, 337, 344, 350, 354, 357, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 357, 354, 351, 346,
  341, 335, 330, 326, 322, 319, 317, 316, 316, 316, 316, 317, 318, 320, 322, 325, 328, 332, 336, 341, 345, 349, 353, 355, 357, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358,
  358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358, 358,
};

// Servo ID: 1
const int necktop[FRAMES] PROGMEM = {
  371, 371, 371, 371, 371, 371, 371, 371, 372, 372, 372, 372, 372, 372, 372, 372, 372, 372, 372, 371, 370, 368, 366, 363, 361, 358, 356, 354, 353, 352, 352, 352, 352, 353, 354, 355, 356, 357, 359, 361, 362, 364, 366, 367, 369, 371, 373, 375, 377, 379,
  382, 384, 387, 390, 393, 396, 398, 401, 404, 407, 409, 411, 413, 415, 416, 417, 418, 418, 419, 419, 419, 419, 419, 419, 419, 419, 419, 419, 419, 419, 419, 419, 418, 418, 418, 418, 418, 418, 418, 418, 418, 417, 417, 417, 417, 417, 417, 417, 417, 417,
  417, 417, 417, 418, 418, 418, 419, 419, 420, 420, 421, 422, 422, 423, 423, 423, 424, 424, 424, 424, 424, 424, 424, 424, 424, 424, 424, 424, 424, 424, 423, 423, 422, 422, 422, 421, 421, 420, 420, 420, 419, 419, 418, 418, 418, 417, 417, 416, 416, 416,
  415, 415, 414, 414, 414, 413, 413, 412, 412, 412, 411, 411, 410, 410, 409, 409, 408, 407, 406, 404, 402, 400, 397, 394, 392, 388, 385, 382, 379, 375, 372, 369, 366, 363, 361, 358, 356, 354, 352, 351, 350, 350, 350, 350, 350, 350, 350, 350, 350, 351,
  351, 351, 352, 352, 352, 353, 353, 354, 354, 355, 355, 356, 356, 357, 357, 358, 359, 359, 360, 360, 361, 361, 362, 363, 363, 364, 364, 365, 365, 366, 366, 367, 367, 367, 368, 368, 369, 369, 369, 369, 370, 370, 369, 369, 368, 368, 367, 365, 364, 363,
  361, 359, 357, 356, 354, 353, 351, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350, 351, 351, 351, 352, 352, 353, 354, 354, 355, 356, 357, 358,
  359, 360, 361, 362, 363, 364, 365, 366, 368, 369, 371, 373, 375, 377, 379, 381, 383, 385, 387, 389, 392, 394, 396, 397, 399, 401, 402, 404, 405, 406, 407, 408, 408, 409, 410, 411, 412, 413, 414, 414, 415, 416, 417, 417, 418, 419, 419, 420, 420, 421,
  421, 422, 422, 423, 423, 423, 423, 424, 424, 424, 424, 424, 424, 424, 424, 424, 424, 424, 424, 423, 423, 423, 423, 423, 423, 422, 422, 421, 420, 419, 418, 417, 416, 414, 413, 412, 410, 409, 407, 405, 404, 402, 400, 398, 397, 395, 393, 392, 390, 389,
  387, 386, 385, 384, 383, 382, 381, 380, 380, 379, 379, 379, 378, 378, 378, 378, 378, 378, 378, 378, 379, 379, 379, 379, 380, 380, 380, 381, 381, 381, 382, 382, 383, 383, 384, 384, 384, 385, 385, 386, 386, 386, 387, 387, 388, 388, 388, 388, 389, 389,
  389, 389, 390, 390, 390, 390, 390, 390, 390, 390, 390, 389, 389, 389, 388, 388, 387, 387, 387, 386, 386, 385, 385, 385, 384, 384, 383, 383, 383, 382, 382, 382, 381, 381, 381, 380, 380, 380, 379, 379, 378, 378, 377, 376, 376, 375, 374, 373, 372, 371,
};

// Servo ID: 2
const int neckside[FRAMES] PROGMEM = {
  375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375,
  375, 375, 375, 375, 375, 374, 374, 374, 374, 374, 373, 373, 373, 373, 373, 372, 372, 372, 372, 372, 372, 372, 372, 372, 372, 372, 372, 372, 372, 372, 372, 372, 372, 372, 372, 372, 372, 372, 372, 372, 372, 372, 372, 372, 372, 372, 372, 372, 372, 372,
  372, 372, 372, 372, 371, 370, 369, 367, 364, 362, 359, 356, 353, 349, 346, 343, 340, 336, 334, 331, 329, 326, 325, 323, 321, 320, 319, 318, 318, 318, 317, 317, 317, 316, 316, 316, 316, 316, 316, 315, 315, 315, 315, 315, 315, 315, 315, 315, 315, 315,
  315, 316, 316, 316, 316, 316, 316, 317, 317, 317, 317, 318, 318, 318, 318, 319, 319, 319, 320, 320, 321, 321, 321, 322, 322, 323, 324, 324, 325, 326, 327, 328, 329, 331, 332, 334, 334, 334, 334, 334, 334, 334, 334, 333, 333, 333, 333, 333, 333, 333,
  333, 332, 332, 332, 332, 332, 332, 332, 333, 333, 333, 333, 333, 333, 333, 333, 333, 333, 333, 334, 334, 334, 334, 334, 334, 334, 334, 334, 334, 334, 334, 334, 335, 335, 335, 336, 338, 340, 343, 347, 351, 355, 360, 365, 371, 377, 383, 389, 395, 401,
  406, 412, 417, 422, 426, 429, 432, 435, 436, 436, 436, 436, 436, 436, 436, 436, 436, 436, 436, 436, 436, 436, 436, 436, 436, 436, 436, 436, 436, 436, 436, 436, 436, 436, 436, 436, 436, 435, 435, 434, 433, 432, 431, 429, 428, 426, 423, 421, 418, 414,
  410, 406, 402, 397, 393, 390, 387, 384, 382, 381, 380, 380, 379, 378, 378, 377, 377, 377, 376, 376, 376, 376, 375, 375, 375, 375, 375, 375, 374, 374, 374, 374, 374, 374, 374, 373, 373, 373, 373, 373, 372, 372, 372, 372, 372, 371, 371, 371, 371, 370,
  370, 370, 370, 370, 369, 369, 369, 369, 369, 369, 368, 368, 368, 368, 368, 368, 368, 368, 368, 368, 368, 368, 368, 368, 368, 368, 368, 368, 368, 368, 368, 368, 369, 369, 369, 369, 369, 369, 370, 370, 370, 370, 370, 370, 371, 371, 371, 371, 371, 371,
  372, 372, 372, 372, 372, 372, 372, 373, 373, 373, 373, 374, 374, 375, 375, 376, 376, 377, 377, 378, 379, 379, 380, 380, 381, 382, 382, 383, 384, 384, 385, 386, 386, 387, 388, 388, 389, 389, 390, 390, 391, 391, 392, 392, 392, 393, 393, 393, 393, 393,
  394, 394, 394, 394, 394, 394, 394, 393, 393, 393, 393, 393, 393, 393, 393, 393, 393, 393, 393, 393, 393, 393, 393, 393, 393, 393, 393, 393, 393, 392, 392, 392, 392, 392, 391, 391, 390, 389, 387, 386, 385, 384, 382, 381, 380, 379, 378, 377, 376, 375,
};

// Servo ID: 6
const int wing[FRAMES] PROGMEM = {
  375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375,
  375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 376, 377, 377, 378, 379, 381, 382, 384, 385, 387, 389, 391,
  393, 395, 397, 400, 402, 404, 407, 409, 412, 414, 417, 419, 422, 424, 427, 429, 432, 434, 436, 439, 441, 443, 445, 447, 449, 450, 452, 454, 455, 456, 457, 458, 459, 460, 460, 460, 460, 460, 460, 460, 460, 460, 460, 460, 460, 460, 460, 460, 460, 460,
  460, 460, 460, 460, 459, 459, 459, 459, 459, 459, 458, 458, 458, 458, 458, 457, 457, 457, 456, 456, 456, 455, 455, 454, 454, 454, 453, 453, 452, 452, 451, 450, 450, 449, 448, 448, 447, 446, 446, 445, 444, 443, 442, 441, 440, 439, 438, 437, 436, 435,
  434, 433, 432, 431, 430, 428, 427, 426, 425, 423, 422, 421, 420, 418, 417, 416, 414, 413, 412, 410, 409, 408, 406, 405, 404, 402, 401, 400, 399, 397, 396, 395, 394, 393, 392, 390, 389, 388, 387, 386, 385, 384, 384, 383, 382, 381, 380, 380, 379, 378,
  378, 377, 377, 376, 376, 376, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375,
  375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375,
  375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 376, 377, 379, 381, 383, 386, 389, 393, 396, 400, 404, 408, 412, 416, 420, 424, 428, 432, 436,
  440, 443, 447, 450, 452, 455, 457, 458, 459, 460, 460, 460, 460, 460, 460, 460, 460, 460, 460, 460, 460, 460, 460, 460, 460, 460, 460, 460, 460, 460, 459, 459, 459, 459, 459, 459, 458, 458, 458, 458, 457, 457, 457, 456, 456, 455, 455, 454, 454, 453,
  453, 452, 452, 451, 450, 450, 449, 448, 447, 446, 446, 445, 444, 443, 442, 441, 439, 438, 437, 435, 433, 431, 429, 427, 425, 422, 420, 417, 415, 412, 409, 407, 404, 401, 399, 396, 394, 391, 389, 387, 385, 383, 381, 380, 378, 377, 376, 376, 375, 375,
};

// Servo ID: 4
const int eye_led_R[FRAMES] PROGMEM = {
  255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
  255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 253, 246, 234, 219, 198, 173, 144, 111, 75, 38, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 38, 75,
  111, 144, 173, 198, 219, 234, 246, 253, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 253, 246, 234, 219, 198, 173, 144, 111, 75, 38, 3, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 3, 38, 75, 111, 144, 173, 198, 219, 234, 246, 253, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
  255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 253, 246, 234, 219, 198, 173, 144, 111, 75, 38, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 38, 75, 111, 144, 173, 198, 219, 234, 246, 253, 255, 255, 255, 255,
  255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
  255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
  255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 253, 246, 234, 219, 198, 173, 144, 111, 75, 38, 3, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 3, 38, 75, 111, 144, 173, 198, 219, 234, 246, 253, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
  255, 255, 255, 255, 253, 246, 234, 219, 198, 173, 144, 111, 75, 38, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 38, 75, 111, 144, 173, 198, 219, 234, 246, 253, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
};

// Servo ID: 5
const int eye_led_L[FRAMES] PROGMEM = {
  255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
  255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 253, 246, 234, 219, 198, 173, 144, 111, 75, 38, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 38, 75,
  111, 144, 173, 198, 219, 234, 246, 253, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 253, 246, 234, 219, 198, 173, 144, 111, 75, 38, 3, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 3, 38, 75, 111, 144, 173, 198, 219, 234, 246, 253, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
  255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 253, 246, 234, 219, 198, 173, 144, 111, 75, 38, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 38, 75, 111, 144, 173, 198, 219, 234, 246, 253, 255, 255, 255, 255,
  255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
  255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
  255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 253, 246, 234, 219, 198, 173, 144, 111, 75, 38, 3, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 3, 38, 75, 111, 144, 173, 198, 219, 234, 246, 253, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
  255, 255, 255, 255, 253, 246, 234, 219, 198, 173, 144, 111, 75, 38, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 38, 75, 111, 144, 173, 198, 219, 234, 246, 253, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
};

// Servo ID: 3
const int hip[FRAMES] PROGMEM = {
  375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 376, 376, 376, 377, 377, 377, 378, 378, 379, 380, 380, 381, 381, 382, 383, 383, 384, 385, 385,
  386, 387, 387, 388, 389, 389, 390, 390, 391, 392, 392, 393, 393, 393, 394, 394, 394, 394, 395, 395, 395, 395, 395, 395, 395, 395, 395, 395, 395, 395, 395, 395, 395, 395, 395, 395, 395, 395, 395, 395, 395, 395, 395, 395, 395, 395, 395, 395, 394, 394,
  394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 393, 393, 393, 393, 393, 393, 393, 393, 393, 392, 392, 392, 392, 392, 392, 392, 391, 391, 391, 391, 391, 391, 390, 390, 390, 390, 390, 389, 389, 389, 389, 389, 388, 388,
  388, 388, 387, 387, 387, 386, 386, 386, 385, 385, 385, 385, 384, 384, 384, 383, 383, 382, 382, 382, 382, 381, 381, 381, 380, 380, 380, 379, 379, 379, 379, 378, 378, 378, 378, 378, 378, 378, 377, 377, 377, 377, 377, 377, 377, 377, 378, 378, 378, 378,
  378, 378, 378, 378, 379, 379, 379, 379, 379, 379, 380, 380, 380, 380, 381, 381, 381, 381, 382, 382, 382, 382, 382, 383, 383, 383, 383, 384, 384, 384, 384, 384, 384, 385, 385, 385, 385, 385, 385, 385, 386, 386, 386, 386, 386, 386, 386, 386, 386, 386,
  386, 386, 386, 386, 386, 386, 386, 386, 386, 386, 386, 386, 386, 386, 386, 386, 386, 386, 386, 386, 386, 386, 386, 386, 386, 386, 386, 386, 386, 386, 386, 386, 386, 386, 386, 386, 386, 386, 386, 386, 386, 386, 386, 386, 386, 386, 386, 386, 386, 386,
  386, 386, 386, 386, 386, 386, 386, 386, 386, 386, 386, 386, 386, 386, 387, 387, 387, 387, 387, 388, 388, 388, 388, 388, 389, 389, 389, 389, 390, 390, 390, 391, 391, 391, 391, 392, 392, 392, 392, 393, 393, 393, 393, 394, 394, 394, 394, 394, 395, 395,
  395, 395, 395, 395, 396, 396, 396, 396, 396, 396, 396, 396, 396, 396, 396, 396, 396, 396, 396, 396, 396, 395, 395, 395, 395, 395, 395, 395, 395, 395, 395, 394, 394, 394, 394, 394, 394, 394, 393, 393, 393, 393, 393, 393, 392, 392, 392, 392, 392, 391,
  391, 391, 391, 391, 390, 390, 390, 390, 390, 389, 389, 389, 389, 388, 388, 388, 388, 388, 387, 387, 387, 387, 386, 386, 386, 386, 386, 385, 385, 385, 385, 384, 384, 384, 384, 383, 383, 383, 383, 383, 382, 382, 382, 382, 381, 381, 381, 381, 381, 380,
  380, 380, 380, 380, 379, 379, 379, 379, 379, 379, 378, 378, 378, 378, 378, 378, 377, 377, 377, 377, 377, 377, 377, 377, 376, 376, 376, 376, 376, 376, 376, 376, 376, 376, 376, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375,
};
}