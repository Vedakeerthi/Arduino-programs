# Arduino-programs
A repository of programs that helps in programming Arduino UNO board. The UNO board has a wide variety of applications in automation, some of the automation process includes:

* Distance calculation using ultrasonic sensor
* Moisture content in agricultural land
* Motion detection
* Room temperature and humidity detection
* Colour recognition using arduino
* Fire alarm indicator using arduino
* Sound detection using arduino
* Interfacing flex sensor with arduino
* Interfacing force pressure sensor with arduino
<br/>

# **Distance calculation using ultrasonic sensor :**

A ultrasonic sensor that can measure distance, it emits an ultrasound which travels through the air and if there is an object or obstacle on its path, it will bounce back to the module. Considering the travel time and the speed of the object we can calculate the distance, the formula for calculating the distance is given as,

> time(t) = distance(d) / speed(s)

> The speed of sound is 340 m/s.

> So the distance can be calculated as, d = t * 0.034/2

The Wire.h module is imported, and the echoPin and trigPin is defined in 3 and 2 respectively. The buzzer, led light and the other led light have their positives in the pin 8, 13, 12 on the uno board respectively. In the setup loop, the pins and the output are set, where the echopin is set as input and the others are set as output and some outputs are print in the output screen.

In the loop block, initially the trigpin is set to low, the duration is calculated using the input from the echopin and using the formula the distance is calculated, if the distance is lower than 10 than it prints 'very close' and the led light is set to high, then the buzzer is made to work for a while than the buzzer is put to off. If the distance is greater than 11 and lesser than 50, it prints 'Near range' then the second led is put to high, else it prints 'Far range'.
<br/>

# **Moisture content in soil :**

Soil moisture sensor measure the volumetric water content in soil, since the direct gravimetric measurement of free soil moisture requires removing, drying, anda weighing of sample, soil moisture sensors measure the volumetric water content indirectly by using some other property of the soil, such as electrical resistance, dielectric constant, or interaction with neutrons, as a proxy for the moisture content. 

In the code, the buzzer, led light1, led light2, led light3 are defined in the pins 11, 13, 10 and 12 respectively, and a variable moisture is declared as int. In the setup block, AO pin is defined as input and the others as output, in the loop block, the sensorvalue variable takes the input from the AO pin, using this the moisture content is calculated as,

> moisture = 100 - ((sensorvalue/1023.00)*100)

If the sensorvalue is greater than 1000, it prints as 'Not in soil or disconnected', if the sensor value is lesser than 1000 and greater than 600, it makes the led light1 as high and prints 'Dry soil' and makes the buzzer ring, else if the sensor value is lesser than 600 and greater than 370, it makes the led light 2 high and prints as 'Humid soil', else the led light 3 is made high and it is identified as 'Water soil'.
<br/>

# **Motion detection :**

An LDR (Light dependent resistor) is a component that has a resistance that changes with the light intensity that falls upon it, this allows them to be used in light sensing circuits. A photoresistor can have a resistance as high as several mega ohms, while in the light, a photo resistor can have a resistance as low as a few hundred ohms. If incident light on a photo resistor exceeds a certain frequency, photons absorbed by the semiconductor give bound to electrons enough energy to jump to the conduction band. The resulting free electorns conduct electricity, which acts like a switch.

PIR sensor detects a human being moving around within approximately 10m from the sensor. PIR are fundamentally made of a pyro electric sensor, which can detect levels of infrared radiation. These sensors are incredible, that are flat control and minimal effort, and have a wide lens range, and are simple to interact with, by the use of PIR sensor we are going to detect motion.

According to the code, we initialized the sensor, a buzzer and a led light to the pins 2, 11, 13 respectively, and the sensor is setup as input and the other two as output. In the loop section, if the value read by the sensor is high, and the state is low, it is printed as 'Motion detected', then the buzzer is made to ring for one second, then the light is made to high, and the state is declared to high. The state is a variable which is made to be low while initializing since no motion is detected in the first time. Else if the state is high it is printed as the 'Motion is stopped' then the led light is made to stop and the state is setup to low. This is how the motion detection works.
<br/>

# **Room temperature and humidity detection :** 

DHT11 is the sensor used for sensing temperature and humidity, it consists of a capacitive humidity sensing element and a thermistor for sensing temperature. The humidity sensing capacitor has two electrodes with a moisture holding substrate as a dielectric between them, change in the capacitance value occurs with the change in humidity levels. For measuring temperature the sensor uses a negative temperature coefficient thermistor, which causes a decrease in its resistance value with increase in temperature.

