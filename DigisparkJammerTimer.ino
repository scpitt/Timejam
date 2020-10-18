
// Digispark Timing code for 433.92MHz Jammer to work with 
// Hackrf Portapack for Rolling Code Capture. Jammer is made frome 5x433MHz Transmitter 
// Modules with LED and Resistor. Connected to male USB. 

// Join middle pin to positive pin on rf modules then connect positive pin to pin 1 on the Digispark.


void setup() {
  // put your setup code here, to run once:
  pinMode(1, OUTPUT); 
  digitalWrite(1, HIGH);
  delay (30000);
  digitalWrite(1, LOW);
}
void loop () {
  
}
