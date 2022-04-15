# Parts Needed 
### Required 
| Item | Count |
|------|-------|
| SMD or Through Hole Diodes| 36 |
| PCB | 2 |
| Elite-C or Pro Micro Controller | 2 |
| Back Plate & Switch Plate | 2 | 
| TRRS Jack | 2 | 
| TRRS Cable | 2 | 
| Reset Switch | 2 | 
| MX or Choc Hotswap Sockets | 36 | 
| MX or Choc Switches | 36 | 
| MX or Choc Keycaps | 36 |
| Screws & Standoffs | --- |  

### Optional 
| Item | Count | 
|------|-------|
| OLED Display | 2 | 
| SK6812 Mini LED | 12 | 
| [Controller & OLED Sockets](https://www.digikey.com/product-detail/en/mill-max-manufacturing-corp/315-43-164-41-003000/ED4764-64-ND/1212143) | 56 Positions | 
| [OLED Male-Male Sockets](https://www.digikey.com/product-detail/en/mill-max-manufacturing-corp/350-10-164-00-006000/ED6864-64-ND/357045) | 8 Positions | 
| [Mill-Max Pins for controller](https://www.digikey.com/product-detail/en/mill-max-manufacturing-corp/3320-0-00-15-00-00-03-0/ED1134-ND/4147392) | 48 Pins |
| Flux | Enough for LED's|  

# Soldering
The PCB is reversible so please **designate a Left and Right side** before soldering.
![Left & Right ](https://github.com/waffle87/microdox/blob/master/images/left_right.jpg)

I recommend using a fine tip soldering tip and a temperature of 320°C **for the majority of this project** 

## Step 1: Diodes 
Diodes have polarity so **there is specific orientation.**
Black bar points towards the square pad of the PCB. 

### Through Hole Diodes 
1. Bend diodes to line up with holes.
![Diode Bend](https://github.com/waffle87/microdox/blob/master/images/tht_diode_bend.jpg)

2. Insert diodes into **back of PCB** and bend outwards from the front to keep them in place.
![Back PCB Bend ](https://github.com/waffle87/microdox/blob/master/images/tht_diode.jpg)

3. Solder each end of the diodes **from the front of the PCB.** 
4. Use flush cutters to trim the legs of the diodes. Keep these legs as you may want to use them as pins if you choose to socket your controller. 
* I like to do the diodes in rows of 5. i.e. insert 5, solder, trim the legs, repeat for the rest of the rows.


### SMD Diodes
* These will be placed and soldered on the **back side of the PCB** 
1. Tin one side of the diode pads with a small amount of solder. 
2. Use tweezers to hold the diode in the **correct orientation**, reflow solder, and place diode down, making sure the solder has made a good connection with the metal pad on the diode. 
3. Apply solder to the other end of the diode, again making sure it is a good connection. 
4. Repeat for the rest of the diodes on the PCB.
![Completed SMD Diode](https://github.com/waffle87/microdox/blob/master/images/smd_diode.jpg)
 

## Step 2: LED's (**Optional**)
This component **has a specific orientation**.
This component is also very heat sensitive. I recommend a **soldering iron temp of 260°C**. 

Line the largest pad of the LED up with the pad that is outlined with a white box on the PCB.
![SK6812 Mini](https://github.com/waffle87/microdox/blob/master/images/sk6812.jpg)
![LED Pad](https://github.com/waffle87/microdox/blob/master/images/led_pad.jpg)

1. Apply flux to the pads where the LED will sit on the PCB. 
2. Tin one of the pads with a small amount of solder. 
3. Pick up the LED with tweezers. While reflowing the solder, set the led down in the correct orientation on the solder. Do not leave the iron near on the pad or the solder for more than ~ 2 seconds, as you risk burning the LED. 
4. Leave the LED you just placed on the PCB (don't solder the other pads yet) and move onto the next LED with the same process we just did. 
5. After completing all 6 LED's, go back solder the second pad of each LED. Repeat this process for each LED until they are all soldered. The main goal is to let them cool down before moving onto the next pad. 
* If you can't get the LED's working, don't get discouraged as they are very tricky and hard for most people :)

Here is what your LED's should look like once finished: 
![Finished LED's](https://github.com/waffle87/microdox/blob/master/images/finished_leds.jpg)
* Default color should be red, meaning there is no data loss. 

## Step 3: OLED Jumpers (Optional)
This is done on the front of the PCB and **is necessary for the OLED displays to work**

* This is fairly simple to do but easy to forget so if you're planning on using OLED displays, make sure you do this step! 

1. There are 4 pads near where your controller will go. All that needs to be done is bridge the two pads together with solder. 
![OLED Jumpers ](https://github.com/waffle87/microdox/blob/master/images/oled_jumpers.jpg)

## Step 4: Controller Headers/Sockets 
This step is rather straight forward, the most important thing is **there are no bridges between these pins**. 

### Mill-Max Controller Sockets
These will be placed on the front side of the PCB and soldered from the back. 
![Sockets In Place](https://github.com/waffle87/microdox/blob/master/images/controller_socket.jpg)

1. Fill each position with solder, making sure that the solder flows well and makes a good connection on every one.
![Soldered Controller Sockets ](https://github.com/waffle87/microdox/blob/master/images/controller_backside.jpg)

### Standard Included Headers 
* Put the shorter pins through the PCB (longer pins will be sticking out from the front).
![Included Headers ](https://github.com/waffle87/microdox/blob/master/images/included_headers.jpg)
 
* These will be soldered from the back as well.

1. Fill each position with solder, making sure that the solder flows well and makes a good connection on every one.
* I recommend placing the controller on the front side pins while you solder from the back. This helps keep the pins nice and straight. But do not solder the controller yet. 

## Step 5: OLED Header/Sockets (Optional)
* This step is only necessary if you are using OLED displays.
* This step is also very similar to the controller sockets, just fewer pins 
* You can use some electrical tape or something similar to keep the headers in place so you don't burn your fingers while soldering :)

### Mill-Max Sockets
* These will be placed on the front side of the PCB and soldered from the back. 

1. Fill each position with solder, making sure that the solder flows well and makes a good connection on every one.

### Standard Included Headers 
* Put the shorter pins through the PCB (longer pins will be sticking out from the front). 
* These will be soldered from the back as well.

1. Fill each position with solder, making sure that the solder flows well and makes a good connection on every one.

## Step 6: Reset Switches and TRRS Jacks
Both the components will be placed on the front of the PCB.
![Reset & TRRS ](https://github.com/waffle87/microdox/blob/master/images/trrs_reset.jpg)

### TRRS Jacks 
1. Place the jack in the proper holes (should line up and go in without trouble). 
2. Solder each pin from the bottom. 
* You can use some electrical tape or something similar to hold it in place and prevent you from burning yourself. 

### Reset Switches
1. Use a similar technique as the LED's and SMD diodes (if you went that route) but these components are not heat sensitive so a temperature of 320°C is fine. Tin one pad of and use tweezers to place the switch, once that one pad is soldered, apply solder the rest of them. 

## Step 7: Soldering The Controller
* Make sure you flash your controller before solder. If you're unsure how to, visit the **[Firmware ](https://github.com/waffle87/microdox/wiki/Microdox-Build-Guide#firmware)** section of this file. 
* There is a specific orientation for this component. **Left-hand controller should be face up meaning you can see the components**. **Right-hand controller should be face down meaning the top is a smooth surface and there are no components visible**. Check to see if the labeled positions on the controller line up with what's labeled on the PCB.

### Mill-Max Socketing Option 
This is for if you are choosing to socket your controller. This is where the diode legs that you clipped earlier may come in handy. 

1. Place some electrical tape or something similar (I like to use painters tape) over each row of sockets. This is to prevent any solder flowing into the socket holes. 
![Tape Over Sockets ](https://github.com/waffle87/microdox/blob/master/images/controller_tape.jpg)

2. Insert your diode legs or specific Mill-Max pins into each hole. This may take some force which I recommend not using your fingers, these things are sharp. Use some pliers to gently insert each pin/leg, but be careful not to bend them. 
![Pins In Sockets](https://github.com/waffle87/microdox/blob/master/images/controller_pins.jpg)

3. Place your controller over the pins/legs **in the correct orientation**. It is important that it is oriented properly, otherwise your keyboard will not work. (refer to the beginning of step 7 if you are unsure of the orientation.) Another check: **The GND & RST positions on the controller should be matching up with GND & RST written on the PCB**. 
4. If you used the spare diode legs, clip them with flush cutters so they are about flush with the top of the controller. 
5. Solder each pin, making sure there are no bridges and they are making a good connection. 
![Left-Hand Controller](https://github.com/waffle87/microdox/blob/master/images/left_pro_micro.jpg)

### Standard Included Headers 
This is for the standard included headers that you've already soldered one end of through the PCB. 

1. Place your controller in the correct orientation (refer to the beginning of step 7 if you are unsure of the orientation.)
2. Solder each position, making sure each one is making a good connection and there are no bridges.
3. Use flush cutters to trim the pins sticking out of the top of the controller. 

## Now is a good time to test your keyboard. 
Use some tweezers or a bent paper clip in order to touch the two pads where the hotswap sockets go to simulate a keypress. If everything is working properly, it should send keypresses to your computer! You can use this to test it: [QMK Keyboard Tester ](https://config.qmk.fm/#/test)

## Step 8: OLED displays (Optional) 
These should sit level with your controller. 

### Standard Included Headers
1. Place the display over the OLED headers you soldered earlier.
2. Keeping it as level as possible, solder the 4 pins, making sure they are all making a good connection and there are no bridges. 

### Socketed Option 
* If you choose to socket your OLED displays, you will need some male-male headers. The ones I prefer to use are linked in the **[Optional Parts ](https://github.com/waffle87/microdox/wiki/Microdox-Build-Guide#optional)** section. 

1. Insert the end with the small cone looking things into the socket that you soldered earlier. 
2. Place your OLED display over the pins and solder them. Making sure there are no bridges and they are making a good connection. 

## Step 9: Hotswap Sockets
* These will be placed and soldered from the back of the PCB. 
* There are 2 different position outline on the PCB, for MX style switches and Choc switches. They shouldn't be too hard to find :)

1. Place the sockets in the designated positions based on your switches.
2. Apply solder to the small metal pads on each side. Make sure it flows between the two metal contacts.
![Finished Hotswap Sockets](https://github.com/waffle87/microdox/blob/master/images/finished_hotswap.jpg)
 
* It is common for these not to make a good connection, so if a key doesn't work when testing, this is the first thing I would check. 

## Case & Switch Assembly 
* The hard work is finished! Now to screw together your case and pop in your switches. Check for any bent pins on your switches before putting them in. 
![Switches In](https://github.com/waffle87/microdox/blob/master/images/finished_switches.jpg)
![Finished Keycaps](https://github.com/waffle87/microdox/blob/master/images/finished_keycaps.jpg)

# Firmware 

## CLI (More Advanced)
* If you chose to use OLEDs, you will need to flash with the QMK CLI (command line interface). This guide will help you get your environment and firmware setup: [https://beta.docs.qmk.fm/tutorial/newbs_getting_started](https://beta.docs.qmk.fm/tutorial/newbs_getting_started)

Once that is set up, this command will compile & flash the firmware to your controller, you will just need to reset the keyboard which can be done by double-pressing the reset switch. 

`make boardsource/microdox:cole:avrdude/dfu` 


* Use `avrdude` for Pro Micro controllers and `dfu` for Elite-C controllers. 

## Toolbox & Configurator (Good for Beginners)
* This route will **not** enable OLED displays. 

Use QMK Configurator to build you keymap: [https://config.qmk.fm/#/](https://config.qmk.fm/#/)
* Once you are happy with your keymap, click "Compile", wait until that finishes, then click the green "Firmware" button to download the hex file. 

Follow this guide to get QMK toolbox setup: [https://qmk.fm/toolbox/](https://qmk.fm/toolbox/)

### Flashing With Toolbox
1. Open QMK Toolbox and make sure you have the drivers installed (described on the Toolbox setup page linked above).
2. Click the "open" button in the top bar and navigate to your hex file (most likely in your "Downloads" folder).
3. Make sure the MCU is set to "Atmega32u4" in the drop-down. 
4. I recommend enabling "Auto-Flash" in the top menu bar as well. 
5. Now, all that's left to do is put your keyboard into bootloader mode. Double press the reset switch and you should see a screen like this. 
![Successful QMK Toolbox Flash](https://github.com/waffle87/microdox/blob/master/images/qmk_toolbox.png)
