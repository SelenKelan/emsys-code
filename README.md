 O EMSYS code
=================================

Author: Selen Kelan

Description: The GPIOClass C++ class enables the Raspberry Pi its onboard GPIOs via the sysfs interface. 

added code to be used with domoticz and comply with the teacher's consigns


To build :
============================================================================================================

For version 2 asked:

sudo make v2

each script will trigger on or off the pin.

For version 4 asked :

sudo make

serv is the server. start as sudo.

servon throws a "allumer" to server. gpio 17 is triggered on

servoff throws a "off" message to server. gpio is triggered off, and server stops.

In Progress :
============================================================================================================

parse console information.
