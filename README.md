




# 🔥 AI-Based Fire Detection System (ESP32 + Edge Impulse + Flutter)

An AI-powered fire detection system that uses real-time sensor data to detect fire and send alerts via buzzer (hardware) and a Flutter app (software, in progress). The AI model is trained and deployed using Edge Impulse.

## 🌟 Features

- Real-time fire prediction using AI (Edge Impulse)
- Alerts through buzzer (hardware) and app (software)
- Sensor data: gas, smoke, temperature, and IR
- Flutter app (upcoming) for monitoring and notifications

## 🧠 Sensors Used

- MQ-2 Gas Sensor
- DHT22 Temperature & Humidity Sensor
- IR Proximity Sensor

## ⚙ Edge Impulse CLI Setup

1. *Install Node.js* → [nodejs.org](https://nodejs.org/)  
2. *Install CLI*  
   ```bash
   npm install -g edge-impulse-cli

3. Login & Connect

edge-impulse-daemon
edge-impulse-data-forwarder

Map sensor data to Edge Impulse features.



4. Train your model on studio.edgeimpulse.com


5. Deploy to ESP32 by exporting Arduino Library from Edge Impulse and uploading it using Arduino IDE.



🚀 How It Works

ESP32 collects data from sensors.

Edge Impulse model classifies the data as FIRE or NO FIRE.

If fire is detected:

Buzzer triggers.

(Upcoming) App sends alert to the user.



📱 App Integration (Upcoming)

The Flutter app will:

Connect to ESP32 data via Firebase (or REST API)

Show real-time fire detection status

Trigger push notifications when fire is detected

Allow manual refresh or live updates


Planned Flutter Stack

Flutter for UI

Firebase Realtime DB (or API) to sync ESP32 data

Push Notifications using Firebase Cloud Messaging (FCM)

Provider or Riverpod for state management

Simple UI: Fire status, last update time, and buzzer status


📦 Project Structure

├── hardware/           # ESP32 + Arduino code
├── edge-impulse/       # AI model files (trained & deployed)
├── flutter-app/        # Flutter source (to be added)
├── docs/               # Images, schematics, model screenshots
└── README.md

