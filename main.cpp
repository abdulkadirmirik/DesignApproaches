#include <iostream>
#include <memory>
#include "extendeddevice.hpp"
#include "basicdevice.hpp"


enum class Device_Types
{
    BASIC_DEVICE = 1,
    EXTENDED_DEVICE = 2
};

Device_Types type =  Device_Types::EXTENDED_DEVICE;

std::unique_ptr<Device>
deviceFactory(const Device_Types& deviceType)
{
    if(deviceType == Device_Types::BASIC_DEVICE)
        return std::make_unique<BasicDevice>();
    else if(deviceType == Device_Types::EXTENDED_DEVICE)
        return std::make_unique<ExtendedDevice>();
    else
        return nullptr;    
}

int main()
{
    std::cout<< "Test" << std::endl;
    deviceFactory(type)->start();
    system("pause");
    return 0;
}