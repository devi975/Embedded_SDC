#include <Servo.h>
Servo myservo;
int val,ServoPin=9,angle=0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  myservo.attach(ServoPin);
  Serial.println("Enter Inputs a/b/c/d:");

}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available())
  {
    int inByte = Serial.read();
         switch (inByte) {
         case 'a':
           angle =0;
           break;
         case 'b':
            angle =60;
            break;
         case 'c':
            angle =120;
            break;   
              
         }
         Serial.println(angle);
  }
 myservo.write(angle);
 delay(100); 

}
