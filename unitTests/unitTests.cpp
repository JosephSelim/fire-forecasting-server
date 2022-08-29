#include <gtest/gtest.h>


extern "C"
{
#include "../server/sensorNode.h"
}

TEST(Test_Suite_SensorNode, randomTempGeneratedWithinBoundaries)
{
    SensorNode sensor;
    bool result=false ;
    double expectedLowerBoundary = 20.0, expectedHigherBoundary = 25.0;
    double currentTemp = sensor.getTemperatureInCelsius();
    if(currentTemp >= expectedLowerBoundary && currentTemp <= expectedHigherBoundary)
    {
        result = true;
    }
    EXPECT_TRUE(result);
}