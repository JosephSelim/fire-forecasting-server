#include <gtest/gtest.h>


extern "C"
{
#include "../server/sensorNode.h"
}

TEST(Test_Suite_SensorNode, randomTempGeneratedWithinBoundaries)
{
    SensorNode sensor;
    bool result=false ;
    double expectedLowerBoundary = 20.0, expectedHigherBoundary = 50.0;
    if (sensor.getTemperatureInCelsius() >= 20.0 && sensor.getTemperatureInCelsius() <= 50.0)
    {
        result = true;
    }
    EXPECT_TRUE(result);
}