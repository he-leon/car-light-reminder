# Car Light Reminder
This project demonstrates how to create a simple DIY Car Light Turn Off Reminder using an Arduino Pro Mini, a DC-DC Converter and scrap parts. The reminder helps prevent leaving the car lights on and draining the battery. The device can be installed behind the dashboard and is meant to be used in older/classic cars, which do not have a builtin alarm.
# Main Components
- Arduino Pro Mini
- Mini-360 DC-DC Adjustable Buck Converter
- Small speaker
- A few resistors
# Features
- Buzzes based on the state of two logical 12V inputs
- Alarm sounds when ignition is off (IGNITION_PIN LOW) and door is open (DOOR_PIN LOW) 
- Makes a somewhat pleasant bell sound by using the [Mozzi library](https://github.com/sensorium/Mozzi) 
# Schematics
TODO
# Example build
The following pictures show a cheap quick and dirty build using a scrap "Ricotta" cup as a case. A speaker salvaged from an old PC is used. The circuit was built on a stripboard. 


<img src="https://github.com/he-leon/car-light-reminder/assets/22372029/8f4fd831-1296-47d2-a73b-7d6a12056398" width=20% height=20%>
<img src="https://github.com/he-leon/car-light-reminder/assets/22372029/af8670e5-908d-421c-9148-4a8423b006d2" width=20% height=20%>
<img src="https://github.com/he-leon/car-light-reminder/assets/22372029/1686e6d1-49d5-4839-aab4-7c8841654158" width=20% height=20%>


# License
Licensed under a Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International License, as used by [Mozzi library](https://github.com/sensorium/Mozzi#use-and-remix)
