/*
</> written by Mr. Nidal LAASSOULI.
 Good Luck everybody. */
 
  // Définition des broches*/

const int MQ4_Pin = A0;       // Broche analogique à laquelle le capteur MQ-4 est connecté
const int Seuil_Gaz = 450;    // Seuil pour détecter le gaz (ajustez selon votre capteur)

void setup() {
  Serial.begin(9600);         // Initialisation de la communication série
  pinMode(MQ4_Pin, INPUT);    // Configuration de la broche du capteur en entrée
}

void loop() {
  int valeurMQ4 = analogRead(MQ4_Pin);  // Lecture de la valeur analogique du capteur

  // Affichage de la valeur brute (facultatif)
  Serial.print("Valeur MQ-4: ");
  Serial.println(valeurMQ4);                    

  // Vérification du seuil pour détecter le gaz
  if (valeurMQ4 > Seuil_Gaz) {
    Serial.println("Gas has been detected");
  } else {
    Serial.println("Gas has not been detected yet");
  }

  delay(1000);  // Attendre 1 seconde avant la prochaine lecture
}
