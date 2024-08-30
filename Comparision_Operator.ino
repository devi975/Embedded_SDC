void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  int a,b,c,d,e,f,g;
  a=5,b=7;
  if(a=b)
  {
    Serial.println("a is equal to b");
  }
  else
  {
    Serial.println("a is  not equal to b");
    
  }
  if(a>b)
  {
    Serial.println("a is  greater than b");
  }
  else
  {
    Serial.println("a is  less than b");
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
