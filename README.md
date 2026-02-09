# Greedy-Guts Project

ESP32-S3 T-Embed development with automatic CI/CD.

## Sketches

1. **Display Test** (`display_test (1).ino`)
   - Tests TFT display functionality
   - Shows colors and text in different orientations

2. **Encoder Test** (`encode_test.ino`)
   - Tests rotary encoder input
   - Shows encoder position and button states on display

## Automatic Builds

This repository uses GitHub Actions to automatically compile firmware.

### Download Pre-built Firmware

1. Go to [Actions](https://github.com/dralovets-dot/greedy-guts/actions)
2. Click on the latest successful workflow run
3. Download the "T-Embed-Firmware" artifact

### Files Included

- `display_test.bin` - Main display test firmware
- `encode_test.bin` - Main encoder test firmware
- Corresponding partition tables

## Local Development

### Requirements
- Arduino IDE or PlatformIO
- ESP32 board support
- Libraries:
  - TFT_eSPI
  - RotaryEncoder

### Setup
1. Clone repository
2. Open sketch in Arduino IDE
3. Select board: ESP32-S3
4. Upload to T-Embed

## CI/CD Pipeline

Automatic builds triggered on:
- Push to main branch
- Pull requests
- Manual trigger via GitHub UI

Built with ❤️ using GitHub Actions
