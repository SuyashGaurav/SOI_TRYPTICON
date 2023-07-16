# SOI_TRYPTICON
## Table of Contents
#### This git contains:
  - [Source code of arduino](https://github.com/AdumaRishithReddy/SOI_TRYPTICON/blob/main/normal.ino)
  - [Circuit Diagram](https://github.com/AdumaRishithReddy/SOI_TRYPTICON/blob/main/circuit%20(1).png)
  - [Bill of Materials](https://github.com/AdumaRishithReddy/SOI_TRYPTICON/blob/main/BoM.xlsx)
  

### Assembly And Setup
 - We built the chassis following the instructions provided.
- We connected the motor driver to the motors and installed them onto the chassis.
- After that, we connected the Arduino in accordance with the circuit diagram provided [here](https://github.com/AdumaRishithReddy/SOI_TRYPTICON/blob/main/circuit%20(1).png)    
- The following [program](https://github.com/AdumaRishithReddy/SOI_TRYPTICON/blob/main/normal.ino) has been uploaded to the Arduino, allowing it to navigate any maze and avoid obstacles.
- Our model doesn't have to be calibrated.
- The battery must be connected to the Arduino, and if the Arduino were ever to reset, we would need to upload the code from repository to the device.
 
## Structural design
  - Our model was created using two motors and two ultrasonic sensors, and a program was created in accordance. Since we lacked a servo, we used one sensor up front and one on the left. Our model examines the data from both sensors to determine which side of the model is blocked. It then uses this knowledge to determine how to move in a way that avoids running into the obstacles.Our model required the use of a bread board so we arranged it such that it looks like a spoiler to the model.

#### Requirements for running our program: 
Our program requires you to install(if not initially present) the NewPing package which helps you to run the program written for the ultrasonics sensors.

## Observations
- We completed our setup and loaded the model with our primitive code.
- Our initial finding was that the model moved slowly and spun extremely slowly. Hence, we turned the wheels opposite to each other to improve the model's speed and turning radius.
- Then we discovered that our sensors occasionally picked up on the chassis itself, so we constructed a cardboard sensor holder.
- Thereafter, we discovered that our model had a blind spot where its left wheel could be stuck at an obstruction, thus we implemented a block of code to prevent that from happening.

## References
  - Basic Arduino functions from [Arduino Projects](https://create.arduino.cc/projecthub/saaketporay/ultrasonic-range-finder-9b10b6?ref=search&ref_id=ultrasonic&offset=4)
  - Circuit diagram made using [Circuit Diagram ORG](https://www.circuit-diagram.org)
