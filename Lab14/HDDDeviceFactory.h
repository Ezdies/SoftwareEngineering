//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : HDDDeviceFactory.h
//  @ Date : 21.06.2023
//  @ Author : 
//
//


#if !defined(_HDDDEVICEFACTORY_H)
#define _HDDDEVICEFACTORY_H

#include "IDeviceFactory.h"
#include "IDrive.h"
#include "IDevice.h"
#include "HDDDrive.h"
#include "HDDDevice.h"


class HDDDeviceFactory : public IDeviceFactory {
public:
	IDrive* drive();
	IDevice* device();
};

#endif  //_HDDDEVICEFACTORY_H