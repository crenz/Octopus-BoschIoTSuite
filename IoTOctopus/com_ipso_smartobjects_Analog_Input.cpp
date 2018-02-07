// com_ipso_smartobjects_Analog_Input

#include "com_ipso_smartobjects_Analog_Input.h"

com_ipso_smartobjects_Analog_Input::com_ipso_smartobjects_Analog_Input()
{
            analog_input_current_valueUpdated = false;
            min_measured_valueUpdated = false;
            max_measured_valueUpdated = false;
            min_range_valueUpdated = false;
            max_range_valueUpdated = false;
            application_typeUpdated = false;
            sensor_typeUpdated = false;
}

void com_ipso_smartobjects_Analog_Input::setanalog_input_current_value(float value)
{
	analog_input_current_value = value;
	analog_input_current_valueUpdated = true;
}

float com_ipso_smartobjects_Analog_Input::getanalog_input_current_value()
{
	return analog_input_current_value;
}
void com_ipso_smartobjects_Analog_Input::setmin_measured_value(float value)
{
	min_measured_value = value;
	min_measured_valueUpdated = true;
}

float com_ipso_smartobjects_Analog_Input::getmin_measured_value()
{
	return min_measured_value;
}
void com_ipso_smartobjects_Analog_Input::setmax_measured_value(float value)
{
	max_measured_value = value;
	max_measured_valueUpdated = true;
}

float com_ipso_smartobjects_Analog_Input::getmax_measured_value()
{
	return max_measured_value;
}
void com_ipso_smartobjects_Analog_Input::setmin_range_value(float value)
{
	min_range_value = value;
	min_range_valueUpdated = true;
}

float com_ipso_smartobjects_Analog_Input::getmin_range_value()
{
	return min_range_value;
}
void com_ipso_smartobjects_Analog_Input::setmax_range_value(float value)
{
	max_range_value = value;
	max_range_valueUpdated = true;
}

float com_ipso_smartobjects_Analog_Input::getmax_range_value()
{
	return max_range_value;
}
void com_ipso_smartobjects_Analog_Input::setapplication_type(String value)
{
	application_type = value;
	application_typeUpdated = true;
}

String com_ipso_smartobjects_Analog_Input::getapplication_type()
{
	return application_type;
}
void com_ipso_smartobjects_Analog_Input::setsensor_type(String value)
{
	sensor_type = value;
	sensor_typeUpdated = true;
}

String com_ipso_smartobjects_Analog_Input::getsensor_type()
{
	return sensor_type;
}

String com_ipso_smartobjects_Analog_Input::serialize()
{
    String result = "\"properties\" : { \"status\" : { ";
                if (analog_input_current_valueUpdated)
                {
                    result += "\"analog_input_current_value\" : " + String(analog_input_current_value) + ",";
                    analog_input_current_valueUpdated = false;
                }
                if (min_measured_valueUpdated)
                {
                    result += "\"min_measured_value\" : " + String(min_measured_value) + ",";
                    min_measured_valueUpdated = false;
                }
                if (max_measured_valueUpdated)
                {
                    result += "\"max_measured_value\" : " + String(max_measured_value) + ",";
                    max_measured_valueUpdated = false;
                }
                if (min_range_valueUpdated)
                {
                    result += "\"min_range_value\" : " + String(min_range_value) + ",";
                    min_range_valueUpdated = false;
                }
                if (max_range_valueUpdated)
                {
                    result += "\"max_range_value\" : " + String(max_range_value) + ",";
                    max_range_valueUpdated = false;
                }
                if (application_typeUpdated)
                {
                    result += "\"application_type\" : \"" + String(application_type) + "\", ";
                    application_typeUpdated = false;
                }
                if (sensor_typeUpdated)
                {
                    result += "\"sensor_type\" : \"" + String(sensor_type) + "\" ";
                    sensor_typeUpdated = false;
                }
	
    		result += "} }";

            return result;
        }
