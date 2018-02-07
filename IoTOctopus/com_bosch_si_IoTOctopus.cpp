// com_bosch_si_IoTOctopus

#include "com_bosch_si_IoTOctopus.h"

com_bosch_si_IoTOctopus::com_bosch_si_IoTOctopus() 
{
}

String com_bosch_si_IoTOctopus::serialize()
{
            String result = "{";
                result += "\"accelerometer\": { ";
                result += accelerometer.serialize();
                result += " },";
                result += "\"airQualityIndex\": { ";
                result += airQualityIndex.serialize();
                result += " },";
                result += "\"analog_input\": { ";
                result += analog_input.serialize();
                result += " },";
                result += "\"barometer\": { ";
                result += barometer.serialize();
                result += " },";
                result += "\"gyrometer\": { ";
                result += gyrometer.serialize();
                result += " },";
                result += "\"humidity\": { ";
                result += humidity.serialize();
                result += " },";
                result += "\"magnetometer\": { ";
                result += magnetometer.serialize();
                result += " },";
                result += "\"power\": { ";
                result += power.serialize();
                result += " },";
                result += "\"temperature\": { ";
                result += temperature.serialize();
                result += " },";
                result += "\"rgb1\": { ";
                result += rgb1.serialize();
                result += " },";
                result += "\"rgb2\": { ";
                result += rgb2.serialize();
                result += " }";

            result += "}"; 

            return result;
        }
