//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : THeart.h
//  @ Date : 23.03.2023
//  @ Author : 
//
//


#if !defined(_THEART_H)
#define _THEART_H


class THeart {
public:
	THeart(int heartRate, float size);
	~THeart();
	int getHeartRate();
	float getSize();
	void setHeartRate(int heartRate);
	void setSize(float size);
private:
	int m_heartRate;
	float m_size;
};

#endif  //_THEART_H