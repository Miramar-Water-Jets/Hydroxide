# Hydroxide

# Table of contents

1. [[RoboSub Sonar System#Hydroxide|Hydroxide]]
	1. [[RoboSub Sonar System##Description|Description]]
	2. [[RoboSub Sonar System##Applications|Applications]]
	3. [[RoboSub Sonar System##Dimensions|Dimensions]]
	4. [[RoboSub Sonar System##Sound Flowchart|Sound Flowchart]]
2. [[RoboSub Sonar System#Resources|Resources]]

## Description

Hydroxide is our custom built sonar system for our AUV, Sleepy Fishy 3.0. It gets sound from the Pinger and modifies to be useful to the AUV.

## Applications

We might use some of the following Applications:
1. Audio: Audacity
2. IDE: CLion
3. Framework: PlatformIO
4. PCD Designer: KiCad
5. PCB Manufacturer: ***Unknown***

## Components

| Component       | Name         | Length   | Width    | Height   | Guide Link                                                                                      | Part Link                                                         | Datasheet                                                                                              |
| --------------- | ------------ | -------- | -------- | -------- | ----------------------------------------------------------------------------------------------- | ----------------------------------------------------------------- | ------------------------------------------------------------------------------------------------------ |
| Hydrophone      | Aquarian H1A | 24.89 mm | 24.89 mm | 45.53 mm |                                                                                                 | [Aquarian H1A](https://www.aquarianaudio.com/h1a-hydrophone.html) |                                                                                                        |
| ADC             | AD7606       |          |          |          | [AD7606](https://github.com/AadarshDevi/Electronics/blob/master/adc/ad7606.md)                  |                                                                   | [AD7606](https://www.analog.com/media/en/technical-documentation/data-sheets/ad7606_7606-6_7606-4.pdf) |
| Microcontroller | Teensy 4.1   | 61.66 mm | 17.78 mm | 4.07 mm  | [Teensy 4.1](https://github.com/AadarshDevi/Electronics/blob/master/board/teensy/teensy-4-1.md) | [Teensy 4.1](https://www.sparkfun.com/teensy-4-1-headers.html)    |                                                                                                        |
## Sound Flowchart

### Without AD7606B

```
Pinger (25kHz - 40kHz) - Sound Source
    ↓
Hydrophone (Aquarian H1A/H2D) - Sound Listener
    ↓
High Input Buffer
	↓
Preamplifier
	↓
High-Pass Filter
	↓
Low-Pass Filter
	↓
Analog-Digital Convertor (AD7606B)
	↓
Microcontroller (Teensy 4.1)
	↓
Companion Computer (NVIDIA Jetson Orin Nano)
```

### With AD7606B

The AD7606B does everything in a single module.

```
Pinger (25kHz - 40kHz) - Sound Source
    ↓
Hydrophone (Aquarian H1A/H2D) - Sound Listener
    ↓
AD7606B Module
	↓
Microcontroller (Teensy 4.1)
	↓
Companion Computer (NVIDIA Jetson Orin Nano)
```

# Resources
1. [Hydrophone Input to Usable Sound](https://www.arhfoundation.org/convert-sound-from-hydrophone)
2. [Teyleten Robot AD7606 Module](https://github.com/AadarshDevi/Electronics/blob/master/adc/ad7606.md)
3. [Aquarian H1A Hydrophone](https://www.aquarianaudio.com/h1a-hydrophone.html)
4. [Aquarian H2D Hydrophone](https://www.aquarianaudio.com/h2d-hydrophone.html)
