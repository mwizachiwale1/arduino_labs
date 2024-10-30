int pot = A0;
int val; //variable to read from the pot
void setup() {
  Serial.begin(9600);

}
int prev;
void loop() {
  val = analogRead(pot);
  if(prev != val){
      Serial.println(val);
      prev = val;
    }
}
