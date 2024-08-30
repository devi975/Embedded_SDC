void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  int a,b,i;
  a=5,b=7;
  for(i=0;i<6;i++)
  {
    Serial.println(i);
  }
  Serial.println("FOR loop ends");
  while(i<b)
  {
    Serial.println(i);
    i++;
  }
  Serial.println("WHILE loop ends");
  do
  {
    Serial.println(i);
    i++;
    
  }while(i<b);
  Serial.println("DO WHILE loop Ends");
}

void loop() {
  // put your main code here, to run repeatedly:

}
