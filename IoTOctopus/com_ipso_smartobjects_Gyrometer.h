// com_ipso_smartobjects_Gyrometer

#ifndef __COM_IPSO_SMARTOBJECTS_GYROMETER_H__
#define __COM_IPSO_SMARTOBJECTS_GYROMETER_H__

#include <WString.h>

class com_ipso_smartobjects_Gyrometer
{
            public:
                com_ipso_smartobjects_Gyrometer();
		
                void setxValue(float value);
                float getxValue();
                void setyValue(float value);
                float getyValue();
                void setzValue(float value);
                float getzValue();
                void setsensorUnits(String value);
                String getsensorUnits();
                void setminXValue(float value);
                float getminXValue();
                void setmaxXValue(float value);
                float getmaxXValue();
                void setminYValue(float value);
                float getminYValue();
                void setmaxYValue(float value);
                float getmaxYValue();
                void setminZValue(float value);
                float getminZValue();
                void setmaxZValue(float value);
                float getmaxZValue();
                void setminRangeValue(float value);
                float getminRangeValue();
                void setmaxRangeValue(float value);
                float getmaxRangeValue();
                void setapplicationType(String value);
                String getapplicationType();

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
                float minXValue;
                bool minXValueUpdated;
                float maxXValue;
                bool maxXValueUpdated;
                float minYValue;
                bool minYValueUpdated;
                float maxYValue;
                bool maxYValueUpdated;
                float minZValue;
                bool minZValueUpdated;
                float maxZValue;
                bool maxZValueUpdated;
                float minRangeValue;
                bool minRangeValueUpdated;
                float maxRangeValue;
                bool maxRangeValueUpdated;
                String applicationType;
                bool applicationTypeUpdated;
        };

        #endif // __COM_IPSO_SMARTOBJECTS_GYROMETER_H__
