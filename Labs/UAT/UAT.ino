#include <LiquidCrystal.h>

const int rs = 8, en = 9, d4 = 4, d5 = 5, d6 = 6, d7 = 7;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

#define temp_analog_pin A0
char serial_in;
void setup() {
  lcd.begin(16, 2);
  Serial.begin(9600);
  lcd.setCursor(0, 0);
}

void loop() {
  for(int lcd_cursor=0; lcd_cursor<32;lcd_cursor++){
    if (lcd_cursor == 15){
      lcd.setCursor(0, 1);
      
    }
    else if (lcd_cursor == 31) lcd.home();
      while(!Serial.available());
      
      serial_in = Serial.read();
      Serial.print(serial_in);
      lcd.write(serial_in);
  }
  
  
  delay(2000);
  lcd.clear();
}
