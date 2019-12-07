This folder contains the code files written and executable by the Arduino IDE to make the Robotic Car project function.

"Gesture_controled_Robot__car_unit_.ino" 
Is the program that loads to the Arduino with the Motor Shield. It defines the movements and directions for the robotic car.

***********************************************************************************************
"HC05_Config.ino"
Configuration for the HC05 Bluetooth devices.
CONNECT FIRST DEVICE WHILE HOLDING THE HC-05 MINI BUTTON, OPEN THE SERIAL MONITOR AND TYPE:

AT+ORGL 

AT+UART=38400, 0, 0 set the band rate to 38400

set role as a slave device. enter AT+ROLE=0

AT+ADDR? check the module address, and copy it /save it

NOW, DISCONNECT THE FIRST DEVICE AND CONNECT THE SECOND HC-05 DEVICE:

AT+ORGL

AT+UART=38400, 0, 0

AT+ROLE=1 set the role of this module as the master device.

AT+BIND=" the address of the (copied / saved) slave module

***********************************************************************************************

"RemoteControl.ino"
This is the program for the Nano V3 device. Please upload it with the HC-05 Device disconnected.

***********************************************************************************************
