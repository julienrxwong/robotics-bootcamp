/*
  Week 3 - Motor Control (Starter Template)

  This sketch turns the Arduino into a controller for servos wired
  through a PCA9685 PWM driver board over I2C. Fill in the TODO
  sections yourself — they're the "easy" motor-control parts
  (which channel each servo is on, and how to sweep it).

  Reference: hardware/roboarm_pca9685.ino in the RoboArm repo shows
  one way to structure this. Don't copy it directly — figure out your
  own version.

  Checklist for this file:
    1. Answer every "what does this do?" question in your own words.
    2. Fill in your channel number(s) and pulse-width constants.
    3. Write moveServo() (see the worked example below it first).
    4. Use moveServo() inside loop() to sweep a servo back and forth.
*/

// -----------------------------------------------------------------------
// What do these two lines do? Answer in your own words below.
//
//
// -----------------------------------------------------------------------
#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

// -----------------------------------------------------------------------
// What does this line do? Answer in your own words below.
//
//
// -----------------------------------------------------------------------
Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver(0x40);

// ── EXAMPLE: this is what a constant definition looks like ─────────────
// #define gives a name to a fixed number so you don't retype it (and so
// the code reads clearly, e.g. "LED_PIN" instead of a bare "13").
//
//   #define LED_PIN 13
//
// ── TODO: pin / channel definitions ─────────────────────────────────────
// Which PCA9685 channel(s) is your servo wired to? Define constants here
// the same way, e.g.  #define SERVO_CHANNEL 0
// (Channels are numbered 0-15 on the board, printed next to each pin.)



// ── EXAMPLE: a constant can also be a variable's worth of value ─────────
//   const int MAX_BRIGHTNESS = 255;
//
// ── TODO: pulse-width constants ─────────────────────────────────────────
// A servo doesn't understand "degrees" directly — it understands a pulse
// length in microseconds (us). 0 degrees is a short pulse, 180 degrees is
// a longer pulse. Check your servo's datasheet for its range; SG90-style
// hobby servos are commonly 500us (0 deg) to 2500us (180 deg).
// Define SERVOMIN and SERVOMAX here, e.g.
//   const int SERVOMIN = 500;
//   const int SERVOMAX = 2500;



// -----------------------------------------------------------------------
// What does each line in this block do? Answer in your own words below.
// (Hint: look up what Wire.begin(), pwm.begin(), and pwm.setPWMFreq()
// each do in the Adafruit_PWMServoDriver library docs if you're stuck.)
//
//
//
// -----------------------------------------------------------------------
void setup() {
  Serial.begin(115200);

  Wire.begin();
  pwm.begin();
  pwm.setPWMFreq(50);
  delay(10);

  Serial.println("PCA9685 ready.");
}

// ── EXAMPLE: what a basic function looks like ───────────────────────────
// A function has: a return type, a name, parameters in parentheses, and
// a body in curly braces. This one takes a number in and gives one back:
//
//   int addOne(int number) {
//     int result = number + 1;
//     return result;
//   }
//
// You'd call it elsewhere in your code like:  int x = addOne(5);  // x is 6
//
// A function doesn't have to return anything — if it just *does* something
// (like moving a servo) instead of computing a value, its return type is
// "void" and it has no return statement:
//
//   void blinkTwice() {
//     digitalWrite(LED_PIN, HIGH);
//     delay(200);
//     digitalWrite(LED_PIN, LOW);
//   }
//
// ── TODO: motor controller ───────────────────────────────────────────────
// Write a function that takes an angle (0-180 degrees) and moves a servo
// there:
//
//   void moveServo(uint8_t channel, float angleDegrees) {
//     ...
//   }
//
// Steps inside the function:
//   1. Take angleDegrees (0-180) and convert it into a pulse count between
//      SERVOMIN and SERVOMAX. (Hint: the built-in map() function does
//      exactly this kind of range conversion — look up its signature.)
//   2. Send that pulse count to the driver with pwm.setPWM(channel, 0, pulseCount);
//      — the middle argument (0) is the "on" tick, pulseCount is the "off" tick.
//   3. (Optional but good practice) use constrain() first so an out-of-range
//      angle can't send a pulse that damages the servo.



// -----------------------------------------------------------------------
// What does this function do, and when does it run? Answer below.
//
//
// -----------------------------------------------------------------------
void loop() {
  // TODO: use your motor controller function to sweep a servo back and
  // forth (e.g. 0 -> 180 -> 0) with a short delay between steps.
  //
  // Rough shape (fill in the real calls):
  //   for angle from 0 to 180: moveServo(SERVO_CHANNEL, angle); delay(...)
  //   for angle from 180 to 0: moveServo(SERVO_CHANNEL, angle); delay(...)

}
