#include <Wire.h>

// Smart Home Environment Monitor
// Controller: ESP32
// Sensors: Temperature/Humidity, Air Quality, PIR, Light
// Outputs: OLED/LED/Buzzer/Relay

#define PIR_PIN 27
#define LIGHT_PIN 34
#define RELAY_PIN 26
#define LED_PIN 2

const float TEMP_LIMIT = 30.0;
const float HUMIDITY_LIMIT = 70.0;

unsigned long previousMillis = 0;
const unsigned long SAMPLE_INTERVAL = 10000;

void setup() {
  Serial.begin(115200);

  pinMode(PIR_PIN, INPUT);
  pinMode(LIGHT_PIN, INPUT);
  pinMode(RELAY_PIN, OUTPUT);
  pinMode(LED_PIN, OUTPUT);

  // Safe state after startup
  digitalWrite(RELAY_PIN, LOW);
  digitalWrite(LED_PIN, LOW);

  Serial.println("Smart Home Environment Monitor");
  Serial.println("System Started");
}

void loop() {

  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= SAMPLE_INTERVAL) {
    previousMillis = currentMillis;

    int motion = digitalRead(PIR_PIN);
    int lightValue = analogRead(LIGHT_PIN);

    // Example values for architecture demonstration.
    // Replace these with actual sensor readings
    // when the hardware sensors are connected.
    float temperature = 28.5;
    float humidity = 60.0;
    float airQuality = 35.0;

    Serial.println("----- Sensor Data -----");

    Serial.print("Temperature: ");
    Serial.print(temperature);
    Serial.println(" C");

    Serial.print("Humidity: ");
    Serial.print(humidity);
    Serial.println(" %");

    Serial.print("Air Quality: ");
    Serial.println(airQuality);

    Serial.print("Light: ");
    Serial.println(lightValue);

    Serial.print("Motion: ");
    Serial.println(motion ? "Detected" : "Not Detected");

    // Threshold checking
    if (temperature > TEMP_LIMIT ||
        humidity > HUMIDITY_LIMIT) {

      digitalWrite(RELAY_PIN, HIGH);
      digitalWrite(LED_PIN, HIGH);

      Serial.println("WARNING: Ventilation Required");
    }
    else {
      digitalWrite(RELAY_PIN, LOW);
      digitalWrite(LED_PIN, LOW);

      Serial.println("Environment Normal");
    }
  }
}
