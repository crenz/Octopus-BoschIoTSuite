// com_ipso_smartobjects_Analog_Input

#ifndef __COM_IPSO_SMARTOBJECTS_ANALOG_INPUT_H__
#define __COM_IPSO_SMARTOBJECTS_ANALOG_INPUT_H__

#include <WString.h>

class com_ipso_smartobjects_Analog_Input
{
            public:
                com_ipso_smartobjects_Analog_Input();
		
                void setanalog_input_current_value(float value);
                float getanalog_input_current_value();
                void setmin_measured_value(float value);
                float getmin_measured_value();
                void setmax_measured_value(float value);
                float getmax_measured_value();
                void setmin_range_value(float value);
                float getmin_range_value();
                void setmax_range_value(float value);
                float getmax_range_value();
                void setapplication_type(String value);
                String getapplication_type();
                void setsensor_type(String value);
                String getsensor_type();

                String serialize();
            private:
                float analog_input_current_value;
                bool analog_input_current_valueUpdated;
                float min_measured_value;
                bool min_measured_valueUpdated;
                float max_measured_value;
                bool max_measured_valueUpdated;
                float min_range_value;
                bool min_range_valueUpdated;
                float max_range_value;
                bool max_range_valueUpdated;
                String application_type;
                bool application_typeUpdated;
                String sensor_type;
                bool sensor_typeUpdated;
        };

        #endif // __COM_IPSO_SMARTOBJECTS_ANALOG_INPUT_H__
