/*
 TSOC-ESP8266 Blink by Tom Moxon/David Turnbull
 Blink the RED LED on the TSOC-ESP8266 Board
 This example code is in the public domain
 
 The RED LED on the TSOC-ESP8266 Board is connected to "BUILTIN_LED"
*/

void setup() {
  pinMode(BUILTIN_LED, OUTPUT);     // Initialize the BUILTIN_LED pin as an output
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(BUILTIN_LED, LOW);   // Turn the LED on (Note that LOW is the voltage level
                                    // but actually the LED is on; this is because 
                                    // it is acive low on the TSOC-ESP8266)
  delay(1000);                      // Wait for a second
  digitalWrite(BUILTIN_LED, HIGH);  // Turn the LED off by making the voltage HIGH
  delay(2000);                      // Wait for two seconds (to demonstrate the active low LED)
}
