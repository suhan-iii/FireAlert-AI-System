# 🔥 FireGuard

An AI-powered fire detection system that uses real-time sensor data to detect fire conditions and alert users through hardware and a web dashboard. The system is built around an ESP32-based sensor node running an Edge Impulse ML model, with a React frontend, FastAPI backend, and PostgreSQL database for monitoring, alerts, and historical analysis.

---

## 🔍 Project Overview

This project combines Edge AI, IoT hardware, and modern web application development to provide a low-cost, scalable fire detection solution for homes, warehouses, and industrial environments. The system continuously reads sensor values from an ESP32 device, runs AI-based inference to detect fire risk, triggers local hardware alerts, and sends event data to a central web platform for remote monitoring.

✅ Completed:
- Sensor integration with ESP32
- AI model training and on-device inference
- Buzzer alerts based on AI predictions
- Real-time event capture and alert processing

🚧 In Progress:
- React web dashboard for live status and historical alerts
- FastAPI backend for API services and alert logic
- PostgreSQL database for storing incidents and sensor records
- Real-time monitoring and admin controls

🎯 Goal:
A complete end-to-end fire detection system with local alerts, cloud/backend integration, and a web interface for monitoring fire events in real time.

---

## 🌟 Features

- AI-based fire detection using Edge Impulse
- Real-time sensor data processing on ESP32
- Buzzer alerts for local emergency response
- Web application built with React for monitoring and control
- FastAPI-based backend for APIs and logic processing
- PostgreSQL database for storing alerts, events, and historical data
- Modular hardware-software architecture for easy expansion

---

## 🧠 Sensors Used

- MQ-2 – Gas & Smoke Sensor
- DHT22 – Temperature & Humidity Sensor
- IR Proximity Sensor – Optional

---

## ⚙️ Edge Impulse CLI Setup

1. Install Node.js → https://nodejs.org
2. Install Edge Impulse CLI

   ```bash
   npm install -g edge-impulse-cli
   ```

3. Log in and connect the device

   ```bash
   edge-impulse-daemon
   ```

4. Stream sensor data

   ```bash
   edge-impulse-data-forwarder
   ```

5. Train the model in Edge Impulse Studio

6. Deploy the model

   Export the Arduino library, import it into the Arduino IDE, and upload it to the ESP32.

---

## 🚀 How It Works

ESP32 reads live data from connected sensors.

The AI model (trained in Edge Impulse) analyzes the incoming sensor values and predicts whether a fire risk is present.

If fire is detected:
- the buzzer is triggered locally
- the event is sent to the backend
- the web dashboard updates with the alert
- the alert is stored in PostgreSQL for review and reporting

---

## 🌐 Web Application Stack

The software platform for this project is built using:

- React – frontend dashboard and user interface
- FastAPI – backend API and business logic
- PostgreSQL – persistent storage for alerts and sensor data

The web app will provide:
- live fire status overview
- alert history and event logs
- dashboard charts and analytics
- admin controls and monitoring panels
- secure API connectivity with the ESP32 system

---

## 📦 Project Structure

```text
├── hardware/           # ESP32 + Arduino code
├── edge-impulse/       # ML model files and deployment assets
├── web/                # React frontend application
├── api/                # FastAPI backend services
├── database/           # SQL schema and migration files
├── docs/               # Images, schematics, and logs
├── README.md
└── .gitignore
```

---

## 🏗️ Recommended Architecture

```text
ESP32 Sensor Node
      ↓
AI Fire Detection Model
      ↓
Local Buzzer Alert
      ↓
FastAPI Backend
      ↓
PostgreSQL Database
      ↓
React Web Dashboard
```

This architecture allows the system to detect fire conditions quickly at the edge while also providing a user-friendly monitoring interface for real-time and historical review.
