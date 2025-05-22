# Futur-Tech-Design-

## 🎯 Objectif du projet

Créer un petit système interactif où :
- Le **bouton blanc** allume les LEDs.
- Le **bouton rouge** les éteint.
- Le **joystick** permet :
  - d’**augmenter/diminuer la luminosité** (haut/bas),
  - de **changer la couleur** (gauche/droite).

Le tout est contrôlé via une carte **Seeed Studio XIAO ESP32-C6** dans l’**IDE Arduino 2.3.6**.

---

## 🧩 Composants utilisés

| Composant         | Rôle                                | Connexions GPIO       |
|------------------|--------------------------------------|------------------------|
| Seeed XIAO ESP32-C6 | Microcontrôleur                     | -                      |
| Joystick          | Contrôle luminosité + couleur       | GPIO 17, 18, 19, 20    |
| Bouton blanc      | Allumer les LEDs                    | GPIO 2 + GND           |
| Bouton rouge      | Éteindre les LEDs                   | GPIO 0 + GND           |
| LEDs RGB (x3)     | Éclairage RGB (branchées ensemble)  | GPIO 5 (R), 6 (G), 7 (B) |

---

## 🔧 Étapes de branchement

### 1. Boutons

- Bouton **blanc** : une patte sur **GPIO 2**, l’autre sur **GND**
- Bouton **rouge** : une patte sur **GPIO 0**, l’autre sur **GND**

### 2. Joystick
- **Vertical** (Y) → GPIO 17
- **Horizontal** (X) → GPIO 18
- **VCC** → 3V3
- **GND** → GND

### 3. LEDs RGB
- R → GPIO 5
- G → GPIO 6
- B → GPIO 7
- VCC → 3V3
- GND → GND


Code qui marche : 

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

 
 
