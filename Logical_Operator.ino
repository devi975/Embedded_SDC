void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  int a,b;
  a=5,b=7;
  if(a==5 && b==7)
  {
    Serial.println("Both Conditions are same");
    
  }
  else
  {
    Serial.println("Both Conditions are not same");
  }
  if(a==5 || b==8)
  {
    Serial.println("one condition is same");
    
  }
  else
  {
    Serial.println("none of the conditions is same");
  }


}

void loop() {
  // put your main code here, to run repeatedly:

}
