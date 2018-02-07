// com_ipso_smartobjects_Gyrometer

#include "com_ipso_smartobjects_Gyrometer.h"

com_ipso_smartobjects_Gyrometer::com_ipso_smartobjects_Gyrometer()
{
            xValueUpdated = false;
            yValueUpdated = false;
            zValueUpdated = false;
            sensorUnitsUpdated = false;
            minXValueUpdated = false;
            maxXValueUpdated = false;
            minYValueUpdated = false;
            maxYValueUpdated = false;
            minZValueUpdated = false;
            maxZValueUpdated = false;
            minRangeValueUpdated = false;
            maxRangeValueUpdated = false;
            applicationTypeUpdated = false;
}

void com_ipso_smartobjects_Gyrometer::setxValue(float value)
{
	xValue = value;
	xValueUpdated = true;
}

float com_ipso_smartobjects_Gyrometer::getxValue()
{
	return xValue;
}
void com_ipso_smartobjects_Gyrometer::setyValue(float value)
{
	yValue = value;
	yValueUpdated = true;
}

float com_ipso_smartobjects_Gyrometer::getyValue()
{
	return yValue;
}
void com_ipso_smartobjects_Gyrometer::setzValue(float value)
{
	zValue = value;
	zValueUpdated = true;
}

float com_ipso_smartobjects_Gyrometer::getzValue()
{
	return zValue;
}
void com_ipso_smartobjects_Gyrometer::setsensorUnits(String value)
{
	sensorUnits = value;
	sensorUnitsUpdated = true;
}

String com_ipso_smartobjects_Gyrometer::getsensorUnits()
{
	return sensorUnits;
}
void com_ipso_smartobjects_Gyrometer::setminXValue(float value)
{
	minXValue = value;
	minXValueUpdated = true;
}

float com_ipso_smartobjects_Gyrometer::getminXValue()
{
	return minXValue;
}
void com_ipso_smartobjects_Gyrometer::setmaxXValue(float value)
{
	maxXValue = value;
	maxXValueUpdated = true;
}

float com_ipso_smartobjects_Gyrometer::getmaxXValue()
{
	return maxXValue;
}
void com_ipso_smartobjects_Gyrometer::setminYValue(float value)
{
	minYValue = value;
	minYValueUpdated = true;
}

float com_ipso_smartobjects_Gyrometer::getminYValue()
{
	return minYValue;
}
void com_ipso_smartobjects_Gyrometer::setmaxYValue(float value)
{
	maxYValue = value;
	maxYValueUpdated = true;
}

float com_ipso_smartobjects_Gyrometer::getmaxYValue()
{
	return maxYValue;
}
void com_ipso_smartobjects_Gyrometer::setminZValue(float value)
{
	minZValue = value;
	minZValueUpdated = true;
}

float com_ipso_smartobjects_Gyrometer::getminZValue()
{
	return minZValue;
}
void com_ipso_smartobjects_Gyrometer::setmaxZValue(float value)
{
	maxZValue = value;
	maxZValueUpdated = true;
}

float com_ipso_smartobjects_Gyrometer::getmaxZValue()
{
	return maxZValue;
}
void com_ipso_smartobjects_Gyrometer::setminRangeValue(float value)
{
	minRangeValue = value;
	minRangeValueUpdated = true;
}

float com_ipso_smartobjects_Gyrometer::getminRangeValue()
{
	return minRangeValue;
}
void com_ipso_smartobjects_Gyrometer::setmaxRangeValue(float value)
{
	maxRangeValue = value;
	maxRangeValueUpdated = true;
}

float com_ipso_smartobjects_Gyrometer::getmaxRangeValue()
{
	return maxRangeValue;
}
void com_ipso_smartobjects_Gyrometer::setapplicationType(String value)
{
	applicationType = value;
	applicationTypeUpdated = true;
}

String com_ipso_smartobjects_Gyrometer::getapplicationType()
{
	return applicationType;
}

String com_ipso_smartobjects_Gyrometer::serialize()
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
                if (minXValueUpdated)
                {
                    result += "\"minXValue\" : " + String(minXValue) + ",";
                    minXValueUpdated = false;
                }
                if (maxXValueUpdated)
                {
                    result += "\"maxXValue\" : " + String(maxXValue) + ",";
                    maxXValueUpdated = false;
                }
                if (minYValueUpdated)
                {
                    result += "\"minYValue\" : " + String(minYValue) + ",";
                    minYValueUpdated = false;
                }
                if (maxYValueUpdated)
                {
                    result += "\"maxYValue\" : " + String(maxYValue) + ",";
                    maxYValueUpdated = false;
                }
                if (minZValueUpdated)
                {
                    result += "\"minZValue\" : " + String(minZValue) + ",";
                    minZValueUpdated = false;
                }
                if (maxZValueUpdated)
                {
                    result += "\"maxZValue\" : " + String(maxZValue) + ",";
                    maxZValueUpdated = false;
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
                if (applicationTypeUpdated)
                {
                    result += "\"applicationType\" : \"" + String(applicationType) + "\" ";
                    applicationTypeUpdated = false;
                }
	
    		result += "} }";

            return result;
        }
