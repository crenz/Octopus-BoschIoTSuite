// com_ipso_smartobjects_Light_Control

#include "com_ipso_smartobjects_Light_Control.h"

com_ipso_smartobjects_Light_Control::com_ipso_smartobjects_Light_Control()
{
            cumulativeActivePowerUpdated = false;
            powerFactorUpdated = false;
            sensorUnitsUpdated = false;
}

void com_ipso_smartobjects_Light_Control::setcumulativeActivePower(float value)
{
	cumulativeActivePower = value;
	cumulativeActivePowerUpdated = true;
}

float com_ipso_smartobjects_Light_Control::getcumulativeActivePower()
{
	return cumulativeActivePower;
}
void com_ipso_smartobjects_Light_Control::setpowerFactor(float value)
{
	powerFactor = value;
	powerFactorUpdated = true;
}

float com_ipso_smartobjects_Light_Control::getpowerFactor()
{
	return powerFactor;
}
void com_ipso_smartobjects_Light_Control::setsensorUnits(String value)
{
	sensorUnits = value;
	sensorUnitsUpdated = true;
}

String com_ipso_smartobjects_Light_Control::getsensorUnits()
{
	return sensorUnits;
}

String com_ipso_smartobjects_Light_Control::serialize()
{
    String result = "\"properties\" : { \"status\" : { ";
                if (cumulativeActivePowerUpdated)
                {
                    result += "\"cumulativeActivePower\" : " + String(cumulativeActivePower) + ",";
                    cumulativeActivePowerUpdated = false;
                }
                if (powerFactorUpdated)
                {
                    result += "\"powerFactor\" : " + String(powerFactor) + ",";
                    powerFactorUpdated = false;
                }
                if (sensorUnitsUpdated)
                {
                    result += "\"sensorUnits\" : \"" + String(sensorUnits) + "\" ";
                    sensorUnitsUpdated = false;
                }
	
    		result += "} }";

            return result;
        }
