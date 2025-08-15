# FireGuard AI — Flutter App

This is the Flutter frontend for **FireGuard AI**, displaying live fire detection status and sensor readings from **Firebase Realtime Database**, with push notifications via **FCM**.

## Prerequisites
- Flutter SDK (3.x)
- A Firebase project (Realtime Database + Cloud Messaging enabled)
- Android Studio / Xcode for building mobile apps

## Setup
1. Add your Firebase config files:
   - **Android**: place `google-services.json` into `android/app/`
   - **iOS**: place `GoogleService-Info.plist` into `ios/Runner/`
2. Run:
   ```bash
   flutter pub get
   flutter run
   ```

## Database Structure (example)
```
fireguard/
  sensors/
    mq2: 123.4
    temperature: 29.1
    humidity: 65.0
  status/
    fireDetected: false
    updatedAt: 1723700000  # epoch seconds
```

Update your ESP32 firmware to push data to the above paths.

## Topics & Notifications
The app subscribes to the `fireguard-alerts` topic for FCM. From your backend or Cloud Functions, send a notification to that topic to alert all devices.

## Notes
- Ensure you have added the Firebase dependencies in `pubspec.yaml`.
- For iOS, enable Push Notifications and Background Modes.
