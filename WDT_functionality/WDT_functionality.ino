#include <mbed.h>

using namespace mbed;

Watchdog &watchdog = Watchdog::get_instance();

int counter = 0;

void setup() {
  Serial.begin(9600);
  while (!Serial);

  Serial.println("Nano BLE Sense WDT Demo");

  // Start watchdog (4000 ms)
  watchdog.start(4000);
}

void loop() {

  counter++;

  Serial.print("Counter : ");
  Serial.println(counter);

  if(counter < 10)
  {
      watchdog.kick();      // Feed the watchdog
  }
  else
  {
      Serial.println("Program Hanging...");
      while(1)
      {
          // Infinite loop
          // WDT will reset board
      }
  }

  delay(1000);
}