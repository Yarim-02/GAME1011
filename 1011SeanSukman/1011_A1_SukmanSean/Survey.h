#pragma once
#include "GamingStudent.h"
#include "NonGamingStudent.h"

class Survey
{
public:
	GamingStudent* m_gamersPtr;
	NonGamingStudent* m_nonGamersPtr;
	int numOfGamers = 0,  numOfNonGamers = 0, averageGamerAge, averageNonGamerAge;
	float gamerHours, averageDevice = 0.0f, streamHours, averagePlatform = 0.0f;

	void Process(GamingStudent gamers[], NonGamingStudent nonGamers[]);
};
