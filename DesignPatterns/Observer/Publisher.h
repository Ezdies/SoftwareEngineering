//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : Publisher.h
//  @ Date : 24.05.2023
//  @ Author : 
//
//

#include <set>

#if !defined(_PUBLISHER_H)
#define _PUBLISHER_H

#include "IPublisher.h"

class Publisher : public IPublisher {
public:
	virtual ~Publisher();
	void Attach(ISubscriber* subscriber) override;
	void Detach(ISubscriber* subscriber) override;
	void Notify() override;
	void CreateMessage(string message);
	void HowManyObservers();
private:
	string m_message;
	set<ISubscriber*> m_subscribers;
};

#endif  //_PUBLISHER_H
