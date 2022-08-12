#include <Servo.h>

int angle;
Servo myservo;  // create servo object to control a servo

// twelve servo objects can be created on most boards


int pos = 0;    // variable to store the servo position


void setup() {
  Serial.begin(6969);
  Serial.setTimeout(1);
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
  myservo.write(0);
  delay(1000);
  myservo.write(180);
  delay(1000);
  myservo.write(90);
  delay(1000);

}


void loop() {
  
  while (!Serial.available());
  angle = Serial.readString().toInt();
  Serial.print(angle);

  myservo.write(angle);
  delay(5000);

}
