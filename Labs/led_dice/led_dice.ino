// LED DICE
// @author: Mwiza Chiwale
// @comp#: 2020010470
// @lecturer: Prof.J.Phiri
// @course: CSC 4130
// @date: 31/0/2024
// @description: This code implements the LED dice (project 0) game on the arduino Uno

// LEDs
const int pinLeds1 = 2;
const int pinLeds2 = 3;
const int pinLeds3 = 4;
const int pinLeds4 = 5;
const int pinLeds5 = 6;
const int pinLeds6 = 7;
const int pinLeds7 = 8;
const int buttonPin = 11;

// Stores the random number
unsigned char ran = 0;

int buttonState;

void setup()
{
  Serial.begin(9600);
  pinMode(pinLeds1, OUTPUT);
  pinMode(pinLeds2, OUTPUT);
  pinMode(pinLeds3, OUTPUT);
  pinMode(pinLeds4, OUTPUT);
  pinMode(pinLeds5, OUTPUT);
  pinMode(pinLeds6, OUTPUT);
  pinMode(pinLeds7, OUTPUT);
  pinMode(buttonPin, INPUT);
  randomSeed(analogRead(0));
}
void loop()
{
  led_clear();
  buttonState = digitalRead(buttonPin);
  while(buttonState == LOW){
    Serial.println("Pressed");
    
    ran = random(1, 8);
    Serial.println(ran);
    // now arduino will toss the die
    if(ran == 1){
      digitalWrite(pinLeds4, HIGH);
        delay(5);
        while(digitalRead(buttonPin) == HIGH);
        led_clear();
    } else if (ran == 2){
      digitalWrite(pinLeds1, HIGH);
        digitalWrite(pinLeds7, HIGH);
        delay(5);
        while(digitalRead(buttonPin) == HIGH);
        led_clear();
    } else if (ran == 3){
      digitalWrite(pinLeds1, HIGH);
        digitalWrite(pinLeds4, HIGH);
        digitalWrite(pinLeds7, HIGH);
        delay(5);
        while(digitalRead(buttonPin) == HIGH);
        led_clear();
    }
     else if (ran == 4){
        digitalWrite(pinLeds1, HIGH);
        digitalWrite(pinLeds3, HIGH);
        digitalWrite(pinLeds5, HIGH);
        digitalWrite(pinLeds7, HIGH);
        delay(5);
        while(digitalRead(buttonPin) == HIGH);
        led_clear();
    }
    else if (ran == 5){
      digitalWrite(pinLeds1, HIGH);
        digitalWrite(pinLeds3, HIGH);
        digitalWrite(pinLeds4, HIGH);
        digitalWrite(pinLeds5, HIGH);
        digitalWrite(pinLeds7, HIGH);
        delay(5);
        while(digitalRead(buttonPin) == HIGH);
        led_clear();
    }
    else if (ran == 6){
      digitalWrite(pinLeds1, HIGH);
        digitalWrite(pinLeds2, HIGH);
        digitalWrite(pinLeds3, HIGH);
        digitalWrite(pinLeds5, HIGH);
        digitalWrite(pinLeds6, HIGH);
        digitalWrite(pinLeds7, HIGH);
        delay(5);
        while(digitalRead(buttonPin) == HIGH);
        led_clear();
    }
    else if (ran == 7){
      digitalWrite(pinLeds1, HIGH);
        digitalWrite(pinLeds2, HIGH);
        digitalWrite(pinLeds3, HIGH);
        digitalWrite(pinLeds4, HIGH);
        digitalWrite(pinLeds5, HIGH);
        digitalWrite(pinLeds6, HIGH);
        digitalWrite(pinLeds7, HIGH);
        delay(5);
        while(digitalRead(buttonPin) == HIGH);
        led_clear();
    }
    buttonState = HIGH;
    
  }
}

void led_clear (void){
    digitalWrite(pinLeds1, LOW);
    digitalWrite(pinLeds2, LOW);
    digitalWrite(pinLeds3, LOW);
    digitalWrite(pinLeds4, LOW);
    digitalWrite(pinLeds5, LOW);
    digitalWrite(pinLeds6, LOW);
    digitalWrite(pinLeds7, LOW);

}
