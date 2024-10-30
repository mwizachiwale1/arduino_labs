// C++ code
//
const int buttonPin = 2;  // the number of the pushbutton pin
int buttonState = 0;  // variable for reading the pushbutton status
const int ledGreen = 4;    // the number of the LED pin
const int ledRed = 8;    // the number of the LED pin
const int onButton = 12;    // the number of the LED pin
float startTime = 0;
int maxAttempts = 7;
int records[7];
int currentIteration = 0;
int startProgram = 0;

// Millis


void setup()
{
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
  pinMode(onButton, INPUT);
  pinMode(ledGreen, OUTPUT);
  pinMode(ledRed, OUTPUT);
  Serial.begin(9600);
}

void loop()
{ 
  
  if(startProgram == 0){
    digitalWrite(ledRed, HIGH);
    digitalWrite(ledGreen, LOW);
    //delay(4000);
//    float sometime = millis();
//    while(millis() - sometime <= 4000){
//      Serial.print(".");
//      }
    while(digitalRead(onButton) == 0);
     delay(1000);
      
      Serial.println("Button Clicked");
    startProgram = 1;
    digitalWrite(ledRed, LOW);
    
    
  } else{
       if(currentIteration < maxAttempts){
    
    //delay(random(100, 4000));
//    float sometime2 = millis();
//    float maxTime = random(100, 4000);
//    while(millis() - sometime2 <= maxTime){
//      Serial.print(".");
//      };
    digitalWrite(ledGreen, HIGH);
    Serial.println("Light On");
    startTime = millis();

    while(digitalRead(buttonPin) == 0){
      // wait for buttiin press
      }
    records[currentIteration] = millis() - startTime;
    digitalWrite(ledGreen, LOW);
    Serial.println("Light off");
    Serial.println(currentIteration);
    Serial.println("");
    currentIteration = currentIteration + 1;
    delay(1000);
  
  } else {
      float average = findAverage(records);
      Serial.print("Avg RT ");
      Serial.print(average);
      Serial.print(" ms");
      Serial.println();
      
      Serial.println("nExt RouNd!!!");
      currentIteration = 0;
      startProgram = 0;
    }
    
    }

  
  
}

float findAverage(int times[]){
  // Calculate the sum of the array elements
  int sum = 0;
  for (int i = 0; i < maxAttempts; i++) {
    sum += times[i];
  }

  // Calculate the average
  float average = float(sum) / maxAttempts;
  return average;
}
