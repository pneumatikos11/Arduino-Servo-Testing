#include <Servo.h>

Servo myservo;


float ms = 550;
int btn1 = 2;
int btn2 = 3;


void setup() {
  Serial.begin(9600);
  myservo.attach(6);
  pinMode(btn1, INPUT);
  pinMode(btn2, INPUT);
}

void loop() {
  if (digitalRead(btn1) == HIGH) {
    ms = ms - 1;
    // delay(100);
  } else if (digitalRead(btn2) == HIGH) {
    ms = ms + 1;
    // delay(100);
  }
  myservo.writeMicroseconds(ms);
  Serial.println(ms);
}
