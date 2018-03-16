#include <GDBStub.h>

extern "C" void gdb_do_break();



// =======================

// void setup() {
// }

// void loop() {
// }



// =======================

// void setup() {
// 	Serial.begin(115200);
// }

// void loop() {
// }



// =======================

// extern "C" void Cache_Read_Disable_2();
// extern "C" void Cache_Read_Enable_2();

// void setup() {
// }

// void ICACHE_RAM_ATTR loop() {
// 	Cache_Read_Disable_2();
// 	// gdb_do_break();
// 	// millis();
// 	// *((int*)0) = 0;
// 	Cache_Read_Enable_2();
// }



// =======================

#include <FastLED.h>

#define NUM_LEDS 16
CRGB leds[NUM_LEDS];

void setup() {
	FastLED.addLeds<WS2813, 4, GRB>(leds, NUM_LEDS);
}

void loop() {
	static unsigned long lastDraw = millis();
	unsigned long now = millis();
	if (now - lastDraw > 17) {
		// gdb_do_break();
		lastDraw = now;
		fill_solid(leds, NUM_LEDS, CRGB::Yellow);
		fadeToBlackBy(leds, NUM_LEDS, beatsin8(30, 0, 255));
		FastLED.show();
	}
}
