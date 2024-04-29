---
grand_parent: Reference Applications
parent: PIC32MZ DA Curiosity Development Kit
title: Getting Started
nav_order: 1
---
<img src = "images/microchip_logo.png">
<img src = "images/microchip_mplab_harmony_logo_small.png">

# Getting Started Application with PIC32MZ DA Curiosity Development Kit
<h2 align="center"> <a href="https://github.com/MicrochipTech/MPLAB-Harmony-Reference-Apps/releases/latest/download/pic32mzda_getting_started.zip" > Download </a> </h2>

-----
## Description

> This application demonstrates an LED (LED1[RGB-RED]) toggle on timeout basis and print the LED toggling rate on the serial terminal. The periodicity of the timeout will change from 500 milliseconds to one second, two seconds, four seconds and back to 500 milliseconds every time you press the switch SW1 on the PIC32MZ DA Curiosity Development Kit.

> The demo application has additional functionality to print the current room temperature periodically using on board temperature sensor.


## Modules/Technology Used:

- Peripheral Modules      
	- I2C
	- Timer
	- GPIO
	- UART
	- DMA

## Hardware Used:

- [PIC32MZ DA Curiosity Development Kit](https://www.microchip.com/DevelopmentTools/ProductDetails/PartNO/EV87D54A)   

## Software/Tools Used:
<span style="color:blue"> *This project has been verified to work with the following versions of software tools:*</span>  

 - [MPLAB Harmony v3 "csp" repo v3.9.1](https://github.com/Microchip-MPLAB-Harmony/csp/releases/tag/v3.8.3)  
 - [MPLAB Harmony v3 "dev_packs" repo v3.9.0](https://github.com/Microchip-MPLAB-Harmony/dev_packs/releases/tag/v3.8.0)  
 - [MPLAB Harmony v3 "mhc" repo v3.7.2](https://github.com/Microchip-MPLAB-Harmony/mhc/releases/tag/v3.6.5)  
 - MPLAB Harmony 3 Launcher Plugin v3.6.4  
 - [MPLAB X IDE v5.50](https://www.microchip.com/mplab/mplab-x-ide)  
 - [MPLAB XC32 Compiler v3.0](https://www.microchip.com/mplab/compilers)  
 - Any Serial Terminal application like Tera Term terminal application.  

<span style="color:blue"> *Because Microchip regularly update tools, occasionally issue(s) could be discovered while using the newer versions of the tools. If the project doesn’t seem to work and version incompatibility is suspected, It is recommended to double-check and use the same versions that the project was tested with.* </span>  

## Hardware Setup:
- Connect the PIC32MZ DA Curiosity Development Kit to the Host PC as a USB Device
	through a Type-A male to micro-B USB cable connected to Micro-B USB (Debug USB) port.  

	<img src = "images/hardware_setup.jpg" width="800" height="380" align="middle">

## Programming hex file:
The pre-built hex file can be programmed by following the below steps

### Steps to program the hex file
- Open MPLAB X IDE
- Close all existing projects in IDE, if any project is opened.
- Go to File -> Import -> Hex/ELF File
- In the "Import Image File" window, Step 1 - Create Prebuilt Project, click the "Browse" button to select the prebuilt hex file.
- Select Device has "PIC32MZ2064DAR176"
- Ensure the proper tool is selected under "Hardware Tool"
- Click on "Next" button
- In the "Import Image File" window, Step 2 - Select Project Name and Folder, select appropriate project name and folder
- Click on "Finish" button
- In MPLAB X IDE, click on "Make and Program Device" Button. The device gets programmed in sometime.
- Follow the steps in "Running the Demo" section below

## Programming/Debugging Application Project:
- Open the project (pic32mzda_getting_started\firmware\pic32mz_da_curiosity.X) in MPLAB X IDE
- Ensure "Curiosity/Starter Kits PKOB4" is selected as hardware tool to program/debug the application
- Build the code and program the device by clicking on the "make and program" button in MPLAB X IDE tool bar
- Follow the steps in "Running the Demo" section below

## Running the Demo:
- Open the Tera Term terminal application on your PC (from the Windows® Start menu by pressing the Start button)
- Set the baud rate to 115200
- Reset or power cycle the device.
- An LED (LED1[RGB-RED]) on the PIC32MZ DA Curiosity Development Kit toggles on every timeout basis and the default periodicity of the timeout is 500 milliseconds.
- And the LED toggling rate is displayed on the serial terminal.
- Press the switch SW1 on the PIC32MZ DA Curiosity Development Kit to change the periodicity of the timeout to one second.
- Every subsequent pressing of the switch SW1 on the PIC32MZ DA Curiosity Development Kit changes the periodicity of the timeout to 2 seconds, 4 seconds, 500 milliseconds, and back to 1 second in cyclic order.
- Press the switch SW2 on the PIC32MZ DA Curiosity Development Kit to read and print the Temperature from the Temperature Sensor.
- The temperature read is displayed on a serial console on a periodical basis.
- Press the switch SW1 on the PIC32MZ DA Curiosity Development Kit to change the
periodicity of the temperature values displayed on the serial console. The periodicity will be changed between 500 milliseconds, one second, two seconds, four seconds and back to 500 milliseconds on every time user press the switch SW1 on the PIC32MZ DA Curiosity Development Kit.


## Comments:
- This application demo builds and works out of box by following the instructions above in "Running the Demo" section. If you need to enhance/customize this application demo, you need to use the MPLAB Harmony v3 Software framework. Refer links below to setup and build your applications using MPLAB Harmony.
	- [How to Setup MPLAB Harmony v3 Software Development Framework](https://www.microchip.com/mymicrochip/filehandler.aspx?ddocname=en1000821)
	- [How to Build an Application by Adding a New PLIB, Driver, or Middleware to an Existing MPLAB Harmony v3 Project](http://ww1.microchip.com/downloads/en/DeviceDoc/How_to_Build_Application_Adding_PLIB_%20Driver_or_Middleware%20_to_MPLAB_Harmony_v3Project_DS90003253A.pdf)  

## Revision:
- v1.3.0 - Regenerated and tested application.
- v1.2.0 - Regenerated and tested application.
- v1.1.0 released demo application