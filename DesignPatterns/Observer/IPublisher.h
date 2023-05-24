//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : IPublisher.h
//  @ Date : 24.05.2023
//  @ Author : 
//
//




#if !defined(_IPUBLISHER_H)
#define _IPUBLISHER_H

#include "ISubscriber.h"


class IPublisher {
public:
	virtual ~IPublisher() = default;
	virtual void Attach(ISubscriber* subscriber) = 0;
	virtual void Detach(ISubscriber* subscriber) = 0;
	virtual void Notify() = 0;
};

#endif  //_IPUBLISHER_H
