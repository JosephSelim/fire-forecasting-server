#include "SensorNode.h"
#include<iostream>
#include<cstdlib>
using namespace std;

SensorNode::SensorNode()
{}

double SensorNode::randomTemperatureGenerator(double lowerTemperatureBoundary, double higherTemperatureBoundary)
{
	srand((unsigned)time(NULL));
	// TODO: Convert Random Int to a Normal Distributed Value, with Median Around 20 Celsius
	lowerTemperatureBoundary /= 1.3;
	higherTemperatureBoundary /= 1.3;
	double random = lowerTemperatureBoundary + (rand() % int(higherTemperatureBoundary - lowerTemperatureBoundary)) * 1.3;
	return random;
}

double SensorNode::getTemperatureInCelsius()
{
	temperatureInCelsius = randomTemperatureGenerator(20.0, 50.0);
	return temperatureInCelsius;
}