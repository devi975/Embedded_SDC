const int switchPin1 = 4,switchPin2 = 5;
const int MotorPin1 = 6, MotorPin2 = 7;
int switchState1 = 0, switchState2 = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(MotorPin1, OUTPUT);
  pinMode(MotorPin2, OUTPUT);
  pinMode(switchPin1, OUTPUT);
  pinMode(switchPin2, OUTPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  switchState1 = digitalRead(switchPin1);
  switchState2 = digitalRead(switchPin2);
  if(switchState1 == HIGH)
  {
    digitalWrite(MotorPin1,HIGH);
    digitalWrite(MotorPin2,LOW);
  }
  else if (switchState2 == HIGH)
  {
    digitalWrite(MotorPin1,LOW);
    digitalWrite(MotorPin2,HIGH);
    
  }
  else
  {
    digitalWrite(MotorPin1,LOW);
    digitalWrite(MotorPin2,LOW);
  }


}
