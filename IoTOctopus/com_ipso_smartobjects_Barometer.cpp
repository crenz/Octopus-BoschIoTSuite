// com_ipso_smartobjects_Barometer

#include "com_ipso_smartobjects_Barometer.h"

com_ipso_smartobjects_Barometer::com_ipso_smartobjects_Barometer()
{
            sensorValueUpdated = false;
            minMeasuredValueUpdated = false;
            maxMeasuredValueUpdated = false;
            minRangeValueUpdated = false;
            maxRangeValueUpdated = false;
            sensorUnitsUpdated = false;
}

void com_ipso_smartobjects_Barometer::setsensorValue(float value)
{
	sensorValue = value;
	sensorValueUpdated = true;
}

float com_ipso_smartobjects_Barometer::getsensorValue()
{
	return sensorValue;
}
void com_ipso_smartobjects_Barometer::setminMeasuredValue(float value)
{
	minMeasuredValue = value;
	minMeasuredValueUpdated = true;
}

float com_ipso_smartobjects_Barometer::getminMeasuredValue()
{
	return minMeasuredValue;
}
void com_ipso_smartobjects_Barometer::setmaxMeasuredValue(float value)
{
	maxMeasuredValue = value;
	maxMeasuredValueUpdated = true;
}

float com_ipso_smartobjects_Barometer::getmaxMeasuredValue()
{
	return maxMeasuredValue;
}
void com_ipso_smartobjects_Barometer::setminRangeValue(float value)
{
	minRangeValue = value;
	minRangeValueUpdated = true;
}

float com_ipso_smartobjects_Barometer::getminRangeValue()
{
	return minRangeValue;
}
void com_ipso_smartobjects_Barometer::setmaxRangeValue(float value)
{
	maxRangeValue = value;
	maxRangeValueUpdated = true;
}

float com_ipso_smartobjects_Barometer::getmaxRangeValue()
{
	return maxRangeValue;
}
void com_ipso_smartobjects_Barometer::setsensorUnits(String value)
{
	sensorUnits = value;
	sensorUnitsUpdated = true;
}

String com_ipso_smartobjects_Barometer::getsensorUnits()
{
	return sensorUnits;
}

String com_ipso_smartobjects_Barometer::serialize()
{
    String result = "\"properties\" : { \"status\" : { ";
                if (sensorValueUpdated)
                {
                    result += "\"sensorValue\" : " + String(sensorValue) + ",";
                    sensorValueUpdated = false;
                }
                if (minMeasuredValueUpdated)
                {
                    result += "\"minMeasuredValue\" : " + String(minMeasuredValue) + ",";
                    minMeasuredValueUpdated = false;
                }
                if (maxMeasuredValueUpdated)
                {
                    result += "\"maxMeasuredValue\" : " + String(maxMeasuredValue) + ",";
                    maxMeasuredValueUpdated = false;
                }
                if (minRangeValueUpdated)
                {
                    result += "\"minRangeValue\" : " + String(minRangeValue) + ",";
                    minRangeValueUpdated = false;
                }
                if (maxRangeValueUpdated)
                {
                    result += "\"maxRangeValue\" : " + String(maxRangeValue) + ",";
                    maxRangeValueUpdated = false;
                }
                if (sensorUnitsUpdated)
                {
                    result += "\"sensorUnits\" : \"" + String(sensorUnits) + "\" ";
                    sensorUnitsUpdated = false;
                }
	
    		result += "} }";

            return result;
        }
