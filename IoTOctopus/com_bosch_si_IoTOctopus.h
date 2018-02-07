// com_bosch_si_IoTOctopus

#ifndef __COM_BOSCH_SI_IOTOCTOPUS_H__
#define __COM_BOSCH_SI_IOTOCTOPUS_H__

#include <WString.h>

#include "com_ipso_smartobjects_Accelerometer.h"
#include "com_ipso_smartobjects_Concentration.h"
#include "com_ipso_smartobjects_Analog_Input.h"
#include "com_ipso_smartobjects_Barometer.h"
#include "com_ipso_smartobjects_Gyrometer.h"
#include "com_ipso_smartobjects_Humidity.h"
#include "com_ipso_smartobjects_Magnetometer.h"
#include "com_ipso_smartobjects_Power.h"
#include "com_ipso_smartobjects_Temperature.h"
#include "com_ipso_smartobjects_Light_Control.h"
#include "com_ipso_smartobjects_Light_Control.h"

class com_bosch_si_IoTOctopus
{
            public:
                com_bosch_si_IoTOctopus();

                com_ipso_smartobjects_Accelerometer accelerometer;
                com_ipso_smartobjects_Concentration airQualityIndex;
                com_ipso_smartobjects_Analog_Input analog_input;
                com_ipso_smartobjects_Barometer barometer;
                com_ipso_smartobjects_Gyrometer gyrometer;
                com_ipso_smartobjects_Humidity humidity;
                com_ipso_smartobjects_Magnetometer magnetometer;
                com_ipso_smartobjects_Power power;
                com_ipso_smartobjects_Temperature temperature;
                com_ipso_smartobjects_Light_Control rgb1;
                com_ipso_smartobjects_Light_Control rgb2;

                String serialize();
            private:
};

#endif // __COM_BOSCH_SI_IOTOCTOPUS_H__
