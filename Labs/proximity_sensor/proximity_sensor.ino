 /* Created by Mwiza Chiwale
 *  Noise maker Alert
 *  Makes buzzing sound when noice exceeds a certain level in a room
 *  
 *  Circuit
 *  - LED attached to pin 4 to ground through a 220 ohm resistor
 *  - Buzzer attached to pin 2 to ground.
 *  - Sound sensor attached to pin A0
 *  
 *  Created By Mwiza Chomba Chiwale
 *  Date: 13/01/2023 Friday
 *  
 */
int sensor = 2;
int LED = 7;
int val = 0;
int tracker = 0;
void setup(){
  Serial.begin(9600);
  pinMode(sensor, INPUT_PULLUP);
  pinMode(LED, OUTPUT);
  
}

void loop(){
  val =  digitalRead(sensor);
  if(val == 1){
    if(tracker == 0){
      digitalWrite(LED, HIGH);
      tracker = 1;
      delay(50);
      
    } else{
      digitalWrite(LED, LOW);
      tracker = 0;
      delay(50);
    }
    
    }
  Serial.println(val);
//  delay(100);
//delay(50);
}
