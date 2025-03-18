/*  </> Written by Mr.Nidal LAASSOULI .
***___Reading_RFID_CARD with i2C LCD display!___*** 
Good Luck everybody ! 

*/

#include <SPI.h>
#include <MFRC522.h>

#define RST_PIN 9
#define SS_PIN 10

MFRC522 mfrc522(SS_PIN, RST_PIN);

void setup() {
  Serial.begin(9600);
  SPI.begin();
  mfrc522.PCD_Init();
  Serial.println("Approchez la carte...");
}

void loop() {
  if (!mfrc522.PICC_IsNewCardPresent()) { // Attendre qu'une carte soit présente
    return;
  }

  if (!mfrc522.PICC_ReadCardSerial()) { // Si la lecture échoue, sortir
    return;
  }

  // Afficher l'UID
  Serial.print("UID : ");
  for (byte i = 0; i < mfrc522.uid.size; i++) {
    Serial.print(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " ");
    Serial.print(mfrc522.uid.uidByte[i], HEX);
  }
  Serial.println();

  mfrc522.PICC_HaltA();
}