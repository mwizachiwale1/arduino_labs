int leds[] = {2, 3, 4,5,6,7};

int k = 2;
int direction = 1;
int currentLed = 2;

void setup() {
  for(int i = 2; i <= 7; i++)
    pinMode(i, OUTPUT);

  
}

void loop() {
  digitalWrite(currentLed, 1);
  delay(analogRead(A0));
  digitalWrite(currentLed, 0);

  if(currentLed == 7)
    direction = -1;
  
  if(currentLed == 2)
    direction = 1;

  currentLed = currentLed + direction;

  

}
