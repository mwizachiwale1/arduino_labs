int ledR = 9;
int ledG = 10;
int ledB = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledR, OUTPUT);
  pinMode(ledG, OUTPUT);
  pinMode(ledB, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(ledR, 98);
  analogWrite(ledG, 60);
  analogWrite(ledB, 60);

}
