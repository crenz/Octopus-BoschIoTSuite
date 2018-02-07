// com_ipso_smartobjects_Power

#include "com_ipso_smartobjects_Power.h"

com_ipso_smartobjects_Power::com_ipso_smartobjects_Power()
{
            sensor_valueUpdated = false;
            sensor_unitsUpdated = false;
            min_measured_valueUpdated = false;
            max_measured_valueUpdated = false;
            min_range_valueUpdated = false;
            max_range_valueUpdated = false;
            current_calibrationUpdated = false;
            application_typeUpdated = false;
}

void com_ipso_smartobjects_Power::setsensor_value(float value)
{
	sensor_value = value;
	sensor_valueUpdated = true;
}

float com_ipso_smartobjects_Power::getsensor_value()
{
	return sensor_value;
}
void com_ipso_smartobjects_Power::setsensor_units(String value)
{
	sensor_units = value;
	sensor_unitsUpdated = true;
}

String com_ipso_smartobjects_Power::getsensor_units()
{
	return sensor_units;
}
void com_ipso_smartobjects_Power::setmin_measured_value(float value)
{
	min_measured_value = value;
	min_measured_valueUpdated = true;
}

float com_ipso_smartobjects_Power::getmin_measured_value()
{
	return min_measured_value;
}
void com_ipso_smartobjects_Power::setmax_measured_value(float value)
{
	max_measured_value = value;
	max_measured_valueUpdated = true;
}

float com_ipso_smartobjects_Power::getmax_measured_value()
{
	return max_measured_value;
}
void com_ipso_smartobjects_Power::setmin_range_value(float value)
{
	min_range_value = value;
	min_range_valueUpdated = true;
}

float com_ipso_smartobjects_Power::getmin_range_value()
{
	return min_range_value;
}
void com_ipso_smartobjects_Power::setmax_range_value(float value)
{
	max_range_value = value;
	max_range_valueUpdated = true;
}

float com_ipso_smartobjects_Power::getmax_range_value()
{
	return max_range_value;
}
void com_ipso_smartobjects_Power::setcurrent_calibration(String value)
{
	current_calibration = value;
	current_calibrationUpdated = true;
}

String com_ipso_smartobjects_Power::getcurrent_calibration()
{
	return current_calibration;
}
void com_ipso_smartobjects_Power::setapplication_type(String value)
{
	application_type = value;
	application_typeUpdated = true;
}

String com_ipso_smartobjects_Power::getapplication_type()
{
	return application_type;
}

String com_ipso_smartobjects_Power::serialize()
{
    String result = "\"properties\" : { \"status\" : { ";
                if (sensor_valueUpdated)
                {
                    result += "\"sensor_value\" : " + String(sensor_value) + ",";
                    sensor_valueUpdated = false;
                }
                if (sensor_unitsUpdated)
                {
                    result += "\"sensor_units\" : \"" + String(sensor_units) + "\", ";
                    sensor_unitsUpdated = false;
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
                if (current_calibrationUpdated)
                {
                    result += "\"current_calibration\" : \"" + String(current_calibration) + "\", ";
                    current_calibrationUpdated = false;
                }
                if (application_typeUpdated)
                {
                    result += "\"application_type\" : \"" + String(application_type) + "\" ";
                    application_typeUpdated = false;
                }
	
    		result += "} }";

            return result;
        }
