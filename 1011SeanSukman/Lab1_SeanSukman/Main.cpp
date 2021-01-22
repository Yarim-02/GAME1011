#include <iostream>
#include <string>

using namespace std;

class Achievment
{
private:
	int score;
	string name, description;

public:
	string GetName()
	{
		return name;
	}
	string GetDescription()
	{
		return description;
	}
	int GetScore()
	{
		return score;
	}
	void SetName(string n)
	{
		name = n;
	}
	void SetDescription(string d)
	{
		description = d;
	}
	void SetScore(int s)
	{
		score = s;
	}
};

class Game
{
private:
	bool hasAcheivments = false;
	string gameName, developer, publisher;

public:
	Achievment* achievmentptr;
	int numofAchievments;
	void SetHasAcheivments(bool b)
	{
		hasAcheivments = b;
	}
	void SetGameName(string n)
	{
		gameName = n;
	}
	void SetDeveloper(string d)
	{
		developer = d;
	}
	void SetPublisher(string p)
	{
		publisher = p;
	}
	bool GetHasAcheivments()
	{
		return hasAcheivments;
	}
	string GetGameName()
	{
		return gameName;
	}
	string GetDeveloper()
	{
		return developer;
	}
	string GetPublisher()
	{
		return publisher;
	}
};

class Console
{
private:
	string name, manufacturer;
	
public:
	Game games[5];
	
	string GetName()
	{
		return name;
	}
	string GetManufacturer()
	{
		return manufacturer;
	}
	void SetName(string n)
	{
		name = n;
	}
	void SetManufacturer(string m)
	{
		manufacturer = m;
	}
	void SetGames(int i, string n, string d, string p)
	{
		games[i].SetGameName(n);
		games[i].SetDeveloper(d);
		games[i].SetPublisher(p);
	}
	void DisplayGame(int i)
	{
		cout << games[i].GetGameName() << games[i].GetDeveloper() << games[i].GetPublisher() << endl;
	}
};

int main()
{
	bool looping = true;
	short consoleSelect, gameSelect, achievmentSelect, tempNum;
	string tempText;
	Console console[3];

	console[0].SetName("Switch");
	console[0].SetManufacturer("Nintendo");
	console[0].SetGames(0, "Hollow Knight", "\t\tTeam Cherry", "\t\t\tTeam Cherry");
	console[0].SetGames(1, "Celeste", "\t\t\tMatt Thompson", "\t\t\tMatt Makes Games");
	console[0].SetGames(2, "Xenoblade Chronicles:DE", "  Monolith Soft", "\t\t\tNintendo");
	console[0].SetGames(3, "Mario Odessy", "\t\tNintendo", "\t\t\tNintendo");
	console[0].SetGames(4, "The Legend of Zelda:BOTW", "  Nintendo", "\t\t\tNintendo");
	console[1].SetName("PlayStation 5");
	console[1].SetManufacturer("Sony");
	console[1].SetGames(0, "God of War", "\t\tSanta Monica Studio", "\t\tSony Interactive Entertainment");
	console[1].SetGames(1, "No Mans Sky", "\t\tHello Games", "\t\t\tHello Games");
	console[1].SetGames(2, "Resident Evil 7", "\tCapcom", "\t\t\t\tCapcom");
	console[1].SetGames(3, "Watch Dogs 2", "\t\tUbisoft", "\t\t\t\tUbisoft");
	console[1].SetGames(4, "Call of Duty: Modern Warfare", " Infinity Ward", "\t\tActivision");
	console[2].SetName("Xbox 1");
	console[2].SetManufacturer("Microsoft");
	console[2].SetGames(0, "Minecraft", "\t\tMojang", "\t\t\t\tMircosoft");
	console[2].SetGames(1, "Halo Inifinite", "\t343 Industries", "\t\t\tXbox Game Studios");
	console[2].SetGames(2, "Assasin's Creed: Odessy", "  Ubisoft", "\t\t\tUbisoft");
	console[2].SetGames(3, "Forza 5", "\t\tTurn 10 Studios", "\t\t\tMicrosoft Studios");
	console[2].SetGames(4, "Cyberpunk 2077 (lol)", "\tCD Projekt", "\t\t\tCD Projekt");
	
	while (looping == true)
	{
		cout << "Please enter the number of the console you wish to select or enter -1 to exit the program\n\n  Name:\t\t\tManufacturer:\n" << endl;
		for (int i = 0; i < 3; i++)
		{
			cout << i << "." << console[i].GetName() << "\t\t" << console[i].GetManufacturer() << endl;
		} 
		cin >> consoleSelect;

		if (consoleSelect >= 0 && consoleSelect <= 2)
		{			
			while (looping == true)
			{
				cout << "\n\n\nPlease enter the number of the game you wish to select or enter -1 to return to console select \n\n  Name:\t\t\tDeveloper:\t\t\tPublisher:\n" << endl;
				for (int i = 0; i < 5; i++)
				{
					cout << i << ".";
					console[consoleSelect].DisplayGame(i);
				}
				cin >> gameSelect;
				if (gameSelect >= 0 && gameSelect <= 4)
				{
					if (console[consoleSelect].games[gameSelect].GetHasAcheivments() == false)
					{
						cout << "This game currentely has no achievments listed, please select how many achievments you would like to add:" << endl;
						cin >> achievmentSelect;
						console[consoleSelect].games[gameSelect].achievmentptr = new Achievment[achievmentSelect];
						console[consoleSelect].games[gameSelect].numofAchievments = achievmentSelect;
						for (int i = 0; i < achievmentSelect; i++)
						{
							cout << "\nPlease give your achievment a name:";
							cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
							getline(cin, tempText);
							(console[consoleSelect].games[gameSelect].achievmentptr + i)->SetName(tempText);
							cout << "\nPlease give your achievment a description:";
							//cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
							getline(cin, tempText);
							(console[consoleSelect].games[gameSelect].achievmentptr + i)->SetDescription(tempText);
							cout << "\nEnter a score for the achievment:";
							cin >> tempNum;
							(console[consoleSelect].games[gameSelect].achievmentptr + i)->SetScore(tempNum);
							cout << "Achievment " << (i + 1) << "/" << achievmentSelect << endl;
						}		
						console[consoleSelect].games[gameSelect].SetHasAcheivments(true);
					}
					else
					{
						while (looping == true)
						{
							for (int i = 0; i < console[consoleSelect].games[gameSelect].numofAchievments; i++)
							{
								cout << "Name: " << (console[consoleSelect].games[gameSelect].achievmentptr + i)->GetName() << "\tDescription: " << (console[consoleSelect].games[gameSelect].achievmentptr + i)->GetDescription()
									<< "\tScore: " << (console[consoleSelect].games[gameSelect].achievmentptr + i)->GetScore() << endl << endl;
							}
							cout << "Enter -1 to return to game select";
							cin >> achievmentSelect;
							if (achievmentSelect == -1)
								break;
						}
					}
					
				}
				else if (gameSelect == -1)
					break;
				else
				{
					cout << "Invalid entry, please try again" << endl;
				}
			}
		}
		else if (consoleSelect == -1)
			break;
		else
		{
			cout << "Invalid entry, please try again" << endl;
		}
	}
	/*Game game;
	game.achievmentptr = new Achievment[2];
	game.achievmentptr[0].SetName("Embrace the Void");
	cout << game.achievmentptr[0].GetName() << endl;*/
	return 0;
}
