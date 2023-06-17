# 1 "C:\\Users\\joche\\AppData\\Local\\Temp\\tmpa2xo6heg"
#include <Arduino.h>
# 1 "D:/0_Projekte/WLED with Motor/WLED-SR-for-party-light/wled00/wled00.ino"
# 13 "D:/0_Projekte/WLED with Motor/WLED-SR-for-party-light/wled00/wled00.ino"
#include "wled.h"
void setup();
void loop();
#line 15 "D:/0_Projekte/WLED with Motor/WLED-SR-for-party-light/wled00/wled00.ino"
void setup() {
  WLED::instance().setup();
}

void loop() {
  WLED::instance().loop();
}