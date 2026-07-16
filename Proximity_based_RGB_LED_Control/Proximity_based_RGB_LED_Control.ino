#include <Arduino_APDS9960.h>

const int ledPin = LED_BUILTIN;

int handCount = 0;
bool handPresent = false;

// Adjust this threshold if needed
const int threshold = 100;

void setup() {
  Serial.begin(9600);
  while (!Serial);

  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);

  if (!APDS.begin()) {
    Serial.println("Error initializing APDS9960!");
    while (1);
  }

  Serial.println("==================================");
  Serial.println("Hand Detection Counter Started");
  Serial.println("Wave your hand 10 times.");
  Serial.println("==================================");
}

void loop() {

  if (APDS.proximityAvailable()) {

    int proximity = APDS.readProximity();

    // Hand comes close
    if (proximity > threshold && !handPresent) {
      handPresent = true;
      handCount++;

      Serial.print("Hand Detected! Count = ");
      Serial.println(handCount);

      // Target reached
      if (handCount >= 10) {
        digitalWrite(ledPin, HIGH);

        Serial.println("---------------------------");
        Serial.println("TARGET REACHED!");
        Serial.println("Green LED ON");
        Serial.println("---------------------------");
      }
    }

    // Hand removed
    if (proximity < threshold && handPresent) {
      handPresent = false;
      Serial.println("Hand Removed");
    }
  }

  delay(50);
}