int val = 0;
float mv = 0,cel = 0;
void setup()
{
  pinMode(A5,INPUT);
  Serial.begin(9600);
}
void loop() {
  val = analogRead(A5);
  Serial.println(val);
  mv = (val/1024.0)*5000;
  cel = mv/10;
  //float farth = (cel*9)/5 + 32;
  Serial.println(cel);
  delay(1000);
}
