/*
 TSOC-ESP8266 Blink by Tom Moxon/David Turnbull
 Blink the RED LED on the TSOC-ESP8266 Board
 This example code is in the public domain
 
 The RED LED on the TSOC-ESP8266 Board is connected to "BUILTIN_LED",
 so that it works with most examples that use "BUILTIN".
 The RED, GREEN, and BLUE LEDs can also referenced using SLOT_RED, SLOT_GREEN, and SLOT_BLUE.
*/

void setup() {
  pinMode(SLOT_RED, OUTPUT);     // Initialize the RED LED pin as an output
  pinMode(SLOT_GREEN, OUTPUT);   // Initialize the GREEN LED pin as an output
  pinMode(SLOT_BLUE, OUTPUT);    // Initialize the BLUE LED pin as an output  
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(SLOT_RED,   LOW);    // Turn the LED on by making the voltage LOW
  digitalWrite(SLOT_GREEN, HIGH);   // Turn the LED off by making the voltage HIGH
  digitalWrite(SLOT_BLUE,  HIGH);
  delay(1000);                      // Wait for a second
  digitalWrite(SLOT_RED,   HIGH);
  digitalWrite(SLOT_GREEN, LOW);
  delay(1000);
  digitalWrite(SLOT_GREEN, HIGH);
  digitalWrite(SLOT_BLUE,  LOW);
  delay(1000);  
}
