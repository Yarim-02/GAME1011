#include "Survey.h"
#include <cmath>

void Survey::Process(GamingStudent gamers[], NonGamingStudent nonGamers[])
{
	for (int i = 0; i < numOfGamers; i++)
	{
		gamerHours += gamers[i].getHours();
		averageDevice += static_cast<int>( gamers[i].getDevice());
		averageGamerAge += gamers[i].getAge();
	}

	averageDevice = round(averageDevice / numOfGamers);
	gamerHours = round(gamerHours / numOfGamers);
	averageGamerAge = round(averageGamerAge / numOfGamers);

	for (int i = 0; i < numOfNonGamers; i++)
	{
		streamHours += nonGamers[i].getHours();
		averagePlatform += static_cast<int>(nonGamers[i].getPlatform());
		averageNonGamerAge += nonGamers[i].getAge();
	}
	streamHours = round(streamHours / numOfNonGamers);
	averagePlatform = round(averagePlatform / numOfNonGamers);
	averageNonGamerAge = round(averageNonGamerAge / numOfNonGamers);
}
