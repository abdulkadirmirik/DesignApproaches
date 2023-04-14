#include "device.hpp"


void 
Device::start()
{
    //We might add a conditon that checks device state in here
    //if(State == RUNNING)

    //Step1
    this->initialize();
    //Step2
    this->runCommonDeviceFeatures();
    //Step3
    this->run();
}

void 
Device::runCommonDeviceFeatures()
{
    //init Common Device connections
    //start IMU device communications due to it is common for each device version we have
    //start Temp measurement algorithm and sensor communication due to it is common for each device version we have
    std::cout <<"Common device communications (IMU and Temp Sensor) has been initialized and started"<< std::endl;
}