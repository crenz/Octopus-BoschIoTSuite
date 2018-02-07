// com_ipso_smartobjects_Accelerometer

#include "com_ipso_smartobjects_Accelerometer.h"

com_ipso_smartobjects_Accelerometer::com_ipso_smartobjects_Accelerometer()
{
            xValueUpdated = false;
            yValueUpdated = false;
            zValueUpdated = false;
            sensorUnitsUpdated = false;
            minRangeValueUpdated = false;
            maxRangeValueUpdated = false;
}

void com_ipso_smartobjects_Accelerometer::setxValue(float value)
{
	xValue = value;
	xValueUpdated = true;
}

float com_ipso_smartobjects_Accelerometer::getxValue()
{
	return xValue;
}
void com_ipso_smartobjects_Accelerometer::setyValue(float value)
{
	yValue = value;
	yValueUpdated = true;
}

float com_ipso_smartobjects_Accelerometer::getyValue()
{
	return yValue;
}
void com_ipso_smartobjects_Accelerometer::setzValue(float value)
{
	zValue = value;
	zValueUpdated = true;
}

float com_ipso_smartobjects_Accelerometer::getzValue()
{
	return zValue;
}
void com_ipso_smartobjects_Accelerometer::setsensorUnits(String value)
{
	sensorUnits = value;
	sensorUnitsUpdated = true;
}

String com_ipso_smartobjects_Accelerometer::getsensorUnits()
{
	return sensorUnits;
}
void com_ipso_smartobjects_Accelerometer::setminRangeValue(float value)
{
	minRangeValue = value;
	minRangeValueUpdated = true;
}

float com_ipso_smartobjects_Accelerometer::getminRangeValue()
{
	return minRangeValue;
}
void com_ipso_smartobjects_Accelerometer::setmaxRangeValue(float value)
{
	maxRangeValue = value;
	maxRangeValueUpdated = true;
}

float com_ipso_smartobjects_Accelerometer::getmaxRangeValue()
{
	return maxRangeValue;
}

String com_ipso_smartobjects_Accelerometer::serialize()
{
    String result = "\"properties\" : { \"status\" : { ";
                if (xValueUpdated)
                {
                    result += "\"xValue\" : " + String(xValue) + ",";
                    xValueUpdated = false;
                }
                if (yValueUpdated)
                {
                    result += "\"yValue\" : " + String(yValue) + ",";
                    yValueUpdated = false;
                }
                if (zValueUpdated)
                {
                    result += "\"zValue\" : " + String(zValue) + ",";
                    zValueUpdated = false;
                }
                if (sensorUnitsUpdated)
                {
                    result += "\"sensorUnits\" : \"" + String(sensorUnits) + "\", ";
                    sensorUnitsUpdated = false;
                }
                if (minRangeValueUpdated)
                {
                    result += "\"minRangeValue\" : " + String(minRangeValue) + ",";
                    minRangeValueUpdated = false;
                }
                if (maxRangeValueUpdated)
                {
                    result += "\"maxRangeValue\" : " + String(maxRangeValue) + "";
                    maxRangeValueUpdated = false;
                }
	
    		result += "} }";

            return result;
        }
