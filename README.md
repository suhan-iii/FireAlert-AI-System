# 🔥 FireAlert AI System – Real-time Fire Detection & Alerting

This is an AI-integrated *fire detection system* designed to predict potential fire hazards using real-time data from gas, temperature, and smoke sensors. The system is deployed on an *ESP32* microcontroller and planned to send *real-time alerts* through a *Flutter-based mobile app. Currently, the AI model is being developed using **Edge Impulse, with a roadmap to upgrade to a **custom AI model built from scratch*.

---

## 🚀 Project Phases

- [x] Phase 1: Train AI model using Edge Impulse
- [ ] Phase 2: Deploy model on ESP32 and trigger buzzer alerts
- [ ] Phase 3: Build Flutter app for fire alerts and status monitoring
- [ ] Phase 4: Upgrade to a self-built AI model using Python (from scratch)

---

## 🧠 Key Features

- ✅ Sensor-based fire prediction using AI
- ✅ Buzzer alarm for immediate local alerts
- 🔜 Mobile alert notifications (Flutter app)
- 🔜 Upgrade to custom AI model for improved control and accuracy

---

## 🔧 Hardware Used

| Component                  | Description                         |
|----------------------------|-------------------------------------|
| ESP32                      | Microcontroller for processing      |
| MQ-2 Gas Sensor            | Detects smoke and flammable gases   |
| DHT22 Temperature Sensor   | Measures temperature and humidity   |
| IR Proximity Sensor        | Detects physical obstacles/motion   |
| Buzzer                     | Sounds alarm during fire detection  |

---

## ⚙ AI Model (Current)

- Platform: *Edge Impulse*
- Dataset: Collected from gas, temperature, and IR sensors
- Purpose: Detect patterns indicating possible fire risks
- Deployment Target: *ESP32* (TinyML model via Edge Impulse)

---

## 📱 Flutter App (Planned)

The Flutter app will:
- Display real-time fire detection status
- Send push alerts when fire is detected
- Optionally display alert history and temperature graphs

Backend:
- Firebase (Realtime DB or Firestore)
- Alternatively, REST API with Flask

---

## 🔄 Planned Upgrade: Custom AI from Scratch

This project will evolve from Edge Impulse to a fully *custom-built AI model* trained from scratch using Python and deployed manually.

### 🎯 Goals:
- Full control over preprocessing, training, and architecture
- Learn model behavior for improvement
- Expand dataset and use more advanced models if required

### 🧪 Planned Tech Stack:

| Task              | Tools/Libraries                        |
|-------------------|----------------------------------------|
| Data Collection   | Arduino → CSV Logs                     |
| Model Training    | Python, Pandas, Scikit-learn, TensorFlow/Keras |
| Deployment        | TFLite / Flask REST API to ESP32       |
| Alert System      | Flutter + Firebase                     |