In the code, the DHT module is used and the pin and type of dht are specified accordingly. Once its done then a buzzer and three led along with they are specified as output in the setup loop and dht is made to begin. In the loop function, the humidity and the temperature is read and stored in the variable h and t respectively using the inbuilt functions in the dht module, then the values are printed and if the temperature is greater than 29 the buzzer is made to ring and a led light is made to lit else the second led is made to lit and printed as low temperature.
<br/>

# **Colour recognition using arduino :**

The TCS230 colour sensor is quite popular, inexpensive and easy to use, it consists of an RGB sensor chip, that can detect and measure an almost infinite range of visible colours. The sensor can be seen at the center of the module, surrounded by the four white LEDs. Because of these LEDs, the sensor can also work in complete darkness to determine the colour or brightness of the object. 

In the code, we define the module pins and a variable data of int type is initialized with the value 0. In the setup function the out pin is set as input and the others as output. Meanwhile in the loop function, s2, s3 is made to low and the red value is printed from the function _getdata()_, next to that the s2 is made low and the s3 is made to high, after that the blue value is printed from the _getdata()_ function, and s2, s3 is made high and the green value is printed from the same _getdata()_ function. In the getdata function, the data is varied by the frequency as the sensor gives a frequency depending on the color. Thus the color of different frequencies are found using the arduino.
<br/>

# **Fire alarm indicator using arduino :**

A flame sensor is one kind of detector which is mainly designed for detecting a well as responding to the occurence to the occurence of a fire or flame. The flame detection response can depend on its fitting. It includes an alarm system, a natural gas line, propane & a fire suppression system. This sensor is used in industrial boilers. The response of these sensors is faster as well as more accurate compare with a heat/smoke detector because of its mechanism while detecting the flame.

This sensor/detector can be built with an electronic circuit using a receiver like electromagnetic radiation. This sensor uses the infrared flame flash method, which allows the sensor to work through a coating of oil, dust, water vapour, otherwise ice.

By the instruction and after connections, the setup loop is declaring the pins and which pins corresponds to output and the others as input, based on the requirements use led and buzzer. In the loop, the analog reading of the sensor is obtained, then with the given range the obtained value is mapped with the sensor minimum and maximum value, then a value with 0 indicates 'close fire', a value with 1 indicates 'distant fire', and in the case of 2 it indicates 'no fire', and based on which the led lights are lit and the buzzers are made to ring.
<br>

# **Sound detection using arduino :**

The microphone sound sensor, detects sound. It gives a measurement of how loud a sound is. There are wide variety of these sensors, this microphone sensor will detect the sound intensity of your surroundings and will light up an LED if the sound intensity is above a certain threshold. 

A basic and a simple program, where the input and the output pins of the arduino are set in the setup loop and the threshold is also set, which is used to detect the sound based on the threshold, it is basically an integer value. Then in the loop function, the analog value from the sensor is attained, then if the analog value is greater than the threshold then the led is made to blink and it prints output as 'Sound detected' else 'Sound not detected'.
<br>

# **Interfacing flex sensor with arduino :**

A flex sensor is a kind of sensor which is used to measure the amount of defection otherwise bending. The carbon surface is arranged on a plastic strip as this strip is turned aside then the sensor’s resistance will be changed. Thus, it is also named a bend sensor.

Based on the code, the flexpin and the ledpin are initialized and setup in the setup loop and the analog value given by the flexpin is acquired and based on some threshold the led is made to lit, the more the sensor bends the higher its resistance.
<br>

# **Interfacing force pressure sensor with arduino :**

The working principle of a force sensor is that it responds to the applied force, as well as converts the value to a measurable quantity. Most force sensors are created with the use of force-sensing resistors. Such sensors consists of electrodes and sensing film.

Force-sensing resistors are based on contact resistance. These contain a conductive polymer film, which changes its resistance in a predictable way once force is applied on the surface.

The module FORCE_SENSOR_PIN_AO is defined and the analog reading from the sensor is obtained, and by which if the analog reading is less than 10 it returns as 'no pressure', and if the analog reading is less than 200 it is said to print as 'light touch', and if the analog reading is less than 500 and greater than 200 it will print as 'light pressure' and if the analog reading is less than 800 and greater than 500, the result will be 'medium pressure' else the sensor will result in some 'big pressure'. 
<br>
