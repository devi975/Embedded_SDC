void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()>0)
  {
    Serial.println("you Entered....");
    String inputString = Serial.readString();
    Serial.println(inputString);
    if(inputString=="on")
    {
      digitalWrite(13, HIGH);
      Serial.println("LED ON");
    }
    else if(inputString=="off")
    {
      digitalWrite(13, LOW);
      Serial.println("LED OFF");
      
    }
  }

}
