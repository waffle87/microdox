### This guide is for v2 PCBs. Refer to [v1 guide](v1_guide.md) if you purchased your pcbs prior to April 2022.

# Parts
### Required 
| Item | Count |
|------|-------|
| SMD Diodes (SOD-123) | 36 |
| PCB | 2 |
| Pro Micro or similar microcontroller | 2 |
| TRRS Jack | 2 | 
| TRRS Cable | 1 | 
| Reset Switch | 2 | 
| MX or Choc Hotswap Sockets | 36 | 
| MX or Choc Switches | 36 | 
| MX or Choc Keycaps | 36 |

### Optional 
| Item | Count | 
|------|-------|
| OLED Display | 2 | 
| SK6812 Mini-E LED | 36 |
| WS2812B LED | 8 |
| EC11 Encoder + Knob | 2 |
| Piezo Buzzer (AST1109MLTRQ) | 2 |
| [Controller & OLED Sockets](https://www.digikey.com/product-detail/en/mill-max-manufacturing-corp/315-43-164-41-003000/ED4764-64-ND/1212143) | 56 Positions | 
| [OLED Male-Male Sockets](https://www.digikey.com/product-detail/en/mill-max-manufacturing-corp/350-10-164-00-006000/ED6864-64-ND/357045) | 8 Positions | 
| [Mill-Max Pins for controller](https://www.digikey.com/product-detail/en/mill-max-manufacturing-corp/3320-0-00-15-00-00-03-0/ED1134-ND/4147392) | 48 Pins |

# Soldering

## Diodes
**Orientation**: Black bar facing downwards or towards the microcontroller.
1. Solder one pad.
2. While holding diode with tweezers, reflow solder and place diode down on pad.
3. Solder other pad. \
\* Note, when working with [MELF](https://en.wikipedia.org/wiki/Metal_electrode_leadless_face) package diodes,
you may need to reflow and add more solder a couple times before an adequate connection is made.

## LEDs
**Orientation**: Notched corner facing the pad marked with rectangle. This applies for both SK6812 Mini-E & WS2812B. \
\* Notes: \
\- This component is heat sensitive. Be cautious and work at a safe temp (~300c).
\- It is wise to test the LEDs as you solder then. Considering soldering your controllers beforehand.
\- The LED order is somewhat outlined [here](https://github.com/waffle87/qmk_firmware/blob/microdox_v2/keyboards/boardsource/microdox/v2/v2.c#L8-#L17).
1. Solder one pad. (it may be easier to solder all 4 pads before placing LED down when installing WS2812B LEDs)
2. While holding led with tweezers, reflow solder and place LED down on pad.
3. Solder remaining 4 pads.

## Microcontrollers
\* Note, it is recommended to flash each microcontroller prior to soldering. See [firmware](https://github.com/waffle87/microdox/blob/master/v2_guide.md#firmware) section for more.
1. Insert headers from front, solder in from the back.
2. Place microcontroller face down. (smooth side facing up)
3. Apply solder to all pins.
4. Use flush cutters or similar to trim excess from pins on each side.

## OLEDs
1. Insert headers from front, solder in from the back.
2. Solder only one of pins to begin with.
3. While reflowing solder joint, position OLED so that it is level & straight.
4. Solder remaining pins and clip remaining length of pins.

## Misc.
### TRRS jacks
1. Position TRRS jack on front of PCB and secure with tape.
2. Apply solder to all four pins.
### Reset switches
1. Solder one pad.
2. While holding switch with tweezers, refolw solder and place switch down on pad.
3. Solder remaining 4 pads.
### Hotswap sockets
1. Solder one pad.
2. While holding hotswap socket (fingers are fine), reflow solder and place socket down on pad.
3. Solder other pad. \
\* Note, don't hesitate to use a little extra solder, as that will help secure the socket and prevent it from ripping off.
### Encoders
1. Secure in place using tape or hands.
2. Apply solder to all five pins.

### Firmware
Upstream support in QMK is currently pending. For now, the firmware can be found here: \
[https://github.com/waffle87/qmk_firmware/tree/microdox_v2/keyboards/boardsource/microdox/v2](https://github.com/waffle87/qmk_firmware/tree/microdox_v2/keyboards/boardsource/microdox/v2) \
To begin, follow the QMK setup guide: [https://docs.qmk.fm/#/newbs_getting_started](https://docs.qmk.fm/#/newbs_getting_started) \
Once setup, you can manually add the files to your `qmk_firmware` directory, or have git do the work for you:
```
git remote add mdox_v2 https://github.com/waffle87/qmk_firmware.git
git fetch mdox_v2
git checkut mdox_v2 keyboards/boardsource/microdox/v2
```
Now those files should exist in your current branch, and can be compiled with \
```
qmk compile -kb boardsource/microdox/v2 -km via
```
For flashing instructions, see [doc](https://docs.qmk.fm/#/newbs_flashing) or [video](https://www.youtube.com/watch?v=fuBJbdCFF0Q)
