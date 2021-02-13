#include <iostream>
#include <stdlib.h>
#include <ctime>
#include "Survey.h"
using namespace std;


int main()
{
	srand(time(NULL));

	Survey survey;
	int numOfPeople = 0;
	string input;

	cout << "Welcome!\nHow many students would you like to survey: (max 500)";
	cin >> numOfPeople;
	cout << "\nsuverying..." << endl;

	survey.numOfGamers = rand() % numOfPeople;
	survey.numOfNonGamers = numOfPeople - survey.numOfGamers;


	survey.m_gamersPtr = new GamingStudent[survey.numOfGamers];
	survey.m_nonGamersPtr = new NonGamingStudent[survey.numOfNonGamers];

	for (int i = 0; i < survey.numOfGamers; i++)
	{
		survey.m_gamersPtr[i].setDevice(rand() % 3);
		survey.m_gamersPtr[i].setAge(rand() % 53 + 7);
		survey.m_gamersPtr[i].setHours(rand() % 12 + 1);
	}
	for (int i = 0; i < survey.numOfNonGamers; i++)
	{
		survey.m_nonGamersPtr[i].setPlatform(rand() % 3);
		survey.m_gamersPtr[i].setAge(rand() % 53 + 7);
		survey.m_nonGamersPtr[i].setHours(rand() % 12 + 1);
	}

	cout << "\n\nSurvey complete! Would you like to prcess your survey (y/n)";
	cin >> input;

	if(input == "y" || input == "Y")
	{
		cout << "\n\n Now processing survey...";
		
		survey.Process(survey.m_gamersPtr, survey.m_nonGamersPtr);

		cout << "\n\n\nSurvey process complete!";
	}

	cout << "\n\nHave a good day!";


	return 0;
}