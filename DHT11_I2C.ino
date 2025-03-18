/*
</> written by Mr. Nidal LAASSOULI.
***__Temperature sensor with i2C LCD display!__***
If DATA pin 4 doesn't work, swap it with pin 2 - it has to be digital, not analog!
 Good Luck everybody. */

#include <DHT.h>

#define DHTPIN 4      // Broche DATA du DHT11
#define DHTTYPE DHT11 // Type de capteur

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
  
  Serial.println("Initialisation DHT11...");
  delay(2000); // Pré-chauffage du capteur
}

void loop() {
  delay(2000); // Délai requis entre les lectures
  
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();

  // Vérification des erreurs
  if (isnan(humidity) || isnan(temperature)) {
    Serial.println("Erreur de lecture!");
    Serial.println("Verifiez le cablage !! ");
    return;
  }

  // Affichage formaté
  Serial.print("Temp est: ");
  Serial.print(temperature);
  Serial.print(" °C  |  ");
  
  Serial.print("Humidite est: ");
  Serial.print(humidity);
  Serial.println(" %");
  
  Serial.println("-------------------");
}