#pragma once

#include "device.hpp"

class ExtendedDevice : public Device
{
    public:
        ExtendedDevice() = default;
        ~ExtendedDevice(){};
        void initialize() override;
        void run() override; 
};
