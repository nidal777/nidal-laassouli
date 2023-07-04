/*
  -  Lights up LED according to push-button status - Written by Mr.NIDAL LAASSOULI 

  for more & more programms visit:  https://github.com/nidal777/nidal-laassouli

*/

// We declare all variables  that we'll need
 int button = 2;  // the number of the pushbutton pin is 2 
 int led;    // Statement led 
 // variables will change:
 int stat_button; // variable for reading the pushbutton status

void setup()
{
    pinMode(button, INPUT);  // initialize the pushbutton pin as an input:
    pinMode(led, OUTPUT);   // initialize the LED pin as an output:


void loop()
{
  stat_button=digitalRead(button);
//If pushbutton pressed
    if (stat_button==LOW) // tests if the button has a value of 1
  
        // Turn on LED
    {
        digitalWrite(led, HIGH);  
    }

    else
        // tests if the button has a value of 0
        //Turn off LED
    {
        digitalWrite(led, LOW);  // éteint la LED
    }
}