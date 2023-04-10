#pragma once

#include "device.hpp"

class BasicDevice : public Device
{
    public:
        BasicDevice() = default;
        ~BasicDevice();
        void initialize() override;
        void run() override; 
};
