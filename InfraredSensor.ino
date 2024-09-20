int sensorPin = 4;
int buzzer =5;
int sensorValue = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(buzzer, OUTPUT);
  pinMode(sensorPin, INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  sensorValue = digitalRead(sensorPin);
  digitalWrite(buzzer, HIGH);
  Serial.println(sensorValue);
  if(sensorValue == LOW)
  {
    digitalWrite(buzzer, LOW);
  }
  else
  {
    digitalWrite(buzzer, HIGH);
  }
  delay(1000);

}
