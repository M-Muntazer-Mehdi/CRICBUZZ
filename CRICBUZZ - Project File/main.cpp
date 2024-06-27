#include <SFML/Graphics.hpp>
#include<iostream>
#include<iomanip>
#include<fstream>
#include "cricbuzz.h"
using namespace std;
using namespace sf;
int main()
{
	Player p;
	Team T;
	Match M;
	News N;
	char choice9;
	do
	{
		int choice1;
		cout << "1. player" << endl;
		cout << "2. team" << endl;
		cout << "3. Match" << endl;
		cout << "4. News" << endl;
		cout << "   your choice : ";
		cin >> choice1;
		switch (choice1)
		{
		case 1:
			cout << endl;
			int choice2;
			cout << "\t\t 1. Players information." << endl;
			cout << "\t\t 2. Update Players information." << endl;
			cout << "\t\t 3. Search Players information." << endl;
			cout << "\t\t 4. Add Player information." << endl;
			cout << "\t\t 5. Remove Players information." << endl;
			cout << "\t\t    Your choice : ";
			cin >> choice2;
			p.getsize();
			p.getplayerinformation();
			cout << endl;
			switch (choice2)
			{
			case 1:
				p.printplayerinformation();
				break;
			case 2:
				p.updateplayer();
				break;
			case 3:
				p.searchplayer();
				break;
			case 4:
				p.addplayer();
				break;
			case 5:
				p.removeplayer();
				break;
			default:
				cout << "\t\t ERROR / Invalid input..." << endl;
				break;
			}
			cout << endl;
			break;
		case 2:
			char choice10;
			do
			{
				string firstname, lastname, password;
				cout << "Enter First Name : ";
				cin >> firstname;
				cout << "Enter Last Name : ";
				cin >> lastname;
				cout << "Enter Password : ";
				cin >> password;
				if (T.checkstatus(firstname, lastname, password) == 1)
				{
					int choice3;
					cout << "\t\t 1. Display team information." << endl;
					cout << "\t\t 2. Add player information." << endl;
					cout << "\t\t 3. Remove player information." << endl;
					cout << "\t\t 4. Update player information." << endl;
					cout << "\t\t 5. Search player information." << endl;
					cout << "\t\t 6. Update team caption." << endl;
					cout << "\t\t 7. Update team coach." << endl;
					cout << "\t\t 8. Display Matches." << endl;
					cout << "\t\t    Your choice : ";
					cin >> choice3;
					cout << endl;
					T.getteaminformation();
					switch (choice3)
					{
					case 1:
						T.displayteam();
						break;
					case 2:
						T.addplayers();
						break;
					case 3:
						T.removeplayers();
						break;
					case 4:
						T.updateplayers();
						break;
					case 5:
						T.searchplayers();
						break;
					case 6:
						T.updatecaption();
						break;
					case 7:
						T.updatecoach();
						break;
					case 8:
						T.displaymatches();
						break;
					default:
						cout << "\t\t ERROR / Invalid input..." << endl;
						break;
					}
					cout << endl;
					choice10 = 'n';
				}
				else
				{
					cout << endl;
					cout << "If you want to try again." << endl;
					cout << "Press 'y' / press 'n'." << endl;
					cout << "    Your choice : ";
					cin >> choice10;
					if (choice10 == 'y')
					{
						system("cls");
					}
				}
			} while (choice10 != 'n');
			break;
		case 3:
			int choice4;
			cout << "\t\t 1. Conduct match." << endl;
			cout << "\t\t 2. Schedule match." << endl;
			cout << "\t\t 3. Update World records." << endl;
			cout << "\t\t 4. Update Players records." << endl;
			cout << "\t\t 5. Upcoming matches." << endl;
			cout << "\t\t 6. Recent matches." << endl;
			cout << "\t\t    Your choice : ";
			cin >> choice4;
			cout << endl;
			switch (choice4)
			{
			case 1:
				M.conductmatch();
				break;
			case 2:
				M.schedulematch();
				break;
			case 3:
				M.updateworldrecords();
				break;
			case 4:
				M.updateplayerrecords();
				break;
			case 5:
				M.upcomingmatches();
				break;
			case 6:
				M.recentmatches();
				break;
			default:
				cout << "\t\t ERROR / Invalid input..." << endl;
				break;
			}
			cout << endl;
			break;
		case 4:
			int choice5;
			cout << "\t\t 1. Upcoming matches information." << endl;
			cout << "\t\t 2. Recent matches information." << endl;
			cout << "\t\t 3. ICC Ranking of teams." << endl;
			cout << "\t\t 4. ICC Ranking of players." << endl;
			cout << "\t\t    Your choice : ";
			cin >> choice5;
			cout << endl;
			switch (choice5)
			{
			case 1:
				N.upcomingmatches1();
				break;
			case 2:
				N.recentmatches1();
				break;
			case 3:
				N.ICCrankingofteam();
				break;
			case 4:
				N.ICCrankingofplayer();
				break;
			default:
				cout << "\t\t ERROR / Invalid input..." << endl;
				break;
			}
			cout << endl;
			break;
		default:
			cout << "\t ERROR / invalid input." << endl;
			break;
		}
		cout << endl;
		cout << "\t\t CricBuzz Again." << endl;
		cout << "\t\t press'y' || press 'n'." << endl;
		cout << "\t\t   Your choice : ";
		cin >> choice9;
		if (choice9 == 'y')
		{
			system("cls");
		}
	}while (choice9 != 'n');
	return 0;
}