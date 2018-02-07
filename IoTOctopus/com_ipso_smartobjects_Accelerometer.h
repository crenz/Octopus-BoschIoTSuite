// com_ipso_smartobjects_Accelerometer

#ifndef __COM_IPSO_SMARTOBJECTS_ACCELEROMETER_H__
#define __COM_IPSO_SMARTOBJECTS_ACCELEROMETER_H__

#include <WString.h>

class com_ipso_smartobjects_Accelerometer
{
            public:
                com_ipso_smartobjects_Accelerometer();
		
                void setxValue(float value);
                float getxValue();
                void setyValue(float value);
                float getyValue();
                void setzValue(float value);
                float getzValue();
                void setsensorUnits(String value);
                String getsensorUnits();
                void setminRangeValue(float value);
                float getminRangeValue();
                void setmaxRangeValue(float value);
                float getmaxRangeValue();

                String serialize();
            private:
                float xValue;
                bool xValueUpdated;
                float yValue;
                bool yValueUpdated;
                float zValue;
                bool zValueUpdated;
                String sensorUnits;
                bool sensorUnitsUpdated;
                float minRangeValue;
                bool minRangeValueUpdated;
                float maxRangeValue;
                bool maxRangeValueUpdated;
        };

        #endif // __COM_IPSO_SMARTOBJECTS_ACCELEROMETER_H__
