// com_ipso_smartobjects_Humidity

#ifndef __COM_IPSO_SMARTOBJECTS_HUMIDITY_H__
#define __COM_IPSO_SMARTOBJECTS_HUMIDITY_H__

#include <WString.h>

class com_ipso_smartobjects_Humidity
{
            public:
                com_ipso_smartobjects_Humidity();
		
                void setsensorValue(float value);
                float getsensorValue();
                void setminMeasuredValue(float value);
                float getminMeasuredValue();
                void setmaxMasuredValue(float value);
                float getmaxMasuredValue();
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
                float maxMasuredValue;
                bool maxMasuredValueUpdated;
                float minRangeValue;
                bool minRangeValueUpdated;
                float maxRangeValue;
                bool maxRangeValueUpdated;
                String sensorUnits;
                bool sensorUnitsUpdated;
        };

        #endif // __COM_IPSO_SMARTOBJECTS_HUMIDITY_H__
