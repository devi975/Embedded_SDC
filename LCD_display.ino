#include <LiquidCrystal.h>
LiquidCrystal lcd(2, 3, 4, 5, 6, 7);

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
  lcd.setCursor(5,0);
  lcd.print("WELCOME");
  lcd.setCursor(5,1);
  lcd.print("DEVI");
  delay(3000);
  lcd.clear();
  lcd.setCursor(4,0);
  lcd.print("EMBEDDED SDC");
  lcd.setCursor(5,1);
  lcd.print("ARDUINO UNO");

}

void loop() {
  // put your main code here, to run repeatedly:

}
