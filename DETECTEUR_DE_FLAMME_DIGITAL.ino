/*</> written by Mr. Nidal LAASSOULI. 
 Good Luck everybody. */

const int digitalPin = 14;   // Digital broach

void setup() {
  Serial.begin(9600);
  pinMode(digitalPin, INPUT);
}

void loop() {
  
  int digitalState = digitalRead(digitalPin);

  

  // Inverted logic
  if (digitalState == LOW) {  // 0 = Detected 
    Serial.println("Detected");
  } else {                    // 1 = No Detected
    Serial.println("Not detected");
  }

  delay(200);
}