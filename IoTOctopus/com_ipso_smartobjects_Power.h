// com_ipso_smartobjects_Power

#ifndef __COM_IPSO_SMARTOBJECTS_POWER_H__
#define __COM_IPSO_SMARTOBJECTS_POWER_H__

#include <WString.h>

class com_ipso_smartobjects_Power
{
            public:
                com_ipso_smartobjects_Power();
		
                void setsensor_value(float value);
                float getsensor_value();
                void setsensor_units(String value);
                String getsensor_units();
                void setmin_measured_value(float value);
                float getmin_measured_value();
                void setmax_measured_value(float value);
                float getmax_measured_value();
                void setmin_range_value(float value);
                float getmin_range_value();
                void setmax_range_value(float value);
                float getmax_range_value();
                void setcurrent_calibration(String value);
                String getcurrent_calibration();
                void setapplication_type(String value);
                String getapplication_type();

                String serialize();
            private:
                float sensor_value;
                bool sensor_valueUpdated;
                String sensor_units;
                bool sensor_unitsUpdated;
                float min_measured_value;
                bool min_measured_valueUpdated;
                float max_measured_value;
                bool max_measured_valueUpdated;
                float min_range_value;
                bool min_range_valueUpdated;
                float max_range_value;
                bool max_range_valueUpdated;
                String current_calibration;
                bool current_calibrationUpdated;
                String application_type;
                bool application_typeUpdated;
        };

        #endif // __COM_IPSO_SMARTOBJECTS_POWER_H__
