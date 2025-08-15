




# 🔥 FireGuard

An AI-powered fire detection system that uses real-time sensor data to detect fire and alert users via hardware (buzzer) and software (Flutter app - in progress). Built using Edge Impulse for ML deployment on ESP32.

---

## 🔍 Project Overview

This project integrates *Edge AI, **IoT hardware, and **mobile development* to provide a low-cost, scalable fire detection solution. It’s built with modularity in mind, so hardware and software work both independently and together.

✅ *Completed:*
- Sensor integration with ESP32
- AI model training & on-device inference
- Buzzer alerts based on AI predictions
- Clean and documented code structure

🚧 *In Progress:*
- Flutter app for real-time status and mobile alerts
- Firebase integration for syncing and storing alerts
- Push notifications via Firebase Cloud Messaging (FCM)

🎯 *Goal:* A complete end-to-end fire detection system for home/industry safety with app monitoring and instant alerts.

---

## 🌟 Features

- AI-based fire detection using Edge Impulse
- Real-time sensor data processing on ESP32
- Immediate buzzer alerts
- Flutter app (upcoming) for remote monitoring and alerts
- Modular hardware-software architecture

---

## 🧠 Sensors Used

- *MQ-2* – Gas & Smoke Sensor  
- *DHT22* – Temperature & Humidity Sensor  
- *IR Proximity Sensor* – (Optional)

---

## ⚙ Edge Impulse CLI Setup

1. *Install Node.js* → [https://nodejs.org](https://nodejs.org)  
2. *Install Edge Impulse CLI*  
   ```bash
   npm install -g edge-impulse-cli

3. Login & Connect Device

edge-impulse-daemon


4. Stream Sensor Data

edge-impulse-data-forwarder

Map sensor data to features in the browser



5. Model Training

Use Edge Impulse Studio to collect data, train, and test



6. Deploy

Export Arduino library → Import into Arduino IDE → Upload to ESP32





---

🚀 How It Works

ESP32 reads live data from sensors.

AI model (from Edge Impulse) predicts fire presence.

If fire is detected:

Buzzer activates

(Later) App notifies user via push notification




---

📱 App Integration (Upcoming)

The Flutter app will:

Display real-time fire detection status

Sync with Firebase (Realtime Database)

Send mobile push alerts using FCM

Show buzzer status, timestamps, and event logs


Planned Stack

Flutter for UI

Firebase for backend sync

FCM for notifications

Provider or Riverpod for state management



---

📦 Project Structure

├── hardware/           # ESP32 + Arduino code
├── edge-impulse/       # ML model files & deployment
├── flutter-app/        # Flutter code (to be added)
├── docs/               # Images, schematics, logs
└── README.md


