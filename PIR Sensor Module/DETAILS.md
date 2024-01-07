# PIR MOTION SENSOR (HC-SR501)

![Picture 1](https://github.com/HasnainRaza026/Sensors_And_Modules/assets/138324430/552b7c0a-2eaa-4dea-942f-09a1e971bb54)


PIR sensor or Passive Infra-red Sensor is a motion sensor it detects the motion of any living 
being (human, animal). Passive word indicates that PIR Sensor does not generate or radiate any 
energy for detection purposes. PIR Sensors don't detect or measure heat they detect the 
infrared radiation emitted or reflected from living objects.
The module consist a Pyroelectric sensor which generates energy when expose to heat. This 
Pyroelectric sensor detects infra-red radiation emitted by the living body.

![p](https://github.com/HasnainRaza026/Sensors_And_Modules/assets/138324430/84ca42f7-d235-4c14-b675-db0aa57ca5f1)



The module also consist a specially design cover called Fresnel Lens, which focuses the infra-red 
signals onto the piroelectric sensor.

![Picture 3](https://github.com/HasnainRaza026/Sensors_And_Modules/assets/138324430/f8dd7485-97d8-4f78-a6d5-87e533ff902d)&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
![Picture 4](https://github.com/HasnainRaza026/Sensors_And_Modules/assets/138324430/38710223-ee4c-49ee-9656-b35c920dfd9f)



## PIN DAIGRAM & WORKING
![Picture 5](https://github.com/HasnainRaza026/Sensors_And_Modules/assets/138324430/75a36a09-35f3-4efe-a3a5-4acbc6f2475d)


+ It has 3 pin GND, VCC for powering the module and an OUT pin which gives logic HIGH
(1) when an object is detected, (connected with digital pin of Arduino).

+ It has two potentiometers one for adjusting the sensitivity of the sensor and other for 
adjusting the time for which the output stays high after detection

+ It has 3 more pins with a jumper, these pins are for selecting trigger mode. First is non-repeatable trigger, in this the output only stay high for the delay time set (after 
detection). Second is repeatable trigger, in this the output will stay high as long as the 
object is present in the sensors range.

**NOTE:** 
After powering the relay module, it needs about 15 to 20 sec to warn up in order to 
work properly

## SPECIFICATIONS
+ Detection range: up to 7 meters
+ Detection angle: 110 degrees
+ Operating voltage: DC 4.5V - 12V DC
+ Output signal: 3.3V digital output
+ Delay time: adjustable from 0.3 seconds to 5 minutes
+ Operating temperature: -15°C to +70°C
+ Sensitivity: Adjustable

# APPPLICATION / USES
+ Lightening control
+ Thermostat and HVAC system
+ Smart home and IOT
+ Cameras and surveillance system
