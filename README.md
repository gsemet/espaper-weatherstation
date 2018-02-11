# ESPaper Weather Station (french)

This is a modified version of the wonderful ESPaper Weather Station sample project you can found
[here](https://blog.squix.org/espaper-setup-guide).

## Features

- French translation
- Update each 30 minutes
- Display statistic on PiHole installed on 192.168.0.3

## Installation

Please follow the [installation guide](https://blog.squix.org/espaper-setup-guide).

Here are the main parts:

- Preferences, "Additional Boards Manager URLs" set to:
  ```
  http://arduino.esp8266.com/stable/package_esp8266com_index.json
  ```
- Install new board "ESP8266"
- Select the following settings:

  - Board: Generic ESP8266 Module
  - Flash mode DIO
  - Flash frequency: 40 MHz
  - CPU frequency: 80 MHz
  - Flash Size: 2M (1M SPIFFS)
  - Debug Port: Disabled
  - Debug level: None
  - Reset method: ck
  - Upload speed: 115200
  - Port `/dev/cu.usbserial-A50285BI` (Linux) / `COM3` under windows

  Note: on MacOS HighSierra, I did not succeeded in using the VPC driver. There have been some
  evolution in the restriction on kernel land drivers by Apple in the latest version of the 
  operating system that prevent the COM driver to work.

- Install libraries:

  - Mini Grafx
  - ESP8266 Weather Station
  - json streaming parser
  - ESP8266WebServer
  - WifiManager 
  
- Get a Wunderground API Key

# Usage:

- Set the language (in the `settings.h` file, change the value for `LANG`). You may need to update
  the translation manually in `text.h`.
- Flash the firmware:

  - Power on first the programmer (ensure the main board is turned off without the USB power 
    connected)
  - connect the USB on the main board
  - turn on the board (on/off button)
  - execute the "switch to program mode" procedure:
  
    - click on the middle button and hold pressed
    - click on the right button and release only this on
    - release the middle button
 
 - Configuration is triggered on first boot or on the press of the CONFIG+RST keys:

   - Press and hold left button
   - Press and release right button
   - Release left button

   Wait a few seconds before it reboots in Configuration mode. Then:

   - If the Wifi is found, just go in your webbrowser at the IP address displayed on the panel
   - If the Wifi connection failed, it creates a new Wifi network named `ESPaperConfig` on which
     you will find the configuration HTML page at the following address: `192.168.0.1`

- Click on the right button only simply restart the board, forcing data refresh
