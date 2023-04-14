#pragma once
#include <iostream>

class Device
{
    
public: 
    virtual ~Device(){};
    void start();

protected:
    virtual void initialize() = 0;
    virtual void run() = 0;

private:
    void runCommonDeviceFeatures();
    
    
};