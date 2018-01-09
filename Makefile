all:
	g++ -fpermissive -Wall GPIOclient.cpp -o build/client
	g++ -fpermissive -Wall GPIOClass.cpp GPIOserver.cpp -o build/server
	g++ -fpermissive -Wall GPIOservoff.cpp -o build/servoff
	g++ -fpermissive -Wall GPIOservon.cpp -o build/servon

v2:
	g++ -fpermissive -Wall GPIOClass.cpp GPIOon.cpp -o build/gpion
	g++ -fpermissive -Wall GPIOClass.cpp GPIOoff.cpp -o build/gpioff

