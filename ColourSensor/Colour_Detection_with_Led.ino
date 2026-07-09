#include <Wire.h>
#include "rgb_lcd.h"
#include <Arduino_APDS9960.h>

rgb_lcd lcd;

void setup() {

  Serial.begin(9600);
  while (!Serial);

  lcd.begin(16,2);

  if (!APDS.begin()) {
    Serial.println("APDS9960 not found");
    while(1);
  }

  lcd.setRGB(255,255,255);
}

void loop() {

  while(!APDS.colorAvailable()) {
    delay(5);
  }

  int r, g, b;

  APDS.readColor(r, g, b);

  String colorName = "UNKNOWN";

  // RED
  if(r > g && r > b){

    colorName = "RED";
    lcd.setRGB(255,0,0);

  }

  // GREEN
  else if(g > r && g > b){

    colorName = "GREEN";
    lcd.setRGB(0,255,0);

  }

  // BLUE
  else if(b > r && b > g){

    colorName = "BLUE";
    lcd.setRGB(0,0,255);

  }

  lcd.clear();

  lcd.setCursor(0,0);
  lcd.print(colorName);

  lcd.setCursor(0,1);
  lcd.print("R");
  lcd.print(r);

  lcd.print(" G");
  lcd.print(g);

  Serial.print("Red: ");
  Serial.println(r);

  Serial.print("Green: ");
  Serial.println(g);

  Serial.print("Blue: ");
  Serial.println(b);

  Serial.print("Detected: ");
  Serial.println(colorName);

  Serial.println();

  delay(500);
}