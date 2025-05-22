const int boutonBlanc = 2; // Bouton blanc connecté au GPIO 2
const int boutonRouge = 3;   // Bouton blanc connecté au GPIO 2
const int ledRouge = 7;      // Exemple : LED connectée à GPIO 5

void setup() {
  Serial.begin(115200);
  pinMode(boutonBlanc, INPUT_PULLUP);
  pinMode(boutonRouge, INPUT_PULLUP);
  pinMode(ledRouge, OUTPUT);
  digitalWrite(ledRouge, LOW);       // LED en sortie
}

void loop() {
  if (digitalRead(boutonBlanc) == LOW) {
    // Bouton appuyé → allumer la LED
    digitalWrite(ledRouge, HIGH);
    Serial.println("BouttonBlanc");
  } 
   if (digitalRead(boutonRouge) == LOW) {
    // Bouton appuyé → allumer la LED
    digitalWrite(ledRouge, LOW);
    Serial.println("BouttonRouge");
  } 
  delay(100);
} 
﻿
Dr3k28
dr3k28
 
 