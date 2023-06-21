//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : SSDDeviceFactory.h
//  @ Date : 21.06.2023
//  @ Author : 
//
//


#if !defined(_SSDDEVICEFACTORY_H)
#define _SSDDEVICEFACTORY_H

#include "IDeviceFactory.h"
#include "IDrive.h"
#include "IDevice.h"
#include "SSDDrive.h"
#include "SSDDevice.h"

class SSDDeviceFactory : public IDeviceFactory {
public:
	IDrive* drive();
	IDevice* device();
};

#endif  //_SSDDEVICEFACTORY_H
