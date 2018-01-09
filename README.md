 O EMSYS code
=================================

Author: Selen Kelan

Description: The GPIOClass C++ class enables the Raspberry Pi its onboard GPIOs via the sysfs interface. 

added code to be used with domoticz and comply with the teacher's consigns


To build :
============================================================================================================

For version 2 asked:

g++ -fpermissive -Wall GPIOClass.cpp GPIOon.cpp -o gpioon

g++ -fpermissive -Wall GPIOClass.cpp GPIOoff.cpp -o gpiooff

each script will trigger on or off the pin.

For version 4 asked :

g++ -fpermissive -Wall GPIOClass.cpp GPIOserver.cpp -o serv

g++ -fpermissive -Wall GPIOservon.cpp -o servon

g++ -fpermissive -Wall GPIOservoff.cpp -o servoff

serv is the server. start as sudo.

servon throws a "allumer" to server. gpio 17 is triggered on

servoff throws a "off" message to server. gpio is triggered off, and server stops.

In Progress :
============================================================================================================

parse console information.
cleanup things. (almost done)
