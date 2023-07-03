/*
  Blink - Written by Mr.NIDAL LAASSOULI 

  for more & more programms visit:  https://github.com/nidal777/nidal-laassouli

    - Turns an LED on for one second, then off for one second, repeatedly - 

*/

// Statement - declaration 
int led=2;

// the setup function runs once when you press reset or power the board

void setup()
             {
  // initialize digital pin LED_BUILTIN as an output.

  pinMode(led, OUTPUT);
             }

// the loop function runs over and over again forever
void loop()
            {
  digitalWrite(led, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                      // wait for a second
  digitalWrite(led, LOW);   // turn the LED off by making the voltage LOW
  delay(1000);                      // wait for a second
            }
