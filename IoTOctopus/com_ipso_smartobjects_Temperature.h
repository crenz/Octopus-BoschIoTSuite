// com_ipso_smartobjects_Temperature

#ifndef __COM_IPSO_SMARTOBJECTS_TEMPERATURE_H__
#define __COM_IPSO_SMARTOBJECTS_TEMPERATURE_H__

#include <WString.h>

class com_ipso_smartobjects_Temperature
{
            public:
                com_ipso_smartobjects_Temperature();
		
                void setsensorValue(float value);
                float getsensorValue();
                void setminMeasuredValue(float value);
                float getminMeasuredValue();
                void setmaxMeasuredValue(float value);
                float getmaxMeasuredValue();
                void setminRangeValue(float value);
                float getminRangeValue();
                void setmaxRangeValue(float value);
                float getmaxRangeValue();
                void setsensorUnits(String value);
                String getsensorUnits();

                String serialize();
            private:
                float sensorValue;
                bool sensorValueUpdated;
                float minMeasuredValue;
                bool minMeasuredValueUpdated;
                float maxMeasuredValue;
                bool maxMeasuredValueUpdated;
                float minRangeValue;
                bool minRangeValueUpdated;
                float maxRangeValue;
                bool maxRangeValueUpdated;
                String sensorUnits;
                bool sensorUnitsUpdated;
        };

        #endif // __COM_IPSO_SMARTOBJECTS_TEMPERATURE_H__
