#pragma once
#include "Student.h"

enum StreamingPlatform {TWITCH, YOUTUBE, MIXR};

class NonGamingStudent : public Student
{
private:
	StreamingPlatform m_platform;

public:
	StreamingPlatform getPlatform();
	void setPlatform(int platform);
};
