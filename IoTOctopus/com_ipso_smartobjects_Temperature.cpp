// com_ipso_smartobjects_Temperature

#include "com_ipso_smartobjects_Temperature.h"

com_ipso_smartobjects_Temperature::com_ipso_smartobjects_Temperature()
{
            sensorValueUpdated = false;
            minMeasuredValueUpdated = false;
            maxMeasuredValueUpdated = false;
            minRangeValueUpdated = false;
            maxRangeValueUpdated = false;
            sensorUnitsUpdated = false;
}

void com_ipso_smartobjects_Temperature::setsensorValue(float value)
{
	sensorValue = value;
	sensorValueUpdated = true;
}

float com_ipso_smartobjects_Temperature::getsensorValue()
{
	return sensorValue;
}
void com_ipso_smartobjects_Temperature::setminMeasuredValue(float value)
{
	minMeasuredValue = value;
	minMeasuredValueUpdated = true;
}

float com_ipso_smartobjects_Temperature::getminMeasuredValue()
{
	return minMeasuredValue;
}
void com_ipso_smartobjects_Temperature::setmaxMeasuredValue(float value)
{
	maxMeasuredValue = value;
	maxMeasuredValueUpdated = true;
}

float com_ipso_smartobjects_Temperature::getmaxMeasuredValue()
{
	return maxMeasuredValue;
}
void com_ipso_smartobjects_Temperature::setminRangeValue(float value)
{
	minRangeValue = value;
	minRangeValueUpdated = true;
}

float com_ipso_smartobjects_Temperature::getminRangeValue()
{
	return minRangeValue;
}
void com_ipso_smartobjects_Temperature::setmaxRangeValue(float value)
{
	maxRangeValue = value;
	maxRangeValueUpdated = true;
}

float com_ipso_smartobjects_Temperature::getmaxRangeValue()
{
	return maxRangeValue;
}
void com_ipso_smartobjects_Temperature::setsensorUnits(String value)
{
	sensorUnits = value;
	sensorUnitsUpdated = true;
}

String com_ipso_smartobjects_Temperature::getsensorUnits()
{
	return sensorUnits;
}

String com_ipso_smartobjects_Temperature::serialize()
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
