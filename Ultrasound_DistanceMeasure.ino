#include <SoftwareSerial.h>
const int trigPin = 12;
const int echoPin = 11;
long duration, inches, distance;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.print("Distance Measurement");
  delay(1000);

}

void loop() {
  // put your main code here, to run repeatedly:
  pinMode(trigPin, OUTPUT);
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  pinMode(echoPin, INPUT);
  duration = pulseIn(echoPin, HIGH);
  distance = duration*0.034/2;
  Serial.print("Distance:");
  Serial.print(distance);
  Serial.print("cm");
  delay(100);
  Serial.println();

}
