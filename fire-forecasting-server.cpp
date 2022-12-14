// fire-forecasting-server.cpp : Defines the entry point for the application.
//

#include "fire-forecasting-server.h"

using namespace std;

int main()
{
	SensorNode tempSensor;
	string IP = "127.0.0.1";
	int PORT = 8888;
	ServerNode server(IP, PORT);

	server.initServer();

	while (true) {
		server.sendData(tempSensor.getTemperatureInCelsius());
		Sleep(1000);
	}
	
}
