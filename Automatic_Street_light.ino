void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  pinMode(A0,INPUT);
  Serial.begin(9600);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  int sw;
  sw=analogRead(A0);
  Serial.println(sw);
  if(sw>500)
  {
    digitalWrite(13,HIGH);
  }
  else
  {
    digitalWrite(13,LOW);
  }

}
