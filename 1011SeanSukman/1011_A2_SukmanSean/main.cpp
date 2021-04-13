#include <iostream>
#include <string>
#include <fstream>
#include "Enemy.h"


using namespace std;

int main()
{
	ifstream inputFile;
	Enemy faceless("faceless.txt"), dragon("dragon.txt"), gorgon("gorgon.txt"), sphinx("sphinx.txt");
	string question, answer, input;
	int health = 3;
	bool looping = true;

	cout << "Welcome to the ancient temple. It is said that all who make it to the center will find true happines. \nNavigating the temple is simple, as long as nothing is blocking your way, that is. \nEnter"
		"'move forward' to progress to the next room\n\nRemember, only use lowercase characters\nEnter'start game' to start:\t";

	getline(cin, input);

	if (input == "start game")
	{
		cout << "\n\n\nYou enter the temple...\n\nUpon entering the first room you see a faceless person sitting in the corner. Without \na mouth to speak, you hear a voice inside your head ask: ";
		inputFile.open(faceless.GetFilePath());
		getline(inputFile, question);
		cout << question << endl;
		answer = "darkness";
		inputFile.close();
		
		while (looping)
		{
			getline(cin, input);
			if (input == answer)
				break;
			else
			{
				health--;
				cout << "\nwrong answer, try again (health: " << health << ")" << endl;
			}
			if (health == 0)
			{
				cout << "\n\nDespite you best efforts, you have perished in the temple. \nNow you are just like all of those other damnable souls: trapped in the temple forever";
				exit(1);
			}
		}

		cout << "\n\nAfter uttering those words, the faceless person turns to you and it looks as if its... smiling? Until it crumbles to dust, revealing a door behind it" << endl;
		answer = "move forward";
		while (looping)
		{
			getline(cin, input);
			if (input == answer)
				break;
			else
				cout << "Invalid input, please try again" << endl;
		}

		cout << "\n\n\nYou enter the next room...\n\nUpon entering the next room you find a massive fire-breathing dragon. \nSurprisingly, it speaks perfect english. It asks: ";
		inputFile.open(dragon.GetFilePath());
		getline(inputFile, question);
		cout << question << endl;
		answer = "corn";
		inputFile.close();

		while (looping)
		{
			getline(cin, input);
			if (input == answer)
				break;
			else
			{
				health--;
				cout << "\nwrong answer, try again (health: " << health << ")" << endl;
			}
			if (health == 0)
			{
				cout << "\n\nDespite you best efforts, you have perished in the temple. \nNow you are just like all of those other damnable souls: trapped in the temple forever";
				exit(1);
			}
		}

		cout << "\n\nAfter uttering those words, the dragon lays down and you can see a door behind it. It then tells you that you may procede on your journey" << endl;
		answer = "move forward";
		while (looping)
		{
			getline(cin, input);
			if (input == answer)
				break;
			else
				cout << "Invalid input, please try again" << endl;
		}

		cout << "\n\n\nYou enter the next room...\n\nUpon entering the next room you find a gorgon. \nYou try to avoid making eye contact as it hisses at you: ";
		inputFile.open(gorgon.GetFilePath());
		getline(inputFile, question);
		cout << question << endl;
		answer = "short";
		inputFile.close();

		while (looping)
		{
			getline(cin, input);
			if (input == answer)
				break;
			else
			{
				health--;
				cout << "\nwrong answer, try again (health: " << health << ")" << endl;
			}
			if (health == 0)
			{
				cout << "\n\nDespite you best efforts, you have perished in the temple. \nNow you are just like all of those other damnable souls: trapped in the temple forever";
				exit(1);
			}
		}

		cout << "\n\nAfter uttering those words, the gorgon turns to stone and crumbles away. Just as (you guessed it) another door appears" << endl;
		answer = "move forward";
		while (looping)
		{
			getline(cin, input);
			if (input == answer)
				break;
			else
				cout << "Invalid input, please try again" << endl;
		}

		cout << "\n\n\nYou enter the next room...\n\nUpon entering the next room you find a massive sphinx. \nSomehow, you already know that it will ask you: ";
		inputFile.open(sphinx.GetFilePath());
		getline(inputFile, question);
		cout << question << endl;
		answer = "man";
		inputFile.close();

		while (looping)
		{
			getline(cin, input);
			if (input == answer)
				break;
			else
			{
				health--;
				cout << "\nwrong answer, try again (health: " << health << ")" << endl;
			}
			if (health == 0)
			{
				cout << "\n\nDespite you best efforts, you have perished in the temple. \nNow you are just like all of those other damnable souls: trapped in the temple forever";
				exit(1);
			}
		}

		cout << "\n\nAfter uttering those words, the sphinx turns to sand and vanishes." << endl;
		cout << "Suddenly you feel a certian energy fill your body, and you feel alive once again. you feel as though you could finish an entire assignment in one day (even though you kow full well that you cant)\n You've finally found it. Your happiness" << endl;
		
	}

	


	return 0;
}