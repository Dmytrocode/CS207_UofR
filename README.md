# Gesture Control Robotic Car | Final Project CS 207 

Repository dedicated to my CS 207 Class Electronics Project.

My Final Project for my Computer Science 207 class is a Remote Controlled Robotic Car that I built from scratch.

The project consists of a robotic car that is controllable by a remote control device. These two devices communicate between each other 
throughout bluetooth. The gesture control device detects the angle it is in, and sends the information over to the robotic car, which
translates thata data into real life movements and actions. 

![Robotic Car](https://scontent-sea1-1.xx.fbcdn.net/v/t1.15752-9/p1080x2048/78495088_1213653742164761_8240465575709507584_n.jpg?_nc_cat=111&_nc_ohc=2qpg5vsrA48AQnPwL7vcgWESdO6lrJABWwtd59kWpdQbJwNytfdJ9sxTA&_nc_ht=scontent-sea1-1.xx&oh=feee6680ce6e3c4ca663cab02313c2a4&oe=5E75A5D6)


## Components and Materials:

x1 [Arduino UNO & Genuino UNO](https://www.amazon.ca/Arduino-Uno-R3-Microcontroller-ATmega328/dp/B07LD6DTFS/ref=sr_1_5?keywords=arduino+uno&qid=1575682319&sr=8-5)

x1 [Arduino Nano V3.0](https://www.amazon.ca/Arduino-ELEGOO-ATmega328P-Compatible-Without/dp/B071NMD14Y/ref=sr_1_1_sspa?keywords=arduino+nano&qid=1575682395&sr=8-1-spons&psc=1&spLa=ZW5jcnlwdGVkUXVhbGlmaWVyPUFCTUY5TUJONVBaQk4mZW5jcnlwdGVkSWQ9QTA1NjExNTYzUVEyRFVYVUg0S1UxJmVuY3J5cHRlZEFkSWQ9QTA2OTUzODkxQzExNEIzUDZYNFJDJndpZGdldE5hbWU9c3BfYXRmJmFjdGlvbj1jbGlja1JlZGlyZWN0JmRvTm90TG9nQ2xpY2s9dHJ1ZQ==)

x2 [HC-05 Bluetooth Module](https://www.amazon.ca/J-DEAL%C2%AE-Wireless-Bluetooth-Transceiver-Arduino/dp/B01M248TJU/ref=sr_1_3?keywords=hc05&qid=1575682429&sr=8-3)

x1 [MPU 6050 Module 3 Axis Gyroscope](https://www.amazon.ca/Aukru-Module-Gyroscope-Accelerometer-Arduino/dp/B019SX74TE/ref=sr_1_3_sspa?crid=W2T6PWKRP3SB&keywords=gyroscope+arduino&qid=1575682449&sprefix=gyroscope%2Caps%2C193&sr=8-3-spons&psc=1&spLa=ZW5jcnlwdGVkUXVhbGlmaWVyPUE0SU5NWkJLT1JHVDcmZW5jcnlwdGVkSWQ9QTA3OTkxNzcxSzc2MVhRS0VVMDEyJmVuY3J5cHRlZEFkSWQ9QTA2ODk0NjUzT09FUFZHS1gyTFRLJndpZGdldE5hbWU9c3BfYXRmJmFjdGlvbj1jbGlja1JlZGlyZWN0JmRvTm90TG9nQ2xpY2s9dHJ1ZQ==)

x2 [DC Motors and x2 Wheels](https://www.amazon.ca/Electric-Magnetic-Gearbox-Plastic-Yeeco/dp/B07DQGX369/ref=sr_1_13?keywords=dc+motor&qid=1575682475&sr=8-13)

x1 [Neuftech L298n](https://www.amazon.ca/Neuftech-H-Bridge-Stepper-Controller-Raspberry/dp/B01KBTNHS6/ref=sr_1_3?keywords=driver+shield&qid=1575700277&sr=8-3)

x1 [L293D Motor Driver](https://www.amazon.ca/Stepper-Driver-Controllers-Channel-Ltvystore/dp/B07DNDWG9V/ref=sr_1_3?keywords=L293D&qid=1575682515&sr=8-3)
**Motor Driver in case the Arduino Shield does not work

x2 [9V Batteries or similar Power Supply](https://www.amazon.ca/s?k=9v+battery&ref=nb_sb_noss_2)

--------SOLDERING TOOLS AND EQUIPMENT MAY BE NEEDED-------

## Software Requirements
A preferable updated version of the Arduino IDE is recommended to use the programs.

### Libraries:
Please refer to the [Libraries](https://github.com/Dmytrocode/CS207_UofR/tree/master/libraries) Folder for information about the installation and use of libraries needed for this project.


## Build

### 1. Construct the Frame for the Robotic Car with two wheels, two DC motors, and a power supply
<img src="https://scontent-sea1-1.xx.fbcdn.net/v/t1.15752-9/78494797_3312434738797523_5229588218680180736_n.jpg?_nc_cat=105&_nc_ohc=Wmmyowh-2XUAQkfVTAIhnOVdvd6BHblDHYFvnI1FBuKaostEpYpb1If6w&_nc_ht=scontent-sea1-1.xx&oh=9d3b826dac54c2658100b910a40d5182&oe=5E7522E4" width="400" height="400">

### 2. Place the top frame base and place the arduino with the motor shield or the circuit on top.
<img src="https://scontent-sea1-1.xx.fbcdn.net/v/t1.15752-9/p1080x2048/79512413_997824360580263_590444723437568000_n.jpg?_nc_cat=106&_nc_ohc=ppRY-XePCEUAQkztH4D9ARt50iSIMVKDs45V_0pD_kUK3hE0RCahxvLMg&_nc_ht=scontent-sea1-1.xx&oh=4cf458fdeaacb84280ad21d7d61e75d1&oe=5E75C122" width="600" height="600">
#### Follow the next sketch for the Arduino Robotic Car sketch / circuit: 
<img src="https://hackster.imgix.net/uploads/attachments/999484/circuit-page-001.jpg?auto=compress%2Cformat&w=1280&h=960&fit=max" width="400" height="400">

#### 3. Build 


