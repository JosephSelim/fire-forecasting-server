#include "SensorNode.h"
#include<iostream>
#include<cstdlib>
using namespace std;

SensorNode::SensorNode()
{}

double SensorNode::randomTemperatureGenerator(double lowerTemperatureBoundary, double higherTemperatureBoundary)
{
	// TODO: Convert Random Int to a Normal Distributed Value, with Median Around 20 Celsius
	double random = (((float)rand() / RAND_MAX) * (higherTemperatureBoundary - lowerTemperatureBoundary)) + lowerTemperatureBoundary;
	return random;
}

double SensorNode::getTemperatureInCelsius()
{
	temperatureInCelsius = randomTemperatureGenerator(20.0, 25.0);
	return temperatureInCelsius;
}