# Hydroxide

# Table of contents

1. [Description](#description)
2. [Applications](#applications)
3. [Dimensions](#dimensions)
4. [Sound Flowchart](#sound-flowchart)
5. [Resources](#resources)

## Description

Hydroxide is our custom-built sonar system for our AUV, Sleepy Fishy 3.0. It gets sound from the Pinger and modifies to
be useful to the AUV.

## Applications

We might use some of the following Applications:

1. Audio: Audacity
2. IDE: CLion
3. Framework: PlatformIO
4. PCD Designer: KiCad
5. PCB Manufacturer: ***Unknown***

## Components

> [!NOTE]
> The table below is outdated :(

| Component       | Name         | Length   | Width    | Height   | Guide Link                                                                                      | Part Link                                                         | Datasheet |
|-----------------|--------------|----------|----------|----------|-------------------------------------------------------------------------------------------------|-------------------------------------------------------------------|-----------|
| Hydrophone      | Aquarian H1A | 24.89 mm | 24.89 mm | 45.53 mm |                                                                                                 | [Aquarian H1A](https://www.aquarianaudio.com/h1a-hydrophone.html) |           |
| ADC             |              |          |          |          |                                                                                                 |                                                                   |           |
| Microcontroller | Teensy 4.1   | 61.66 mm | 17.78 mm | 4.07 mm  | [Teensy 4.1](https://github.com/AadarshDevi/Electronics/blob/master/board/teensy/teensy-4-1.md) | [Teensy 4.1](https://www.sparkfun.com/teensy-4-1-headers.html)    |           |
| Voltage         |              |          |          |          |                                                                                                 |                                                                   |           |
|                 |              |          |          |          |                                                                                                 |                                                                   |           |

## Sound Flowchart

### Without AD7606B

```
Pinger (25kHz - 40kHz) - Sound Source
    ↓
Hydrophone (Aquarian H1A/H2D) - Sound Listener
    ↓
Surge Voltage and ESD Protection
	↓
Buffeer + Preamplifier
	↓
High-Pass Filter
	↓
Low-Pass Filter
	↓
Analog-Digital Convertor
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
