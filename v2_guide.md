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
| 128x32 OLED Display | 2 | 
| SK6812 Mini-E LED | 36 |
| WS2812B LED | 8 |
| EC11 Encoder + Knob | 2 |
| Piezo Buzzer (AST1109MLTRQ) | 2 |

# Soldering

## Diodes
**Orientation**: Black bar facing downwards or towards the microcontroller.
1. Solder one pad.
2. While holding diode with tweezers, reflow solder and place diode down on pad.
3. Solder other pad.
- Note, when working with [MELF](https://en.wikipedia.org/wiki/Metal_electrode_leadless_face) package diodes,
you may need to reflow and add more solder a couple times before an adequate connection is made.

## LEDs
**Orientation**: Notched corner facing the pad marked with rectangle. This applies for both SK6812 Mini-E & WS2812B.
- Notes: \
\- This component is heat sensitive. Be cautious and work at a safe temp (~300c). \
\- It is wise to test the LEDs as you solder then. Consider [soldering your controllers beforehand](https://github.com/waffle87/microdox/blob/master/v2_guide.md#microcontrollers). \
\- The LED order is somewhat outlined [here](https://github.com/waffle87/qmk_firmware/blob/microdox_v2/keyboards/boardsource/microdox/v2/v2.c#L8-#L17).
1. Solder one pad. (it may be easier to solder all 4 pads before placing LED down when installing WS2812B LEDs)
2. While holding LED with tweezers, reflow solder and place LED down on pad.
3. Solder remaining pads.

## Microcontrollers
**Orientation**: Both microcontrollers face down.
- Note, it is recommended to flash each microcontroller prior to soldering. See [firmware](https://github.com/waffle87/microdox/blob/master/v2_guide.md#firmware) section for more.
1. Insert headers from front, solder in from the back.
2. Place microcontroller face down. (smooth side facing up)
3. Apply solder to all pins.
4. Use flush cutters or similar to trim excess from pins on each side.

## OLEDs
1. Insert headers from front, solder in from the back.
2. Solder only one of pins to begin with.
3. While reflowing solder joint, position OLED so that it is level & straight.
4. Solder remaining pins and clip extra length of pins.

## Misc.
### TRRS jacks
1. Position TRRS jack on front of PCB and secure with tape.
2. Apply solder to all four pins.
### Reset switches
1. Solder one pad.
2. While holding switch with tweezers, refolw solder and place switch down on pad.
3. Solder remaining 3 pads.
### Hotswap sockets
1. Solder one pad.
2. While holding hotswap socket (fingers are fine), reflow solder and place socket down on pad.
3. Solder other pad.
- Note, don't hesitate to use a little extra solder, as that will help secure the socket and prevent it from ripping off.
### Encoders
1. Secure in place using tape or hands.
2. Apply solder to all five pins.

## Firmware
- Note, standard/v1 microdox firmware is not compatible with v2 PCBs. \
Upstream support in QMK is currently pending. For now, the firmware can be found [here](https://github.com/waffle87/qmk_firmware/tree/microdox_v2/keyboards/boardsource/microdox/v2). \
To begin, follow the [QMK setup guide](https://docs.qmk.fm/#/newbs_getting_started). \
Once setup, you can manually add the files to your `qmk_firmware` directory, or have git do the work for you:
```
git remote add mdox_v2 https://github.com/waffle87/qmk_firmware.git
git fetch mdox_v2
git checkout mdox_v2 keyboards/boardsource/microdox/v2
```
Now those files should exist in your current branch, and can be compiled with
```
qmk compile -kb boardsource/microdox/v2 -km via
```
For flashing instructions, see [doc](https://docs.qmk.fm/#/newbs_flashing) or [video](https://www.youtube.com/watch?v=fuBJbdCFF0Q)

#### Extra
For questions, ask in [boardsource discord server](https://discord.gg/5qpqbgaTYz) \
photos soon...
