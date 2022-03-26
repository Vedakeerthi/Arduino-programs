# Arduino-programs
A repository of programs that helps in programming Arduino UNO board. The UNO board has a wide variety of applications in automation, some of the automation process includes:

* Distance calculation using ultrasonic sensor
* Moisture content in agricultural land
* Motion detection
<br/>

# **Distance calculation using ultrasonic sensor :**

A ultrasonic sensor that can measure distance, it emits an ultrasound which travels through the air and if there is an object or obstacle on its path, it will bounce back to the module. Considering the travel time and the speed of the object we can calculate the distance, the formula for calculating the distance is given as,

> time(t) = distance(d) / speed(s)

> The speed of sound is 340 m/s.

> So the distance can be calculated as, d = t * 0.034/2

The Wire.h module is imported, and the echoPin and trigPin is defined in 3 and 2 respectively. The buzzer, led light and the other led light have their positives in the pin 8, 13, 12 on the uno board respectively. In the setup loop, the pins and the output are set, where the echopin is set as input and the others are set as output and some outputs are print in the output screen.

In the loop block, initially the trigpin is set to low, the duration is calculated using the input from the echopin and using the formula the distance is calculated, if the distance is lower than 10 than it prints 'very close' and the led light is set to high, then the buzzer is made to work for a while than the buzzer is put to off. If the distance is greater than 11 and lesser than 50, it prints 'Near range' then the second led is put to high, else it prints 'Far range'.

# **Moisture content in soil :**

Soil moisture sensor measure the volumetric water content in soil, since the direct gravimetric measurement of free soil moisture requires removing, drying, anda weighing of sample, soil moisture sensors measure the volumetric water content indirectly by using some other property of the soil, such as electrical resistance, dielectric constant, or interaction with neutrons, as a proxy for the moisture content. 

In the code, the buzzer, led light1, led light2, led light3 are defined in the pins 11, 13, 10 and 12 respectively, and a variable moisture is declared as int. In the setup block, AO pin is defined as input and the others as output, in the loop block, the sensorvalue variable takes the input from the AO pin, using this the moisture content is calculated as,

> moisture = 100 - ((sensorvalue/1023.00)*100)

If the sensorvalue is greater than 1000, it prints as 'Not in soil or disconnected', if the sensor value is lesser than 1000 and greater than 600, it makes the led light1 as high and prints 'Dry soil' and makes the buzzer ring, else if the sensor value is lesser than 600 and greater than 370, it makes the led light 2 high and prints as 'Humid soil', else the led light 3 is made high and it is identified as 'Water soil'.

# **Motion detection :**

An LDR (Light dependent resistor) is a component that has a resistance that changes with the light intensity that falls upon it, this allows them to be used in light sensing circuits. A photoresistor can have a resistance as high as several mega ohms, while in the light, a photo resistor can have a resistance as low as a few hundred ohms. If incident light on a photo resistor exceeds a certain frequency, photons absorbed by the semiconductor give bound to electrons enough energy to jump to the conduction band. The resulting free electorns conduct electricity, which acts like a switch.

PIR sensor detects a human being moving around within approximately 10m from the sensor. PIR are fundamentally made of a pyro electric sensor, which can detect levels of infrared radiation. These sensors are incredible, that are flat control and minimal effort, and have a wide lens range, and are simple to interact with, by the use of PIR sensor we are going to detect motion.

According to the code, we initialized the sensor, a buzzer and a led light to the pins 2, 11, 13 respectively, and the sensor is setup as input and the other two as output. In the loop section, if the value read by the sensor is high, and the state is low, it is printed as 'Motion detected', then the buzzer is made to ring for one second, then the light is made to high, and the state is declared to high. The state is a variable which is made to be low while initializing since no motion is detected in the first time. Else if the state is high it is printed as the 'Motion is stopped' then the led light is made to stop and the state is setup to low. This is how the motion detection works.
