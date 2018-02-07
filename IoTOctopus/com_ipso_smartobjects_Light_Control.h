// com_ipso_smartobjects_Light_Control

#ifndef __COM_IPSO_SMARTOBJECTS_LIGHT_CONTROL_H__
#define __COM_IPSO_SMARTOBJECTS_LIGHT_CONTROL_H__

#include <WString.h>

class com_ipso_smartobjects_Light_Control
{
            public:
                com_ipso_smartobjects_Light_Control();
		
                void setcumulativeActivePower(float value);
                float getcumulativeActivePower();
                void setpowerFactor(float value);
                float getpowerFactor();
                void setsensorUnits(String value);
                String getsensorUnits();

                String serialize();
            private:
                float cumulativeActivePower;
                bool cumulativeActivePowerUpdated;
                float powerFactor;
                bool powerFactorUpdated;
                String sensorUnits;
                bool sensorUnitsUpdated;
        };

        #endif // __COM_IPSO_SMARTOBJECTS_LIGHT_CONTROL_H__
