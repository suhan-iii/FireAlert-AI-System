#include <DHT.h>

#define DHTPIN 14        // Your DHT22 is on GPIO 14
#define DHTTYPE DHT22

#define MQ2_PIN 34       // MQ2 analog output to GPIO 34
#define IR_PIN 32        // IR sensor output to GPIO 32
#define BUZZER_PIN 25    // Buzzer connected to GPIO 25

// Adjustable thresholds
#define TEMP_THRESHOLD 55.0       // °C - temperature to detect fire
#define GAS_THRESHOLD 1700         // MQ-2 analog value threshold
#define IR_FIRE_TRIGGER LOW       // IR gives LOW when flame/movement is detected

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(115200);
  dht.begin();

  pinMode(IR_PIN, INPUT);
  pinMode(BUZZER_PIN, OUTPUT);
  digitalWrite(BUZZER_PIN, LOW);
}

void loop() {
  float temperature = dht.readTemperature();
  int gasValue = analogRead(MQ2_PIN);
  int irValue = digitalRead(IR_PIN);

  // Print readings to Serial Monitor
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.print(" °C, Gas: ");
  Serial.print(gasValue);
  Serial.print(", IR: ");
  Serial.println(irValue == LOW ? "🔥 Detected" : "Clear");

  // Determine if fire conditions are met
  bool fireDetected = false;

  if (!isnan(temperature) && temperature >= TEMP_THRESHOLD) {
    fireDetected = true;
    Serial.println("🔥 Fire due to temperature!");
  }

  if (gasValue >= GAS_THRESHOLD) {
    fireDetected = true;
    Serial.println("🔥 Fire due to gas/smoke!");
  }

  if (irValue == IR_FIRE_TRIGGER) {
    fireDetected = true;
    Serial.println("🔥 Fire/flame detected by IR sensor!");
  }

  // Buzzing logic
  if (fireDetected) {
    digitalWrite(BUZZER_PIN, HIGH); // Turn ON buzzer
  } else {
    digitalWrite(BUZZER_PIN, LOW);  // Turn OFF buzzer
  }

  delay(1000);  // Wait for 1 second before next reading
}
