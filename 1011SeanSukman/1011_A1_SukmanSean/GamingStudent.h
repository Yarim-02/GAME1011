#pragma once
#include "Student.h"
using namespace std;

enum GamingDevice {NINTENDO_SWITCH, PS4, XBOX_ONE};

class GamingStudent : public Student
{
private:
	GamingDevice m_device;

public:
	GamingDevice getDevice();
	void setDevice(int device);
};