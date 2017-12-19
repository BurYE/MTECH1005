#include <Servo.h>



int sensorPin = A4;
int sensorValue = 0;

Servo myservo;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);

  myservo.attach(3);

}

void loop() {
  // put your main code here, to run repeatedly:

  int val = analogRead(sensorPin);
  int mappedVal = map(val, 0, 1023, 0, 990);
  Serial.println(mappedVal);

  sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue);

  if (mappedVal >= 210) {
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, HIGH);
    noTone(10);
    myservo.write(30);


  } else if (mappedVal >= 175) {
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, HIGH);
    digitalWrite(9, LOW);
    tone(10, 369.99);
    myservo.write(50);

  } else if (mappedVal >= 150) {
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, HIGH);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    tone(10, 415.30 );
    myservo.write(75);

  } else if (mappedVal >= 125) {
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, HIGH);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    tone(10, 466.16);
    myservo.write(90);

  } else if (mappedVal >= 65) {
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    tone(10, 523.25);
    myservo.write(110);

  } else if (mappedVal >= 0) {
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    tone(10, 783.99);
    myservo.write(140);


  }

  delay(50);
}
