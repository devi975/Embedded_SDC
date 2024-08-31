const int switchpin=4;
const int ledpin=13;
int switchstate=0;


void setup() {
  // put your setup code here, to run once:
  pinMode(ledpin, OUTPUT);
  pinMode(switchpin, INPUT);
  
  

}

void loop() {
  // put your main code here, to run repeatedly:
  switchstate=digitalRead(switchpin);
  if(switchstate==LOW)
  {
    digitalWrite(ledpin, LOW);
    delay(1000);
    digitalWrite(ledpin, HIGH);
    delay(500);
   
   }
  
  
}
