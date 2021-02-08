/*
* LDR sensor tester
*/
const int ledPin = 13;

const int ldrPin = A0;

void setup() {

Serial.begin(9600);

pinMode(ledPin, OUTPUT);

pinMode(ldrPin, INPUT);

}

void loop() {

int ldr = analogRead(ldrPin);

if (ldr <= 200) {

digitalWrite(ledPin, 1);

Serial.print("Turn LED on : ");

Serial.println(ldr);

} else {

digitalWrite(ledPin, 0);

Serial.print("Turn LED off : ");

Serial.println(ldr);

}

}
