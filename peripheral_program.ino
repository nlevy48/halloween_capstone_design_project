// Arduino code

// Define the sensor pin
  const int moisturePin = A0;
  const int heartRatePin = A1;
  const int stressguagePin = A2;
  const int whitePin = 3;
  const int yellowPin = 5;
  const int redPin = 6;

void setup() {
  // Start the Serial communication to send data to the computer
  Serial.begin(9600);
}

void loop() {
  // Read the sensor values
  int moistureValue = analogRead(moisturePin);

  int heartRateValue = analogRead(heartRatePin);

  int stressguageValue = analogRead(stressguagePin);

  // Calculate fear factor


  // Print the sensor value to the Serial Monitor
  Serial.println(moistureValue);

  // Print the sensor value to the Serial Monitor
  Serial.println(heartRateValue);

  // Input the sensor value to the LED
  analogWrite(whitePin, );

  // Input the sensor value to the LED
  analogWrite(yellowPin, 255);

  // Input the sensor value to the LED
  analogWrite(redPin, 255);

  // Wait for a second before reading the sensor again
  delay(1000);
}