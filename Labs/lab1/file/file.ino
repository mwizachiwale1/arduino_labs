
#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to

LiquidCrystal lcd(8, 9, 4, 5, 6, 7);

const int buttonValue =  A0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  lcd.begin(16, 2);
  lcd.setCursor(0,0);
  lcd.print("Hello World");
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(analogRead(buttonValue));
  int value = analogRead(buttonValue);
   lcd.setCursor(0,1);
  if((value > 2) & (value < 150)){
    Serial.println("Left     ");
    lcd.print("Left    ");
   }else if((value > 150) & (value < 300)){
    Serial.println("Up      ");
    lcd.print("Up       ");
   }else if((value > 340) & (value < 400)){
     Serial.println("Down    ");
     lcd.print("Down     ");
    }
    else if((value > 500) & (value < 700)){
      Serial.println("Right     ");
      lcd.print("Right   ");
    }
    else if((value > 720) & (value < 800)){
      Serial.println("Select");
      lcd.print("Select   ");
    }
 

}
