#include <LiquidCrystal.h>

const int rs = 8, en = 9, d4 = 4, d5 = 5, d6 = 6, d7 = 7;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

#define temp_analog_pin A0

void setup() {
  lcd.begin(16, 2);

  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
}

void loop() {

  // Read the analog value from the temperature sensor
  int tempReading = analogRead(temp_analog_pin);
  
  // Convert the analog reading to voltage (assuming 5V and 10-bit ADC)
  float voltage = tempReading * (5.0 / 1023.0);
  
  // Convert the voltage to Celsius (LM35 gives 10mV per degree Celsius)
  float celsius = voltage * 100.0;
  
  // Convert Celsius to Fahrenheit
  float fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
  
  // Convert Celsius to Kelvin
  float kelvin = celsius + 273.15;
  
  // Convert Celsius to Reaumur
  float reaumur = celsius * 0.8;
  
  // Display temperature values on the LCD
  lcd.setCursor(6, 0);
  lcd.print(celsius, 1);
  lcd.print("C");
  
  lcd.setCursor(0, 1);
  lcd.print("F:");
  lcd.print(fahrenheit, 1);
  
  lcd.setCursor(10, 0);
  lcd.print("K:");
  lcd.print(kelvin, 1);
  
  lcd.setCursor(10, 1);
  lcd.print("R:");
  lcd.print(reaumur, 1);
  
  delay(2000);
  
}
