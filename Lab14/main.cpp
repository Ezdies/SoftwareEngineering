#include "SSDDeviceFactory.h"
#include "HDDDeviceFactory.h"
#include "IDrive.h"
#include "IDevice.h"

int main(){
    SSDDeviceFactory ssdDeviceFactory;
    HDDDeviceFactory hddDeviceFactory;

    IDevice* ssdDevice = ssdDeviceFactory.device();
    IDevice* hddDevice = hddDeviceFactory.device();

    IDrive* ssdDrive = ssdDeviceFactory.drive();
    IDrive* hddDrive = hddDeviceFactory.drive();

    ssdDevice->displayDevice();
    hddDevice->displayDevice();

    ssdDrive->displayDevice();
    hddDrive->displayDevice();

    return 0;
}