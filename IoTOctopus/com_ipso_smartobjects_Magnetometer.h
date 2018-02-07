// com_ipso_smartobjects_Magnetometer

#ifndef __COM_IPSO_SMARTOBJECTS_MAGNETOMETER_H__
#define __COM_IPSO_SMARTOBJECTS_MAGNETOMETER_H__

#include <WString.h>

class com_ipso_smartobjects_Magnetometer
{
            public:
                com_ipso_smartobjects_Magnetometer();
		
                void setxValue(float value);
                float getxValue();
                void setyValue(float value);
                float getyValue();
                void setzValue(float value);
                float getzValue();
                void setcompassDirection(float value);
                float getcompassDirection();
                void setsensorUnits(String value);
                String getsensorUnits();

                String serialize();
            private:
                float xValue;
                bool xValueUpdated;
                float yValue;
                bool yValueUpdated;
                float zValue;
                bool zValueUpdated;
                float compassDirection;
                bool compassDirectionUpdated;
                String sensorUnits;
                bool sensorUnitsUpdated;
        };

        #endif // __COM_IPSO_SMARTOBJECTS_MAGNETOMETER_H__
