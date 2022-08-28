#ifndef SENSORNODE_H
#define SENSORNODE_H
class SensorNode
{
private:
	double temperatureInCelsius;
	double randomTemperatureGenerator(double lowerTemperatureBoundary, double higherTemperatureBoundary);
public:
	SensorNode();
	double getTemperatureInCelsius();
};
#endif
