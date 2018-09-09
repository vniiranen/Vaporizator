#include <U8g2lib.h>
#include <U8x8lib.h>

#include <max6675.h>

MAX6675 ts(10, 9, 8);

void setup() {

Serial.begin(9600);
delay(500);

}

void loop() {
Serial.print(ts.readCelsius());
Serial.print(" C\n");
delay(200);

}
