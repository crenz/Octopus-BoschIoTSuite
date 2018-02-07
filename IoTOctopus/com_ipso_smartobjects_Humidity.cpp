// com_ipso_smartobjects_Humidity

#include "com_ipso_smartobjects_Humidity.h"

com_ipso_smartobjects_Humidity::com_ipso_smartobjects_Humidity()
{
            sensorValueUpdated = false;
            minMeasuredValueUpdated = false;
            maxMasuredValueUpdated = false;
            minRangeValueUpdated = false;
            maxRangeValueUpdated = false;
            sensorUnitsUpdated = false;
}

void com_ipso_smartobjects_Humidity::setsensorValue(float value)
{
	sensorValue = value;
	sensorValueUpdated = true;
}

float com_ipso_smartobjects_Humidity::getsensorValue()
{
	return sensorValue;
}
void com_ipso_smartobjects_Humidity::setminMeasuredValue(float value)
{
	minMeasuredValue = value;
	minMeasuredValueUpdated = true;
}

float com_ipso_smartobjects_Humidity::getminMeasuredValue()
{
	return minMeasuredValue;
}
void com_ipso_smartobjects_Humidity::setmaxMasuredValue(float value)
{
	maxMasuredValue = value;
	maxMasuredValueUpdated = true;
}

float com_ipso_smartobjects_Humidity::getmaxMasuredValue()
{
	return maxMasuredValue;
}
void com_ipso_smartobjects_Humidity::setminRangeValue(float value)
{
	minRangeValue = value;
	minRangeValueUpdated = true;
}

float com_ipso_smartobjects_Humidity::getminRangeValue()
{
	return minRangeValue;
}
void com_ipso_smartobjects_Humidity::setmaxRangeValue(float value)
{
	maxRangeValue = value;
	maxRangeValueUpdated = true;
}

float com_ipso_smartobjects_Humidity::getmaxRangeValue()
{
	return maxRangeValue;
}
void com_ipso_smartobjects_Humidity::setsensorUnits(String value)
{
	sensorUnits = value;
	sensorUnitsUpdated = true;
}

String com_ipso_smartobjects_Humidity::getsensorUnits()
{
	return sensorUnits;
}

String com_ipso_smartobjects_Humidity::serialize()
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
                if (maxMasuredValueUpdated)
                {
                    result += "\"maxMasuredValue\" : " + String(maxMasuredValue) + ",";
                    maxMasuredValueUpdated = false;
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
