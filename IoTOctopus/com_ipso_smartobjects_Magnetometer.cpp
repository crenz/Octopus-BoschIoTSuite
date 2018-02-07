// com_ipso_smartobjects_Magnetometer

#include "com_ipso_smartobjects_Magnetometer.h"

com_ipso_smartobjects_Magnetometer::com_ipso_smartobjects_Magnetometer()
{
            xValueUpdated = false;
            yValueUpdated = false;
            zValueUpdated = false;
            compassDirectionUpdated = false;
            sensorUnitsUpdated = false;
}

void com_ipso_smartobjects_Magnetometer::setxValue(float value)
{
	xValue = value;
	xValueUpdated = true;
}

float com_ipso_smartobjects_Magnetometer::getxValue()
{
	return xValue;
}
void com_ipso_smartobjects_Magnetometer::setyValue(float value)
{
	yValue = value;
	yValueUpdated = true;
}

float com_ipso_smartobjects_Magnetometer::getyValue()
{
	return yValue;
}
void com_ipso_smartobjects_Magnetometer::setzValue(float value)
{
	zValue = value;
	zValueUpdated = true;
}

float com_ipso_smartobjects_Magnetometer::getzValue()
{
	return zValue;
}
void com_ipso_smartobjects_Magnetometer::setcompassDirection(float value)
{
	compassDirection = value;
	compassDirectionUpdated = true;
}

float com_ipso_smartobjects_Magnetometer::getcompassDirection()
{
	return compassDirection;
}
void com_ipso_smartobjects_Magnetometer::setsensorUnits(String value)
{
	sensorUnits = value;
	sensorUnitsUpdated = true;
}

String com_ipso_smartobjects_Magnetometer::getsensorUnits()
{
	return sensorUnits;
}

String com_ipso_smartobjects_Magnetometer::serialize()
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
                if (compassDirectionUpdated)
                {
                    result += "\"compassDirection\" : " + String(compassDirection) + ",";
                    compassDirectionUpdated = false;
                }
                if (sensorUnitsUpdated)
                {
                    result += "\"sensorUnits\" : \"" + String(sensorUnits) + "\" ";
                    sensorUnitsUpdated = false;
                }
	
    		result += "} }";

            return result;
        }
