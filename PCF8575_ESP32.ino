#include <Wire.h>
#include <PCF8575.h>

// Set the I2C address of the PCF8575 (usually 0x20 to 0x27)
PCF8575 pcf8575(0x20);

// Enable pin
const int enablePin = 33;

// Blink mode flag
bool blinkMode = false;

// Function prototypes
bool setAllPins(int state);
void toggleBlinkMode();

void setup() {
  Serial.begin(115200);
  Wire.begin(21, 22); // Initialize I2C with SDA and SCL pins

  pinMode(enablePin, OUTPUT);
  digitalWrite(enablePin, HIGH); // Enable the PCF8575

  // Initialize the PCF8575
  if (!pcf8575.begin()) {
    Serial.println("PCF8575 not connected!");
    while (1); // Halt execution if the device is not found
  }
  Serial.println("PCF8575 initialized successfully!");

}
  
void loop() {
  // Blink all pins on
  for (int i = 0; i < 16; i++) {
    pcf8575.write(i, HIGH);
    delay(250);
  }
  delay(2000); // Wait for 5 seconds

  // Blink all pins off
  for (int i = 0; i < 16; i++) {
    pcf8575.write(i, LOW);
    delay(250);
  }
  delay(2000); // Wait for 5 seconds
}




  

 
