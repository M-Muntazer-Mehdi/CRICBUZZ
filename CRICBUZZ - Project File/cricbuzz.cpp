#include "cricbuzz.h"
#include<Windows.h>
void Player::getsize()
{
	cout << "Enter size of list : ";
	cin >> size;
}
void Player::getplayerinformation()
{
	ifstream infile;
	ofstream outfile;
	infile.open("infile.txt", ios::out);
	outfile.open("outfile.txt");
	for (int j = 0; j < size; j++)
	{
		infile >> playername[j] >> lastname[j] >> shirtno[j];
		for (int i = 0; i < 4; i++)
		{
			infile >> matchtype[i] >> matches[i][j] >> runs[i][j] >> battingavg[i][j] >> highscore[i][j] >> strikerate[i][j]
				>> ballsbowled[i][j] >> wickets[i][j] >> bollingavg[i][j] >> fivewickets[i][j] >> econ[i][j] >> catches[i][j]
				>> stumps[i][j] >> runout[i][j];
		}
	}
}
void Player::printplayerinformation()
{
	char choice1;
	do
	{
		cout << endl;
		int choice;
		cout << "1. press 1 if you want to check all the player rankings who was play PSC." << endl;
		cout << "2. press 2 if you want to check player information according to there ranking." << endl;
		cout << "   Your choice : ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			for (int j = 0; j < size; j++)
			{
				cout << endl;
				cout << "Player name : ";
				cout << playername[j] << " " << lastname[j] << endl;
				cout << "Shirt NO : " << shirtno[j] << endl;
				cout << endl;
				cout << "Match: " << "\t" << "M:    " << "R:    " << "BA.Avg:    " << "HS:    "
					<< "SR:    " << " B.B:    " << " W:    " << "BO.Avg:    " << "5'W:    " << "Econ:    "
					<< "C:    " << "S:    " << "R.O:    " << endl << endl;
				for (int i = 0; i < 4; i++)
				{
					cout << matchtype[i] << "\t" << left << setw(5) << setfill(' ') << matches[i][j] << right << runs[i][j] << "    " << left
						<< setw(10) << setfill(' ') << battingavg[i][j] << right << highscore[i][j] << setw(8) << setfill(' ') << strikerate[i][j]
						<< setw(8) << setfill(' ') << ballsbowled[i][j] << setw(7) << setfill(' ') << wickets[i][j] << setw(10) << setfill(' ')
						<< bollingavg[i][j] << setw(7) << setfill(' ') << fivewickets[i][j] << setw(11) << setfill(' ') << econ[i][j]
						<< setw(6) << setfill(' ') << catches[i][j] << setw(5) << setfill(' ') << stumps[i][j] << setw(7) << setfill(' ')
						<< runout[i][j] << endl;
					cout << endl;
				}
				cout << "\t\t\t\t ---------------------------------------- \t\t" << endl;
				cout << endl;
			}
			break;
		case 2:
			int choice2;
			cout << "Which player you want to check from 0 to 43." << endl;
			cout << "your choice : ";
			cin >> choice2;
			for (int j = choice2; j <= choice2; j++)
			{
				cout << endl;
				cout << "Player name : ";
				cout << playername[j] << " " << lastname[j] << endl;
				cout << "Shirt NO : " << shirtno[j] << endl;
				cout << endl;
				cout << "Match: " << "\t" << "M:    " << "R:    " << "BA.Avg:    " << "HS:    "
					<< "SR:    " << " B.B:    " << " W:    " << "BO.Avg:    " << "5'W:    " << "Econ:    "
					<< "C:    " << "S:    " << "R.O:    " << endl << endl;
				for (int i = 0; i < 4; i++)
				{
					cout << matchtype[i] << "\t" << left << setw(5) << setfill(' ') << matches[i][j] << right << runs[i][j] << "    " << left
						<< setw(10) << setfill(' ') << battingavg[i][j] << right << highscore[i][j] << setw(8) << setfill(' ') << strikerate[i][j]
						<< setw(8) << setfill(' ') << ballsbowled[i][j] << setw(7) << setfill(' ') << wickets[i][j] << setw(10) << setfill(' ')
						<< bollingavg[i][j] << setw(7) << setfill(' ') << fivewickets[i][j] << setw(11) << setfill(' ') << econ[i][j]
						<< setw(6) << setfill(' ') << catches[i][j] << setw(5) << setfill(' ') << stumps[i][j] << setw(7) << setfill(' ')
						<< runout[i][j] << endl;
					cout << endl;
				}
				cout << "\t\t\t\t ---------------------------------------- \t\t" << endl;
				cout << endl;
			}
			break;
		default:
			cout << "ERROR / invalid input." << endl;
		}
		if (choice == 1 || choice == 2)
		{
			cout << endl;
			cout << "if you want to check again." << endl;
			cout << "1. press 'y' / yes." << endl;
			cout << "2. press 'n' / no." << endl;
			cout << "   Your choice : ";
			cin >> choice1;
			if (choice1 == 'y')
			{
				system("cls");
			}
		}
		else
		{
			cout << endl;
			choice1 = 'n';
		}
	} while (choice1 != 'n');
}
void Player::searchplayer()
{
	char choice2;
	do
	{
		string searchfirstname, searchlastname;
		cout << "\t\t if you want to search the information of the player." << endl;
		cout << "\t\t press Y/y to search else press N/n." << endl;
		char choice1;
		cout << "\t\t Choice : ";
		cin >> choice1;
		if (choice1 == 'y' || choice1 == 'Y')
		{
			cout << "\t\t Please enter the name of the player : ";
			cin >> searchfirstname >> searchlastname;
			for (int j = 0; j < size; j++)
			{
				if (playername[j] == searchfirstname && lastname[j] == searchlastname)
				{
					cout << endl;
					cout << "Player name : ";
					cout << playername[j] << " " << lastname[j] << endl;
					cout << "Shirt NO : " << shirtno[j] << endl;
					cout << endl;
					cout << "Match: " << "\t" << "M:    " << "R:    " << "BA.Avg:    " << "HS:    "
						<< "SR:    " << " B.B:    " << " W:    " << "BO.Avg:    " << "5'W:    " << "Econ:    "
						<< "C:    " << "S:    " << "R.O:    " << endl << endl;
					for (int i = 0; i < 4; i++)
					{
						cout << matchtype[i] << "\t" << left << setw(5) << setfill(' ') << matches[i][j] << right << runs[i][j] << "    " << left
							<< setw(10) << setfill(' ') << battingavg[i][j] << right << highscore[i][j] << setw(8) << setfill(' ') << strikerate[i][j]
							<< setw(8) << setfill(' ') << ballsbowled[i][j] << setw(7) << setfill(' ') << wickets[i][j] << setw(10) << setfill(' ')
							<< bollingavg[i][j] << setw(7) << setfill(' ') << fivewickets[i][j] << setw(11) << setfill(' ') << econ[i][j]
							<< setw(6) << setfill(' ') << catches[i][j] << setw(5) << setfill(' ') << stumps[i][j] << setw(7) << setfill(' ')
							<< runout[i][j] << endl;
						cout << endl;
					}
					cout << "\t\t\t\t ---------------------------------------- \t\t" << endl;
					cout << endl;
				}
			}
			cout << endl;
			printplayerinformation();
			cout << endl;
			cout << "if you want to search again." << endl;
			cout << "1. press 'y' / yes." << endl;
			cout << "2. press 'n' / no." << endl;
			cout << "   Your choice : ";
			cin >> choice2;
			if (choice2 == 'y')
			{
				system("cls");

			}
		}
		else
		{
			cout << endl;
			choice2 = 'n';
		}
	} while (choice2 != 'n');
	cout << endl;
}
void Player::addplayer()
{
	char choice2;
	do
	{
		cout << "\t\t Add the information of an new player." << endl;
		cout << "\t\t press Y/y to add else press N/n." << endl;
		char choice1;
		int adress;
		cout << "\t\t Choice : ";
		cin >> choice1;
		if (choice1 == 'y' || choice1 == 'Y')
		{
			ifstream infile;
			ofstream outfile;
			infile.open("infile.txt");
			outfile.open("infile.txt");
			cout << "\t\t please enter address less than " << size << " : ";
			cin >> adress;
			if (adress < 33 || adress > size)
			{
				cout << "\t\t invalid option." << endl;
			}
			else
			{
				string firstname, endname;
				int M, R, hs, ballsb, W, fiveW, C, S, ro, shirtnumber;
				float Ba, sr, Bo, econ1;
				cout << "\t\t\t Enter name : ";
				cin >> firstname >> endname;
				cout << "\t\t\t Enter shirt no : ";
				cin >> shirtnumber;
				for (int type = 0; type < 4; type++)
				{
					cout << "\t\t " << matchtype[type] << endl;
					cout << "\t\t\t Enter number of macthes : ";
					cin >> M;
					cout << "\t\t\t Enter runs : ";
					cin >> R;
					cout << "\t\t\t Enter batting average : ";
					cin >> Ba;
					cout << "\t\t\t Enter higest score : ";
					cin >> hs;
					cout << "\t\t\t Enter strike rate : ";
					cin >> sr;
					cout << "\t\t\t Enter number of wickets : ";
					cin >> W;
					cout << "\t\t\t Enter bolling average : ";
					cin >> Bo;
					cout << "\t\t\t Enter five wickets : ";
					cin >> fiveW;
					cout << "\t\t\t Enter economic rate : ";
					cin >> econ1;
					cout << "\t\t\t Enter number of catches : ";
					cin >> C;
					cout << "\t\t\t Enter number of stupms : ";
					cin >> S;
					cout << "\t\t\t Enter number of run out : ";
					cin >> ro;
					cout << "\t\t\t Enter balls bowled : ";
					cin >> ballsb;
					playername[adress] = firstname;
					lastname[adress] = endname;
					shirtno[adress] = shirtnumber;
					matches[type][adress] = M;
					runs[type][adress] = R;
					battingavg[type][adress] = Ba;
					highscore[type][adress] = hs;
					strikerate[type][adress] = sr;
					wickets[type][adress] = W;
					bollingavg[type][adress] = Bo;
					fivewickets[type][adress] = fiveW;
					econ[type][adress] = econ1;
					catches[type][adress] = C;
					stumps[type][adress] = S;
					runout[type][adress] = ro;
					ballsbowled[type][adress] == ballsb;
				}
				for (int j = 0; j < size; j++)
				{
					outfile << playername[j] << " " << lastname[j];
					outfile << " " << shirtno[j] << endl;
					for (int i = 0; i < 4; i++)
					{
						outfile << matchtype[i] << endl;
						outfile << matches[i][j] << " " << runs[i][j] << " " << battingavg[i][j] << " " << highscore[i][j]
							<< " " << strikerate[i][j] << " " << ballsbowled[i][j] << " " << wickets[i][j]
							<< " " << bollingavg[i][j] << " " << fivewickets[i][j] << " " << econ[i][j] << " "
							<< catches[i][j] << " " << stumps[i][j] << " " << runout[i][j] << endl;
					}
					outfile << endl;
				}
			}
			cout << endl;
			printplayerinformation();
		}
		if (choice1 == 'y')
		{
			cout << endl;
			cout << "if you want to add player again." << endl;
			cout << "1. press 'y' / yes." << endl;
			cout << "2. press 'n' / no." << endl;
			cout << "   Your choice : ";
			cin >> choice2;
			if (choice2 == 'y')
			{
				system("cls");

			}
		}
		else
		{
			cout << endl;
			choice2 = 'n';
		}
	} while (choice2 != 'n');
	cout << endl;
}
void Player::removeplayer()
{
	char choice2;
	do
	{
		cout << "\t\t if you want to delete the information of the player." << endl;
		cout << "\t\t press Y/y to delete else press N/n." << endl;
		char choice1;
		int shirtnum;
		cout << "\t\t Choice : ";
		cin >> choice1;
		if (choice1 == 'y' || choice1 == 'Y')
		{
			ifstream infile;
			ofstream outfile;
			infile.open("infile.txt");
			outfile.open("infile.txt");
			cout << "\t\t Please enter the shirt of the player : ";
			cin >> shirtnum;
			for (int i = 0; i < size; i++)
			{
				if (shirtno[i] == shirtnum)
				{
					for (int type = 0; type < 4; type++)
					{
						playername[i] = ' ';
						lastname[i] = ' ';
						matches[type][i] = 0;
						shirtno[i] = 0;
						runs[type][i] = 0;
						battingavg[type][i] = 0;
						highscore[type][i] = 0;
						strikerate[type][i] = 0;
						ballsbowled[type][i] = 0;
						wickets[type][i] = 0;
						bollingavg[type][i] = 0;
						fivewickets[type][i] = 0;
						econ[type][i] = 0;
						catches[type][i] = 0;
						stumps[type][i] = 0;
						runout[type][i] = 0;
					}
				}
			}
			for (int j = 0; j < size; j++)
			{
				outfile << playername[j] << " " << lastname[j];
				outfile << " " << shirtno[j] << endl;
				for (int i = 0; i < 4; i++)
				{
					outfile << matchtype[i] << endl;
					outfile << matches[i][j] << " " << runs[i][j] << " " << battingavg[i][j] << " " << highscore[i][j]
						<< " " << strikerate[i][j] << " " << ballsbowled[i][j] << " " << wickets[i][j]
						<< " " << bollingavg[i][j] << " " << fivewickets[i][j] << " " << econ[i][j] << " "
						<< catches[i][j] << " " << stumps[i][j] << " " << runout[i][j] << endl;
				}
				outfile << endl;
			}
			cout << endl;
			printplayerinformation();
			cout << endl;
			cout << "if you want to delete again." << endl;
			cout << "1. press 'y' / yes." << endl;
			cout << "2. press 'n' / no." << endl;
			cout << "   Your choice : ";
			cin >> choice2;
			if (choice2 == 'y')
			{
				system("cls");

			}
		}
		else
		{
			cout << endl;
			choice2 = 'n';
		}
	} while (choice2 != 'n');
}
void Player::updateplayer()
{
	char choice1;
	do
	{
		cout << endl << endl;
		cout << "\t\t update the information of an old player." << endl;
		cout << "\t\t press Y/y to update else press N/n." << endl;
		char choice;
		int adress;
		int type;
		cout << "\t\t Choice : ";
		cin >> choice;
		if (choice == 'y' || choice == 'Y')
		{
			ifstream infile;
			ofstream outfile;
			infile.open("infile.txt");
			outfile.open("infile.txt");
			cout << "\t\t please enter address from 0 to 43: ";
			cin >> adress;
			cout << "\t\t please enter type from 0 to 3: ";
			cin >> type;
			if (adress > size || adress < 0)
			{
				cout << "\t\t invalid option." << endl;
			}
			else
			{
				string firstname, endname;
				int M, R, hs, ballsb, W, fiveW, C, S, ro, shirtnumber;
				float Ba, sr, Bo, econ1;
				cout << "\t\t\t Enter name : ";
				cin >> firstname >> endname;
				cout << "\t\t\t Enter shirt no : ";
				cin >> shirtnumber;
				cout << "\t\t\t Enter number of macthes : ";
				cin >> M;
				cout << "\t\t\t Enter runs : ";
				cin >> R;
				cout << "\t\t\t Enter batting average : ";
				cin >> Ba;
				cout << "\t\t\t Enter higest score : ";
				cin >> hs;
				cout << "\t\t\t Enter strike rate : ";
				cin >> sr;
				cout << "\t\t\t Enter balls bowled : ";
				cin >> ballsb;
				cout << "\t\t\t Enter number of wickets : ";
				cin >> W;
				cout << "\t\t\t Enter bolling average : ";
				cin >> Bo;
				cout << "\t\t\t Enter five wickets : ";
				cin >> fiveW;
				cout << "\t\t\t Enter economic rate : ";
				cin >> econ1;
				cout << "\t\t\t Enter number of catches : ";
				cin >> C;
				cout << "\t\t\t Enter number of stupms : ";
				cin >> S;
				cout << "\t\t\t Enter number of run out : ";
				cin >> ro;
				playername[adress] = firstname;
				lastname[adress] = endname;
				shirtno[adress] = shirtnumber;
				matches[type][adress] = M;
				runs[type][adress] = R;
				battingavg[type][adress] = Ba;
				highscore[type][adress] = hs;
				strikerate[type][adress] = sr;
				ballsbowled[type][adress] == ballsb;
				wickets[type][adress] = W;
				bollingavg[type][adress] = Bo;
				fivewickets[type][adress] = fiveW;
				econ[type][adress] = econ1;
				catches[type][adress] = C;
				stumps[type][adress] = S;
				runout[type][adress] = ro;
				for (int j = 0; j < size; j++)
				{
					outfile << playername[j] << " " << lastname[j];
					outfile << " " << shirtno[j] << endl;
					for (int i = 0; i < 4; i++)
					{
						outfile << matchtype[i] << endl;
						outfile << matches[i][j] << " " << runs[i][j] << " " << battingavg[i][j] << " " << highscore[i][j] 
							<< " " << strikerate[i][j] << " " << ballsbowled[i][j] << " " << wickets[i][j] 
							<< " " << bollingavg[i][j] << " " << fivewickets[i][j] << " " << econ[i][j] << " " 
							<< catches[i][j] << " " << stumps[i][j] << " " << runout[i][j] << endl;
					}
					outfile << endl;
				}
				cout << endl;
				printplayerinformation();
			}
		}
		if (choice == 'y')
		{
			cout << endl;
			cout << "if you want to update again." << endl;
			cout << "1. press 'y' / yes." << endl;
			cout << "2. press 'n' / no." << endl;
			cout << "   Your choice : ";
			cin >> choice1;
			if (choice1 == 'y')
			{
				system("cls");

			}
		}
		else
		{
			cout << endl;
			choice1 = 'n';
		}
	} while (choice1 != 'n');
}

void Team::addplayers()
{
	Player::getsize();
	Player::addplayer();
}
void Team::removeplayers()
{
	Player::removeplayer();
}
void Team::searchplayers()
{
	Player::searchplayer();
}
void Team::updateplayers()
{
	Player::getplayerinformation();
	Player::updateplayer();
}
void Team::getteaminformation()
{
	ifstream file;
	ofstream outfile;
	file.open("infile2.txt", ios::out);
	outfile.open("outfile2.txt");
	for (int j = 0; j < 4; j++)
	{
		file >> teamname[j] >> captionfirstname[j] >> captionlastname[j] >> coachfirstname[j]
			>> coachlastname[j];
		for (int i = 0; i < 3; i++)
		{
			file >> matchtypes[i] >> points[i][j] >> rating[i][j] >> match[i][j] >> win[i][j]
				>> lost[i][j];
		}
	}
}
void Team::displayteam()
{
	char choice1;
	do
	{
		cout << endl;
		int choice;
		cout << "1. press 1 if you want to check all the team rankings who was play PSC." << endl;
		cout << "2. press 2 if you want to check team information according to there ranking." << endl;
		cout << "   Your choice : ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			for (int j = 0; j < 4; j++)
			{
				cout << endl;
				cout << "Team name : ";
				cout << teamname[j] << endl;
				cout << "Coach name : ";
				cout << coachfirstname[j] << " " << coachlastname[j] << endl;
				cout << "Caption : " << captionfirstname[j] << " " << captionlastname[j] << endl;
				cout << endl;
				cout << "Match: " << "\t" << "Matches:    " << "Win:    " << "lose:    " << "points:    "
					<< "Rating:    " << endl << endl;
				for (int i = 0; i < 3; i++)
				{
					cout << matchtypes[i] << "\t  " << left << setw(10) << setfill(' ') << match[i][j] << right << win[i][j] << "       "
						<< left << setw(10) << setfill(' ') << lost[i][j] << right << points[i][j] << setw(10) << setfill(' ')
						<< rating[i][j] << endl;
					cout << endl;
				}
				cout << "\t\t\t\t ---------------------------------------- \t\t" << endl;
				cout << endl;
			}
			cout << endl;
			cout << "if you want to check again." << endl;
			cout << "1. press 'y' / yes." << endl;
			cout << "2. press 'n' / no." << endl;
			cout << "   Your choice : ";
			cin >> choice1;
			if (choice1 == 'y')
			{
				system("cls");
			}
			break;
		case 2:
			int choice2;
			cout << "Which team you want to check from 0 to 3." << endl;
			cout << "your choice : ";
			cin >> choice2;
			for (int j = choice2; j <= choice2; j++)
			{
				cout << endl;
				cout << "Team name : ";
				cout << teamname[j] << endl;
				cout << "Coach name : ";
				cout << coachfirstname[j] << " " << coachlastname[j] << endl;
				cout << "Caption : " << captionfirstname[j] << " " << captionlastname[j] << endl;
				cout << endl;
				cout << "Match: " << "\t" << "Matches:    " << "Win:    " << "lose:    " << "points:    "
					<< "Rating:    " << endl << endl;
				for (int i = 0; i < 3; i++)
				{
					cout << matchtypes[i] << "\t  " << left << setw(10) << setfill(' ') << match[i][j] << right << win[i][j] << "       "
						<< left << setw(10) << setfill(' ') << lost[i][j] << right << points[i][j] << setw(10) << setfill(' ')
						<< rating[i][j] << endl;
					cout << endl;
				}
				cout << "\t\t\t\t ---------------------------------------- \t\t" << endl;
				cout << endl;
			}
			cout << endl;
			cout << "if you want to check again." << endl;
			cout << "1. press 'y' / yes." << endl;
			cout << "2. press 'n' / no." << endl;
			cout << "   Your choice : ";
			cin >> choice1;
			if (choice1 == 'y')
			{
				system("cls");
			}
			break;
		default:
			cout << "ERROR / invalid input." << endl;
			choice1 = 'n';
			break;
		}
	} while (choice1 != 'n');
}
void Team::updatecaption()
{
	char choice1;
	do
	{
		cout << endl << endl;
		cout << "\t\t update the information of caption." << endl;
		cout << "\t\t press Y/y to update else press N/n." << endl;
		char choice;
		int adress;
		cout << "\t\t Choice : ";
		cin >> choice;
		if (choice == 'y' || choice == 'Y')
		{
			ifstream infile;
			ofstream outfile;
			infile.open("infile2.txt");
			outfile.open("infile2.txt");
			cout << "\t\t please enter address from 0 to 3: ";
			cin >> adress;
			if (adress > 4 || adress < 0)
			{
				cout << "\t\t invalid option." << endl;
			}
			else
			{
				string firstname, endname;
				cout << "\t\t\t Enter name : ";
				cin >> firstname >> endname;
				captionfirstname[adress] = firstname;
				captionlastname[adress] = endname;
				for (int j = 0; j < 4; j++)
				{
					outfile << teamname[j] << endl;
					outfile << captionfirstname[j] << " " << captionlastname[j] << endl;
					outfile << coachfirstname[j] << " " << coachlastname[j] << endl;
					for (int i = 0; i < 3; i++)
					{
						outfile << matchtypes[i] << endl;
						outfile << points[i][j] << " " << rating[i][j] << " " << match[i][j] << " " << win[i][j] << " " << lost[i][j] << endl;
					}
					outfile << endl;
				}
			}
			cout << endl;
			displayteam();
		}
		if (choice == 'y')
		{
			cout << endl;
			cout << "if you want to update again." << endl;
			cout << "1. press 'y' / yes." << endl;
			cout << "2. press 'n' / no." << endl;
			cout << "   Your choice : ";
			cin >> choice1;
			if (choice1 == 'y')
			{
				system("cls");

			}
		}
		else
		{
			cout << endl;
			choice1 = 'n';
		}
	} while (choice1 != 'n');
}
void Team::updatecoach()
{
	char choice1;
	do
	{
		cout << endl << endl;
		cout << "\t\t update the information of coach." << endl;
		cout << "\t\t press Y/y to update else press N/n." << endl;
		char choice;
		int adress;
		cout << "\t\t Choice : ";
		cin >> choice;
		if (choice == 'y' || choice == 'Y')
		{
			ifstream infile;
			ofstream outfile;
			infile.open("infile2.txt");
			outfile.open("infile2.txt");
			cout << "\t\t please enter address from 0 to 3: ";
			cin >> adress;
			if (adress > 4 || adress < 0)
			{
				cout << "\t\t invalid option." << endl;
			}
			else
			{
				string firstname, endname;
				cout << "\t\t\t Enter name : ";
				cin >> firstname >> endname;
				coachfirstname[adress] = firstname;
				coachlastname[adress] = endname;
				for (int j = 0; j < 4; j++)
				{
					outfile << teamname[j] << endl;
					outfile << captionfirstname[j] << " " << captionlastname[j] << endl;
					outfile << coachfirstname[j] << " " << coachlastname[j] << endl;
					for (int i = 0; i < 3; i++)
					{
						outfile << matchtypes[i] << endl;
						outfile << points[i][j] << " " << rating[i][j] << " " << match[i][j] << " " << win[i][j] << " " << lost[i][j] << endl;
					}
					outfile << endl;
				}
			}
			cout << endl;
			displayteam();
		}
		if (choice == 'y')
		{
			cout << endl;
			cout << "if you want to update again." << endl;
			cout << "1. press 'y' / yes." << endl;
			cout << "2. press 'n' / no." << endl;
			cout << "   Your choice : ";
			cin >> choice1;
			if (choice1 == 'y')
			{
				system("cls");

			}
		}
		else
		{
			cout << endl;
			choice1 = 'n';
		}
	} while (choice1 != 'n');
}
void Team::displaymatches()
{
	char choice7;
	do
	{
		cout << "\t\t if you want to check match information of the teams." << endl;
		cout << "\t\t press Y/y to check else press N/n." << endl;
		char choice6;
		cout << "\t\t Choice : ";
		cin >> choice6;
		string date[100], time[100], timetype[100], teamname1[100], teamname2[100];
		string matchT[100];
		int team1score[100];
		double team1over[100], team2over[100];
		int team1wickets[100], team2wickets[100];
		string scoretype1[100];
		int team2score[100];
		string scoretype2[100];
		string result[100];
		string menofmatchfirstname[100], menofmatchlastname[100];
		if (choice6 == 'y' || choice6 == 'Y')
		{
			int choice;
			cout << endl;
			cout << "1. press 1 for previous matches." << endl;
			cout << "2. press 2 for upcoming matches." << endl;
			cout << "\t Your choice : ";
			cin >> choice;
			ifstream infile;
			switch (choice)
			{
			case 1:
				cout << endl;
				cout << "Information." << endl;
				cout << "1.press 1 for Test match." << endl;
				cout << "2.press 2 for ODI match." << endl;
				cout << "3.press 3 for T20I match." << endl;
				int choice3;
				cout << "\t\t Choice : ";
				cin >> choice3;
				switch (choice3)
				{
				case 1:
					infile.open("Testmatchesprevious.txt", ios::out);
					for (int j = 0; j < 9; j++)
					{
						infile >> date[j] >> teamname1[j] >> teamname2[j] >> matchT[j] >> team1score[j] >> scoretype1[j]
							>> team2score[j] >> scoretype2[j] >> result[j] >> menofmatchfirstname[j]
							>> menofmatchlastname[j];
					}
					for (int j = 0; j < 9; j++)
					{
						cout << endl;
						cout << "\t\t" << date[j] << endl;
						cout << "\t\t" << matchT[j] << endl << endl;
						cout << "\t\t" << teamname1[j] << "\t\t\t" << teamname2[j] << endl;
						cout << "\t\t " << team1score[j] << "\t\t" << scoretype1[j] << "\t " << team2score[j] << endl << endl;
						cout << "\t\t\t  " << result[j] << endl;
						cout << "\t\t\t Men of the match : " << menofmatchfirstname[j] << " " << menofmatchlastname[j] << endl;
						cout << endl;
						cout << "\t\t ---------------------------------------- \t\t" << endl;
					}
					cout << endl;
					break;
				case 2:
					infile.open("odimatchesprevious.txt", ios::out);
					for (int j = 0; j < 11; j++)
					{
						infile >> date[j] >> teamname1[j] >> teamname2[j] >> matchT[j] >> team1score[j] >> team1over[j]
							>> team1wickets[j] >> team2score[j] >> team2over[j] >> team2wickets[j] >> result[j] >> menofmatchfirstname[j]
							>> menofmatchlastname[j];
					}
					for (int j = 0; j < 11; j++)
					{
						cout << endl;
						cout << "\t\t" << date[j] << endl;
						cout << "\t\t" << matchT[j] << endl << endl;
						cout << "\t\t" << teamname1[j] << "\t\t\t" << teamname2[j] << endl;
						cout << "\t\t " << team1score[j] << "\t\t\t " << team2score[j] << endl << endl;
						cout << "\t\t " << team1over[j] << "\t\t\t " << team2over[j] << endl << endl;
						cout << "\t\t " << team1wickets[j] << "\t\t\t " << team2wickets[j] << endl << endl;
						cout << "\t\t\t  " << result[j] << endl;
						cout << "\t\t\t Men of the match : " << menofmatchfirstname[j] << " " << menofmatchlastname[j] << endl;
						cout << endl;
						cout << "\t\t ---------------------------------------- \t\t" << endl;
					}
					cout << endl;
					break;
				case 3:
					infile.open("T20matchespervious.txt", ios::out);
					for (int j = 0; j < 7; j++)
					{
						infile >> date[j] >> teamname1[j] >> teamname2[j] >> matchT[j] >> team1score[j] >> team1over[j]
							>> team1wickets[j] >> team2score[j] >> team2over[j] >> team2wickets[j] >> result[j] >> menofmatchfirstname[j]
							>> menofmatchlastname[j];
					}
					for (int j = 0; j < 7; j++)
					{
						cout << endl;
						cout << "\t\t" << date[j] << endl;
						cout << "\t\t" << matchT[j] << endl << endl;
						cout << "\t\t" << teamname1[j] << "\t\t\t" << teamname2[j] << endl;
						cout << "\t\t " << team1score[j] << "\t\t\t " << team2score[j] << endl << endl;
						cout << "\t\t " << team1over[j] << "\t\t\t " << team2over[j] << endl << endl;
						cout << "\t\t " << team1wickets[j] << "\t\t\t " << team2wickets[j] << endl << endl;
						cout << "\t\t\t  " << result[j] << endl;
						cout << "\t\t\t Men of the match : " << menofmatchfirstname[j] << " " << menofmatchlastname[j] << endl;
						cout << endl;
						cout << "\t\t ---------------------------------------- \t\t" << endl;
					}
					cout << endl;
					break;
				default:
					cout << "\t ERROR / Invalid input." << endl;
					break;
				}
				break;
			case 2:
				cout << endl;
				cout << "Information." << endl;
				cout << "1.press 1 for Test match." << endl;
				cout << "2.press 2 for ODI match." << endl;
				cout << "3.press 3 for T20I match." << endl;
				int choice9;
				cout << "\t\t Choice : ";
				cin >> choice9;
				switch (choice9)
				{
				case 1:
					infile.open("Testmatchesupcoming.txt", ios::out);
					for (int j = 0; j < 6; j++)
					{
						infile >> date[j] >> time[j] >> timetype[j] >> teamname1[j] >> teamname2[j] >> matchT[j] >> result[j];
					}
					for (int j = 0; j < 6; j++)
					{
						cout << endl;
						cout << "\t\t" << date[j] << endl;
						cout << "\t\t" << time[j] << " " << timetype[j] << endl;
						cout << "\t\t" << matchT[j] << endl << endl;
						cout << "\t\t" << teamname1[j] << "\t\t\t" << teamname2[j] << endl << endl;
						cout << "\t\t\t  " << "Stadium : " << result[j] << endl;
						cout << endl;
						cout << "\t\t ---------------------------------------- \t\t" << endl;
					}
					cout << endl;
					break;
				case 2:
					infile.open("odimatchesupcoming.txt", ios::out);
					for (int j = 0; j < 6; j++)
					{
						infile >> date[j] >> time[j] >> timetype[j] >> teamname1[j] >> teamname2[j] >> matchT[j] >> result[j];
					}
					for (int j = 0; j < 6; j++)
					{
						cout << endl;
						cout << "\t\t" << date[j] << endl;
						cout << "\t\t" << time[j] << " " << timetype[j] << endl;
						cout << "\t\t" << matchT[j] << endl << endl;
						cout << "\t\t" << teamname1[j] << "\t\t\t" << teamname2[j] << endl << endl;
						cout << "\t\t\t  " << "Stadium : " << result[j] << endl;
						cout << endl;
						cout << "\t\t ---------------------------------------- \t\t" << endl;
					}
					cout << endl;
					break;
				case 3:
					infile.open("T20matchesupcoming.txt", ios::out);
					for (int j = 0; j < 6; j++)
					{
						infile >> date[j] >> time[j] >> timetype[j] >> teamname1[j] >> teamname2[j] >> matchT[j] >> result[j];
					}
					for (int j = 0; j < 6; j++)
					{
						cout << endl;
						cout << "\t\t" << date[j] << endl;
						cout << "\t\t" << time[j] << " " << timetype[j] << endl;
						cout << "\t\t" << matchT[j] << endl << endl;
						cout << "\t\t" << teamname1[j] << "\t\t\t" << teamname2[j] << endl << endl;
						cout << "\t\t\t  " << "Stadium : " << result[j] << endl;
						cout << endl;
						cout << "\t\t ---------------------------------------- \t\t" << endl;
					}
					cout << endl;
					break;
				default:
					cout << "Error / invalid input." << endl;
					break;
				}
				break;
			default:
				cout << "\t ERROR / invalid input." << endl;
				break;
			}
			cout << endl;
			cout << "if you want to check matches information again." << endl;
			cout << "1. press 'y' / yes." << endl;
			cout << "2. press 'n' / no." << endl;
			cout << "   Your choice : ";
			cin >> choice7;
			if (choice7 == 'y')
			{
				system("cls");
			}
		}
		else if (choice6 == 'n')
		{
			choice7 = 'n';
		}
	}while (choice7 != 'n');
}
Login Team::checkstatus(string firstname, string lastname, string password)
{
	if (firstname == "Muntazer" && lastname == "Mehdi" && password == "admin@123")
	{
		return SUCCESS;
	}
	else if(password != "admin@123")
	{
		cout << "\t Invalid password......" << endl;
		return FAILURE;
	}
	else if (firstname != "Muntazer" || lastname != "Mehdi")
	{
		cout << "\t Invalid user name......" << endl;
		return FAILURE;
	}
	else
	{
		return FAILURE;
	}
}

void Match::conductmatch()
{
	Team::getteaminformation();
	char choice;
	ifstream infile;
	string time[100], timetype[100];
	do
	{
		cout << "\t\t if you want to Conduct match." << endl;
		cout << "\t\t press Y/y to conduct else press N/n." << endl;
		char choice2;
		cout << "\t\t Choice : ";
		cin >> choice2;
		cout << endl;
		if (choice2 == 'y' || choice2 == 'Y')
		{
			cout << endl;
			ICCRANKING = 1;
			cout << "Information." << endl;
			cout << "1.press 1 for Test match." << endl;
			cout << "2.press 2 for ODI match." << endl;
			cout << "3.press 3 for T20I match." << endl;
			int choice1;
			cout << "\t\t Choice : ";
			cin >> choice1;
			cout << endl;
			switch (choice1)
			{
			case 1:
				infile.open("Testmatchesupcoming.txt", ios::out);
				for (int j = 0; j < 6; j++)
				{
					infile >> Date[j] >> time[j] >> timetype[j] >> Team1[j] >> team2[j] >> MatchType[j] >> venue[j];
				}
				for (int j = 0; j < 6; j++)
				{
					cout << endl;
					cout << "\t\t" << Date[j] << endl;
					cout << "\t\t" << time[j] << " " << timetype[j] << endl;
					cout << "\t\t" << MatchType[j] << endl << endl;
					cout << "\t\t" << Team1[j] << "\t\t\t" << team2[j] << endl << endl;
					cout << "\t\t\t  " << "Stadium : " << venue[j] << endl;
					cout << endl;
					cout << "\t\t ---------------------------------------- \t\t" << endl;
				}
				cout << endl;

				cout << "\t\t Please enter date of match : ";
				cin >> date1;
				cout << endl;
				for (int j = 0; j < 6; j++)
				{
					if (Date[j] == date1)
					{
						cout << endl;
						cout << "\t\t" << Date[j] << endl;
						cout << "\t\t" << time[j] << " " << timetype[j] << endl;
						cout << "\t\t" << MatchType[j] << endl << endl;
						cout << "\t\t" << Team1[j] << "\t\t\t" << team2[j] << endl << endl;
						cout << "\t\t\t " << "Stadium : " << venue[j] << endl;
						cout << endl;
						cout << "\t\t ---------------------------------------- \t\t" << endl;
						cout << endl;
					}
				}
				cout << endl;
				break;
			case 2:
				infile.open("odimatchesupcoming.txt", ios::out);
				for (int j = 0; j < 6; j++)
				{
					infile >> Date[j] >> time[j] >> timetype[j] >> Team1[j] >> team2[j] >> MatchType[j] >> venue[j];
				}
				for (int j = 0; j < 6; j++)
				{
					cout << endl;
					cout << "\t\t" << Date[j] << endl;
					cout << "\t\t" << time[j] << " " << timetype[j] << endl;
					cout << "\t\t" << MatchType[j] << endl << endl;
					cout << "\t\t" << Team1[j] << "\t\t\t" << team2[j] << endl << endl;
					cout << "\t\t\t  " << "Stadium : " << venue[j] << endl;
					cout << endl;
					cout << "\t\t ---------------------------------------- \t\t" << endl;
				}
				cout << endl;
				cout << "\t\t Please enter date of match : ";
				cin >> date1;
				cout << endl;
				for (int j = 0; j < 6; j++)
				{
					if (Date[j] == date1)
					{
						cout << endl;
						cout << "\t\t" << Date[j] << endl;
						cout << "\t\t" << time[j] << " " << timetype[j] << endl;
						cout << "\t\t" << MatchType[j] << endl << endl;
						cout << "\t\t" << Team1[j] << "\t\t\t" << team2[j] << endl << endl;
						cout << "\t\t\t  " << "Stadium : " << venue[j] << endl;
						cout << endl;
						cout << "\t\t ---------------------------------------- \t\t" << endl;
						cout << endl;
					}
				}
				cout << endl;
				break;
			case 3:
				infile.open("T20matchesupcoming.txt", ios::out);
				for (int j = 0; j < 6; j++)
				{
					infile >> Date[j] >> time[j] >> timetype[j] >> Team1[j] >> team2[j] >> MatchType[j] >> venue[j];
				}
				for (int j = 0; j < 6; j++)
				{
					cout << endl;
					cout << "\t\t" << Date[j] << endl;
					cout << "\t\t" << time[j] << " " << timetype[j] << endl;
					cout << "\t\t" << MatchType[j] << endl << endl;
					cout << "\t\t" << Team1[j] << "\t\t\t" << team2[j] << endl << endl;
					cout << "\t\t\t  " << "Stadium : " << venue[j] << endl;
					cout << endl;
					cout << "\t\t ---------------------------------------- \t\t" << endl;
				}
				cout << endl;
				cout << "\t\t Please enter date of match : ";
				cin >> date1;
				cout << endl;
				for (int j = 0; j < 6; j++)
				{
					if (Date[j] == date1)
					{
						cout << endl;
						cout << "\t\t" << Date[j] << endl;
						cout << "\t\t" << time[j] << " " << timetype[j] << endl;
						cout << "\t\t" << MatchType[j] << endl << endl;
						cout << "\t\t" << Team1[j] << "\t\t\t" << team2[j] << endl << endl;
						cout << "\t\t\t  " << "Stadium : " << venue[j] << endl;
						cout << endl;
						cout << "\t\t ---------------------------------------- \t\t" << endl;
						cout << endl;
					}
				}
				cout << endl;
				break;
			default:
				cout << "Error / invalid input." << endl;
				break;
			}
			cout << endl;
			cout << "if you want to check matches information again." << endl;
			cout << "1. press 'y' / yes." << endl;
			cout << "2. press 'n' / no." << endl;
			cout << "   Your choice : ";
			cin >> choice;
			ifstream conduct;
			conduct.open("conductmatch.txt", ios::out);
			for (int j = 0; j < 1; j++)
			{
				conduct >> Tournamentname[j] >> commentatorsfirstname1[j] >> commentatorslastname1[j] >> commentatorsfirstname2[j]
					>> commentatorslastname2[j] >> umpiresfirstname1[j] >> umpireslastname1[j] >> umpiresfirstname2[j]
					>> umpireslastname2[j] >> Matchstatus[j];
			}
			system("cls");
			cout << endl;
			for (int j = 0; j < 6; j++)
			{
				if (Date[j] == date1)
				{
					for (int i = 0; i < 1; i++)
					{
						cout << "\t\t\t " << Tournamentname[i] << endl;
						cout << endl;
						cout << "\t The match will be conducting b/w || " << Team1[j] << " / " << team2[j] << " ||" << endl;
						cout << endl;
						cout << "\t\t " << Team1[j] << " VS " << team2[j] << endl;
						cout << "\t\t\t " << MatchType[j] << endl;
						cout << endl;
						cout << "\t\t Commentators : " << endl;
						cout << "\t\t\t " << commentatorsfirstname1[i] << " " << commentatorslastname1[i] << endl;
						cout << "\t\t\t " << commentatorsfirstname2[i] << " " << commentatorslastname2[i] << endl;
						cout << endl;
						cout << "\t\t Umpires : " << endl;
						cout << "\t\t\t " << umpiresfirstname1[i] << " " << umpireslastname1[i] << endl;
						cout << "\t\t\t " << umpiresfirstname2[i] << " " << umpireslastname2[i] << endl;
					}
					cout << endl;
					cout << "\t Finally your time is over." << endl;
					cout << "\t Match was conducted." << endl;
					cout << endl;
					cout << "\t\t " << Team1[j] << " VS " << team2[j] << endl;
					cout << endl;
					cout << "\t Please caption's comes forward." << endl;
					cout << endl;
					cout << "\t   ";
					if (Team1[j] == "Ravens")
					{
						cout << captionfirstname[0] << captionlastname[0] << " / ";
					}
					if (team2[j] == "Ravens")
					{
						cout << captionfirstname[0] << captionlastname[0] << " / ";
					}
					if (Team1[j] == "Redskins")
					{
						cout << captionfirstname[1] << captionlastname[1] << " / ";
					}
					if (team2[j] == "Redskins")
					{
						cout << captionfirstname[1] << captionlastname[1] << " / ";
					}
					if (Team1[j] == "Saints")
					{
						cout << captionfirstname[2] << captionlastname[2] << " / ";
					}
					if (team2[j] == "Saints")
					{
						cout << captionfirstname[2] << captionlastname[2] << " / ";
					}
					if (Team1[j] == "Bisons")
					{
						cout << captionfirstname[3] << captionlastname[3] << " / ";
					}
					if (team2[j] == "Bisons")
					{
						cout << captionfirstname[3] << captionlastname[3] << " / ";
					}
					cout << endl << endl;
					cout << "\t Know toss was Conducted." << endl;
					int tosswon;
					if (toss() == 1)
					{
						cout << "\t Toss : Head." << endl;
						cout << "\t " << Team1[j] << " won the toss." << endl;
						cout << "\t" << Team1[j] << " Please select batting / bowling." << endl;
						tosswon = 1;
					}
					else if (toss() == 2)
					{
						cout << "\t Toss : tail." << endl;
						cout << "\t " << team2[j] << " won the toss." << endl;
						cout << "\t" << team2[j] << " Please select batting / bowling." << endl;
						tosswon = 2;
					}
					int choice4;
					int team1total = 0;
					cout << "\t 1. Batting." << endl;
					cout << "\t 2. Bowling." << endl;
					cout << "\t   Your choice : ";
					cin >> choice4;
					switch (choice4)
					{
					case 1:
						cout << "\t Match was start." << endl;
						if (tosswon == 1)
						{
							cout << "\t " << Team1[j] << endl;
						}
						else if (tosswon == 2)
						{
							cout << "\t " << team2[j] << endl;
						}
						cout << " won The toss / team was choose batting." << endl;
						team1match();
						cout << endl;
						team2match();
						cout << endl;
						if (winnig() == 1)
						{
							cout << "\t " << Team1[j] << " won the Match." << endl;
						}
						else if (winnig() == 2)
						{
							cout << "\t " << team2[j] << " won the Match." << endl;
						}
						else if (winnig() == 0)
						{
							cout << "\t Match draw." << endl;
						}
						break;
					case 2:
						cout << "\t Match was start." << endl;
						if (tosswon == 1)
						{
							cout << "\t " << Team1[j] << endl;
						}
						else if (tosswon == 2)
						{
							cout << "\t " << team2[j] << endl;
						}
						cout << " won The toss / team was choose bolling." << endl;
						team1match();
						cout << endl;
						team2match();
						cout << endl;
						if (winnig() == 1)
						{
							cout << "\t " << Team1[j] << " won the Match." << endl;
						}
						else if (winnig() == 2)
						{
							cout << "\t " << team2[j] << " won the Match." << endl;
						}
						else if (winnig() == 0)
						{
							cout << "\t Match draw." << endl;
						}
						break;
					default:
						cout << "\t ERROR / Invalid Input..." << endl;
						break;
					}
					char choice5;
					cout << endl;
					cout << "\t If you want to clear all screen and conduct match again." << endl;
					cout << "\t Press 'y' || press 'n'. " << endl;
					cout << "\t   Your choice : ";
					cin >> choice5;
					if (choice5 == 'y')
					{
						system("cls");
					}
					cout << endl;
					conductmatch();
				}
			}
		}
		else
		{
		choice = 'n';
		}
	} while (choice != 'n');
}
int Match::toss()
{
	srand((time(0)));
	int toss = 1 + rand() % 2;
	return toss;
}
void Match::team1match()
{
	srand((time(0)));
	int total1 = 0, total2 = 0, total3 = 0, total4 = 0, total5 = 0, total6 = 0, total7 = 0, total8 = 0, total9 = 0;
	int count1 = 0, count2 = 0, count3 = 0, wickets = 0;
	int overs;
	int overs2 = 0;
	for (overs = 1; overs <= 120; overs++)
	{
		if (overs % 2 == 0)
		{
			if (overs <= 10)
			{
				int toss = 4;
				total1 = total1 + toss;
				cout << "This is a great four." << endl;
			}
			if (overs > 10 && overs <= 30)
			{
				int toss = 0 + rand() % 2;
				total6 = total6 + toss;
				if (toss == 0)
				{
					cout << "No run was taken." << endl;
				}
				if (toss == 1)
				{
					cout << "Single run was taken." << endl;
				}
				if (toss == 2)
				{
					cout << "Know double run occurs" << endl;
				}
			}
			else if (overs > 30 && overs <= 40)
			{
				int toss = 6;
				total3 = total3 + toss;
				cout << "This is a great Six." << endl;
			}
			else if (overs > 40 && overs <= 60)
			{
				int toss = 0 + rand() % 2;
				total7 = total7 + toss;
				if (toss == 0)
				{
					cout << "No run was taken." << endl;
				}
				if (toss == 1)
				{
					cout << "Single run was taken." << endl;
				}
				if (toss == 2)
				{
					cout << "Know double run occurs" << endl;
				}
			}
			else if (overs > 60 && overs <= 70)
			{
				int toss = 4;
				total2 = total2 + toss;
				cout << "This is a great four." << endl;
			}
			else if (overs > 70 && overs <= 90)
			{
				int toss = 0 + rand() % 2;
				total8 = total8 + toss;
				if (toss == 0)
				{
					wickets++;
					cout << "No run was taken." << endl;
				}
				if (toss == 1)
				{
					cout << "Single run was taken." << endl;
				}
				if (toss == 2)
				{
					cout << "Know double run occurs" << endl;
				}
			}
			else if (overs > 90 && overs <= 100)
			{
				int toss = 6;
				total4 = total4 + toss;
				cout << "This is a great six." << endl;
			}
			else if (overs > 100 && overs <= 120)
			{
				int toss = 0 + rand() % 2;
				total9 = total9 + toss;
				if (toss == 0)
				{
					wickets++;
					cout << "No run was taken." << endl;
				}
				if (toss == 1)
				{
					cout << "Single run was taken." << endl;
				}
				if (toss == 2)
				{
					cout << "Know double run occurs" << endl;
				}
			}
			if (overs2 < 5)
			{
				overs2++;
			}
			else
			{
				overs2 = 0;
			}
			team1total = total1 + total2 + total3 + total4 + total5 + total6 + total7 + total8 + total9;
			cout << "Total runs : " << team1total << endl;
			cout << "Wickets taken : " << wickets << endl;
			if (overs / 6 == 20)
			{
				overs2 = 0;
			}
			cout << "Total Overs : " << setprecision(1) << fixed << overs/6 << "." << overs2 << endl;
		}
		else
		{
			int toss = 0 + rand() % 2;
			total5 = total5 + toss;
			if (toss == 0)
			{
				cout << "No run was taken." << endl;
			}
			if (toss == 1)
			{
				cout << "Single run was taken." << endl;
			}
			if (toss == 2)
			{
				cout << "Know double run occurs" << endl;
			}
			if (overs2 < 5)
			{
				overs2++;
			}
			else
			{
				overs2 = 0;
			}
			team1total = total1 + total2 + total3 + total4 + total5 + total6 + total7 + total8 + total9;
			cout << "Total runs : " << team1total << endl;
			cout << "Wickets taken : " << wickets << endl;
			if (overs / 6 == 20)
			{
				overs2 = 0;
			}
			cout << "Total Overs : " << setprecision(1) << fixed << overs/6 << "." << overs2 << endl;
		}
		if (wickets == 10)
		{
			overs = 120;
		}
		Sleep(100);
		system("cls");
	}
	cout << endl;
	team1total = total1 + total2 + total3 + total4 + total5 + total6 + total7 + total8 + total9;
	cout << "Total runs : " << team1total << endl;
	cout << "Wickets taken : " << wickets << endl;
	if (overs / 6 == 20)
	{
		overs2 = 0;
	}
	cout << "Total Overs : " << setprecision(1) << fixed << overs/6 << "." << overs2 << endl;
	Sleep(10000);
}
void Match::team2match()
{
	srand((time(0)));
	int total1 = 0, total2 = 0, total3 = 0, total4 = 0, total5 = 0, total6 = 0, total7 = 0, total8 = 0, total9 = 0;
	int count1 = 0, count2 = 0, count3 = 0, wickets = 0;
	int overs = 0;
	int overs1;
	int overs2 = 0;
	for (overs1 = 1; overs1 <= 120; overs1++)
	{
		if (overs1 % 2 == 0)
		{
			if (overs1 <= 10)
			{
				int toss = 4;
				total1 = total1 + toss;
				cout << "This is a great four." << endl;
			}
			if (overs1 > 10 && overs1 <= 30)
			{
				int toss = 0 + rand() % 2;
				total6 = total6 + toss;
				if (toss == 0)
				{
					cout << "No run was taken." << endl;
				}
				if (toss == 1)
				{
					cout << "Single run was taken." << endl;
				}
				if (toss == 2)
				{
					cout << "Know double run occurs" << endl;
				}
			}
			else if (overs1 > 30 && overs1 <= 40)
			{
				int toss = 6;
				total3 = total3 + toss;
				cout << "This is a great Six." << endl;
			}
			else if (overs1 > 40 && overs1 <= 60)
			{
				int toss = 0 + rand() % 2;
				total7 = total7 + toss;
				if (toss == 0)
				{
					cout << "No run was taken." << endl;
				}
				if (toss == 1)
				{
					cout << "Single run was taken." << endl;
				}
				if (toss == 2)
				{
					cout << "Know double run occurs" << endl;
				}
			}
			else if (overs1 > 60 && overs1 <= 70)
			{
				int toss = 4;
				total2 = total2 + toss;
				cout << "This is a great four." << endl;
			}
			else if (overs1 > 70 && overs1 <= 90)
			{
				int toss = 0 + rand() % 2;
				total8 = total8 + toss;
				if (toss == 0)
				{
					wickets++;
					cout << "No run was taken." << endl;
				}
				if (toss == 1)
				{
					cout << "Single run was taken." << endl;
				}
				if (toss == 2)
				{
					cout << "Know double run occurs" << endl;
				}
			}
			else if (overs1 > 90 && overs1 <= 100)
			{
				int toss = 6;
				total4 = total4 + toss;
				cout << "This is a great six." << endl;
			}
			else if (overs1 > 100 && overs1 <= 120)
			{
				int toss = 0 + rand() % 2;
				total9 = total9 + toss;
				if (toss == 0)
				{
					wickets++;
					cout << "No run was taken." << endl;
				}
				if (toss == 1)
				{
					cout << "Single run was taken." << endl;
				}
				if (toss == 2)
				{
					cout << "Know double run occurs" << endl;
				}
			}
			if (overs2 < 5)
			{
				overs2++;
			}
			else
			{
				overs2 = 0;
			}
			overs++;
			team2total = total1 + total2 + total3 + total4 + total5 + total6 + total7 + total8 + total9;
			cout << "Total runs : " << team2total << endl;
			cout << "Wickets taken : " << wickets << endl;
			if (overs1 / 6 == 20)
			{
				overs2 = 0;
			}
			cout << "Total Overs : " << setprecision(1) << fixed << overs / 6 << "." << overs2 << endl;
		}
		else
		{
			int toss = 0 + rand() % 2;
			total5 = total5 + toss;
			if (toss == 0)
			{
				cout << "No run was taken." << endl;
			}
			if (toss == 1)
			{
				cout << "Single run was taken." << endl;
			}
			if (toss == 2)
			{
				cout << "Know double run occurs" << endl;
			}
			if (overs2 < 5)
			{
				overs2++;
			}
			else
			{
				overs2 = 0;
			}
			overs++;
			team2total = total1 + total2 + total3 + total4 + total5 + total6 + total7 + total8 + total9;
			cout << "Total runs : " << team2total << endl;
			cout << "Wickets taken : " << wickets << endl;
			if (overs1 / 6 == 20)
			{
				overs2 = 0;
			}
			cout << "Total Overs : " << setprecision(1) << fixed << overs / 6 << "." << overs2 << endl;
		}
		if (wickets == 10)
		{
			overs1 = 120;
		}
		if (team2total > team1total)
		{
			overs1 = 120;
		}
		Sleep(100);
		system("cls");
		cout << endl;
		cout << "Target is : " << team1total << endl;
		if (team2total <= team1total)
		{
			cout << "Remaining : " << team1total - team2total << endl;
		}
	}
	team2total = total1 + total2 + total3 + total4 + total5 + total6 + total7 + total8 + total9;
	cout << "Total runs : " << team2total << endl;
	cout << "Wickets taken : " << wickets << endl;
	if (overs1 / 6 == 20)
	{
		overs2 = 0;
	}
	cout << "Total Overs : " << setprecision(1) << fixed << overs / 6 << "." << overs2 << endl;
}
int Match::winnig()
{
	int draw = 0, team1winning = 1, team2winning = 2;
	if (team1total > team2total)
	{
		return team1winning;
	}
	else if (team1total < team2total)
	{
		return team2winning;
	}
	else if (team1total == team2total)
	{
		return draw;
	}
}
void Match::schedulematch()
{
	Team::getteaminformation();
	char choice;
	ifstream infile;
	string time[100], timetype[100];
	do
	{
		cout << "\t\t if you want to Schedule match." << endl;
		cout << "\t\t press Y/y to Schedule else press N/n." << endl;
		char choice2;
		cout << "\t\t Choice : ";
		cin >> choice2;
		cout << endl;
		if (choice2 == 'y' || choice2 == 'Y')
		{
			displayteam();
			ICCRANKING = 2;
			cout << endl;
			cout << "\t Enter Team 1 name : ";
			cin >> team1schedule;
			cout << endl;
			cout << "\t Enter Team 2 name : ";
			cin >> team2schedule;
			cout << endl;
			for (int j = 0; j < 4; j++)
			{
				if (teamname[j] == team1schedule || teamname[j] == team2schedule)
				{
					cout << endl;
					cout << "Team name : ";
					cout << teamname[j] << endl;
					cout << "Coach name : ";
					cout << coachfirstname[j] << " " << coachlastname[j] << endl;
					cout << "Caption : " << captionfirstname[j] << " " << captionlastname[j] << endl;
					cout << endl;
					cout << "Match: " << "\t" << "Matches:    " << "Win:    " << "lose:    " << "points:    "
						<< "Rating:    " << endl << endl;
					for (int i = 0; i < 3; i++)
					{
						cout << matchtypes[i] << "\t  " << left << setw(10) << setfill(' ') << match[i][j] << right << win[i][j] << "       "
							<< left << setw(10) << setfill(' ') << lost[i][j] << right << points[i][j] << setw(10) << setfill(' ')
							<< rating[i][j] << endl;
						cout << endl;
					}
					cout << "\t\t\t\t ---------------------------------------- \t\t" << endl;
					cout << endl;
				}
			}
			for (int j = 0; j < 1; j++)
			{
				char choice3;
				cout << "\t If you want to conduct match." << endl;
				cout << "\t Press 'y' || press 'n'." << endl;
				cout << "\t   Your choice : ";
				cin >> choice3;
				if (choice3 == 'y' || choice3 == 'Y')
				{
					cout << "\t Please Enter all Information Realted to Match." << endl;
					cout << "\t Tournament name : ";
					cin >> Tournamentname[j];
					cout << endl;
					cout << "\t Commentators : " << endl;
					cout << "\t\t ";
					cin >> commentatorsfirstname1[j] >> commentatorslastname1[j];
					cout << "\t\t ";
					cin >> commentatorsfirstname2[j] >> commentatorslastname2[j];
					cout << endl;
					cout << "\t	Umpires : " << endl;
					cout << "\t\t ";
					cin >> umpiresfirstname1[j] >> umpireslastname1[j];
					cout << "\t\t ";
					cin >> umpiresfirstname2[j] >> umpireslastname2[j];
					cout << endl;
					cout << "\t Date : ";
					cin >> Date[j];
					cout << endl;
					cout << "\t Time : ";
					cin >> time[j] >> timetype[j];
					cout << endl;
					cout << "Teams : " << endl;
					cout << "\t\t ";
					cout << team1schedule << endl;
					cout << "\t\t ";
					cout << team2schedule;
					cout << endl;
					cout << "\t Match type : ";
					cin >> MatchType[j];
					cout << endl;
					cout << "\t Stadium : ";
					cin >> venue[j];
					ofstream outfile;
					outfile.open("Schedulematch.txt");
					outfile << Tournamentname[j] << endl << commentatorsfirstname1[j] << " " << commentatorslastname1[j]
						<< endl << commentatorsfirstname2[j] << " " << commentatorslastname2[j] << endl
						<< umpiresfirstname1[j] << " " << umpireslastname1[j] << endl << umpiresfirstname2[j]
						<< " " << umpireslastname2[j] << endl << Date[j] << endl << time[j] << " " << timetype[j] << endl
						<< team1schedule << " " << team2schedule << endl << MatchType[j] << endl << venue[j] << endl;
				}
			}
			cout << endl;
			cout << endl;
			system("cls");
			cout << endl;
			for (int j = 0; j < 1; j++)
			{
				if (teamname[j] == team1schedule || teamname[j] == team2schedule)
				{
					for (int i = 0; i < 1; i++)
					{
						cout << "\t\t\t " << Tournamentname[i] << endl;
						cout << endl;
						cout << "\t The match will be conducting b/w || " << Team1[j] << " / " << team2[j] << " ||" << endl;
						cout << endl;
						cout << "\t\t " << team1schedule << " VS " << team2schedule << endl;
						cout << "\t\t\t " << MatchType[j] << endl;
						cout << endl;
						cout << "\t\t Commentators : " << endl;
						cout << "\t\t\t " << commentatorsfirstname1[i] << " " << commentatorslastname1[i] << endl;
						cout << "\t\t\t " << commentatorsfirstname2[i] << " " << commentatorslastname2[i] << endl;
						cout << endl;
						cout << "\t\t Umpires : " << endl;
						cout << "\t\t\t " << umpiresfirstname1[i] << " " << umpireslastname1[i] << endl;
						cout << "\t\t\t " << umpiresfirstname2[i] << " " << umpireslastname2[i] << endl;
					}
					cout << endl;
					cout << "\t Finally your time is over." << endl;
					cout << "\t Match was conducted." << endl;
					cout << endl;
					cout << "\t\t " << team1schedule << " VS " << team2schedule << endl;
					cout << endl;
					cout << "\t Please caption's comes forward." << endl;
					cout << endl;
					cout << "\t   ";
					if (team1schedule == "Ravens")
					{
						cout << captionfirstname[0] << captionlastname[0] << " / ";
					}
					if (team2schedule == "Ravens")
					{
						cout << captionfirstname[0] << captionlastname[0] << " / ";
					}
					if (team1schedule == "Redskins")
					{
						cout << captionfirstname[1] << captionlastname[1] << " / ";
					}
					if (team2schedule == "Redskins")
					{
						cout << captionfirstname[1] << captionlastname[1] << " / ";
					}
					if (team1schedule == "Saints")
					{
						cout << captionfirstname[2] << captionlastname[2] << " / ";
					}
					if (team2schedule == "Saints")
					{
						cout << captionfirstname[2] << captionlastname[2] << " / ";
					}
					if (team1schedule == "Bisons")
					{
						cout << captionfirstname[3] << captionlastname[3] << " / ";
					}
					if (team2schedule == "Bisons")
					{
						cout << captionfirstname[3] << captionlastname[3] << " / ";
					}
					cout << endl << endl;
					cout << "\t Know toss was Conducted." << endl;
					int tosswon;
					if (toss() == 1)
					{
						cout << "\t Toss : Head." << endl;
						cout << "\t " << team1schedule << " won the toss." << endl;
						cout << "\t" << team1schedule << " Please select batting / bowling." << endl;
						tosswon = 1;
					}
					else if (toss() == 2)
					{
						cout << "\t Toss : tail." << endl;
						cout << "\t " << team2schedule << " won the toss." << endl;
						cout << "\t" << team2schedule << " Please select batting / bowling." << endl;
						tosswon = 2;
					}
					int choice4;
					int team1total = 0;
					cout << "\t 1. Batting." << endl;
					cout << "\t 2. Bowling." << endl;
					cout << "\t   Your choice : ";
					cin >> choice4;
					switch (choice4)
					{
					case 1:
						cout << "\t Match was start." << endl;
						if (tosswon == 1)
						{
							cout << "\t " << team1schedule << endl;
						}
						else if (tosswon == 2)
						{
							cout << "\t " << team2schedule << endl;
						}
						cout << " won The toss / team was choose batting." << endl;
						team1match();
						cout << endl;
						team2match();
						cout << endl;
						if (winnig() == 1)
						{
							cout << "\t " << team1schedule << " won the Match." << endl;
						}
						else if (winnig() == 2)
						{
							cout << "\t " << team2schedule << " won the Match." << endl;
						}
						else if (winnig() == 0)
						{
							cout << "\t Match draw." << endl;
						}
						break;
					case 2:
						cout << "\t Match was start." << endl;
						if (tosswon == 1)
						{
							cout << "\t " << team1schedule << endl;
						}
						else if (tosswon == 2)
						{
							cout << "\t " << team2schedule << endl;
						}
						cout << " won The toss / team was choose bolling." << endl;
						team1match();
						cout << endl;
						team2match();
						cout << endl;
						if (winnig() == 1)
						{
							cout << "\t " << team1schedule << " won the Match." << endl;
						}
						else if (winnig() == 2)
						{
							cout << "\t " << team2schedule << " won the Match." << endl;
						}
						else if (winnig() == 0)
						{
							cout << "\t Match draw." << endl;
						}
						break;
					default:
						cout << "\t ERROR / Invalid Input..." << endl;
						break;
					}
					cout << "if you want to schedule match again." << endl;
					cout << "1. press 'y' / yes." << endl;
					cout << "2. press 'n' / no." << endl;
					cout << "   Your choice : ";
					cin >> choice;
				}
			}
		}
		else
		{
			choice = 'n';
		}
	} while (choice != 'n');
}
void Match::updateworldrecords()
{
	getteaminformation();
	char choice;
	do
	{
		char choice1;
		cout << "\t if you want to see update in ICC world record." << endl;
		cout << "\t press'y' || press 'n'" << endl;
		cout << "\t your choice : ";
		cin >> choice1;
		if (choice1 == 'y' || choice1 == 'Y')
		{
			ofstream file;
			int j;
			file.open("infile2.txt", ios::out);
			if (ICCRANKING == 2)
			{
				for (int k = 0; k < 4; k++)
				{
					file << teamname[k] << endl << captionfirstname[k] << " " << captionlastname[k] << endl
						<< coachfirstname[k] << " " << coachlastname[k] << endl;
					for (int i = 0; i < 3; i++)
					{
						if (team1schedule == "Ravens" || team2schedule == "Ravens")
						{
							points[i][0] = points[i][0] + 85;
							rating[i][0] = rating[i][0] + 8;
						}
						if (team1schedule == "Redskins" || team2schedule == "Redskins")
						{
							points[i][1] = points[i][1] + 85;
							rating[i][1] = rating[i][1] + 8;
						}
						if (team1schedule == "Saints" || team2schedule == "Saints")
						{
							points[i][2] = points[i][2] + 85;
							rating[i][2] = rating[i][2] + 8;
						}
						if (team1schedule == "Bisons" || team2schedule == "Bisons")
						{
							points[i][3] = points[i][3] + 85;
							rating[i][3] = rating[i][3] + 8;
						}
						file << matchtypes[i] << endl << points[i][k] << " " << rating[i][k] << " "
							<< match[i][k] << " " << win[i][k] << " " << lost[i][k] << endl;
					}
					file << endl;
				}
			}
			if (ICCRANKING == 1)
			{
				for (j = 0; j < 6; j++)
				{
					if (Date[j] == date1)
					{
						for (int k = 0; k < 4; k++)
						{
							file << teamname[k] << endl << captionfirstname[k] << " " << captionlastname[k] << endl
								<< coachfirstname[k] << " " << coachlastname[k] << endl;
							for (int i = 0; i < 3; i++)
							{
								if (Team1[j] == "Ravens" || team2[j] == "Ravens")
								{
									points[i][0] = points[i][0] + 85;
									rating[i][0] = rating[i][0] + 8;
 								}
								if (Team1[j] == "Redskins" || team2[j] == "Redskins")
								{
									points[i][1] = points[i][1] + 85;
									rating[i][1] = rating[i][1] + 8;
								}
								if (Team1[j] == "Saints" || team2[j] == "Saints")
								{
									points[i][2] = points[i][2] + 85;
									rating[i][2] = rating[i][2] + 8;
								}
								if (Team1[j] == "Bisons" || team2[j] == "Bisons")
								{
									points[i][3] = points[i][3] + 85;
									rating[i][3] = rating[i][3] + 8;
								}
								file << matchtypes[i] << endl << points[i][k] << " " << rating[i][k] << " "
									<< match[i][k] << " " << win[i][k] << " " << lost[i][k] << endl;
							}
							file << endl;
						}
					}
				}
			}
			displayteam();
			cout << endl;
			cout << "\t If you want check update ICC rankings again." << endl;
			cout << "\t press 'y' || press || 'n'" << endl;
			cout << "\t   Your choice : ";
			cin >> choice;
		}
		else
		{
			choice = 'n';
		}

	} while (choice != 'n');
}
void Match::updateplayerrecords()
{
	getplayerinformation();
	char choice1;
	do
	{
		cout << endl << endl;
		cout << "\t\t Check update information of player." << endl;
		cout << "\t\t press Y/y to check updates else press N/n." << endl;
		char choice;
		int adress;
		int type;
		cout << "\t\t Choice : ";
		cin >> choice;
		if (choice == 'y' || choice == 'Y')
		{
			getsize();
			getplayerinformation();
			printplayerinformation();
			ofstream outfile;
			outfile.open("infile.txt");
			cout << endl;
			cout << "\t\t please enter address from 0 to 43: ";
			cin >> adress;
			cout << "\t\t please enter type from 0 to 3: ";
			cin >> type;
			if (adress > size || adress < 0)
			{
				cout << "\t\t invalid option." << endl;
			}
			else
			{
				matches[type][adress] = matches[type][adress] + 1;
				runs[type][adress] = runs[type][adress] + 49;
				battingavg[type][adress] = battingavg[type][adress] + 0.25;
				highscore[type][adress] = highscore[type][adress] + 20;
				strikerate[type][adress] = strikerate[type][adress] + 0.12;
				ballsbowled[type][adress] == ballsbowled[type][adress] + 18;
				wickets[type][adress] = wickets[type][adress] + 2;
				bollingavg[type][adress] = bollingavg[type][adress] + 0.25;
				fivewickets[type][adress] = fivewickets[type][adress] + 0;
				econ[type][adress] = econ[type][adress] + 0.09;
				catches[type][adress] = catches[type][adress] + 1;
				stumps[type][adress] = stumps[type][adress] + 1;
				runout[type][adress] = runout[type][adress] + 2;
				for (int j = 0; j < size; j++)
				{
					outfile << playername[j] << " " << lastname[j];
					outfile << " " << shirtno[j] << endl;
					for (int i = 0; i < 4; i++)
					{
						outfile << matchtype[i] << endl;
						outfile << matches[i][j] << " " << runs[i][j] << " " << battingavg[i][j] << " " << highscore[i][j]
							<< " " << strikerate[i][j] << " " << ballsbowled[i][j] << " " << wickets[i][j]
							<< " " << bollingavg[i][j] << " " << fivewickets[i][j] << " " << econ[i][j] << " "
							<< catches[i][j] << " " << stumps[i][j] << " " << runout[i][j] << endl;
					}
					outfile << endl;
				}
				cout << endl;
				printplayerinformation();
			}
		}
		if (choice == 'y')
		{
			cout << endl;
			cout << "if you want to check updated record again." << endl;
			cout << "1. press 'y' / yes." << endl;
			cout << "2. press 'n' / no." << endl;
			cout << "   Your choice : ";
			cin >> choice1;
			if (choice1 == 'y')
			{
				system("cls");

			}
		}
		else
		{
			cout << endl;
			choice1 = 'n';
		}
	} while (choice1 != 'n');
}
void Match::upcomingmatches()
{
	char choice7;
	do
	{
		cout << "\t\t if you want to check Upcoming matches information of the teams." << endl;
		cout << "\t\t press Y/y to check else press N/n." << endl;
		char choice6;
		cout << "\t\t Choice : ";
		cin >> choice6;
		string date[100], time[100], timetype[100], teamname1[100], teamname2[100];
		string matchT[100];
		int team1score[100];
		double team1over[100], team2over[100];
		int team1wickets[100], team2wickets[100];
		string scoretype1[100];
		int team2score[100];
		string scoretype2[100];
		string result[100];
		string menofmatchfirstname[100], menofmatchlastname[100];
		if (choice6 == 'y' || choice6 == 'Y')
		{
			ifstream infile;
			cout << endl;
			cout << "Information." << endl;
			cout << "1.press 1 for Test match." << endl;
			cout << "2.press 2 for ODI match." << endl;
			cout << "3.press 3 for T20I match." << endl;
			int choice3;
			cout << "\t\t Choice : ";
			cin >> choice3;
			switch (choice3)
			{
			case 1:
				infile.open("Testmatchesupcoming.txt", ios::out);
				for (int j = 0; j < 6; j++)
				{
					infile >> date[j] >> time[j] >> timetype[j] >> teamname1[j] >> teamname2[j] >> matchT[j] >> result[j];
				}
				for (int j = 0; j < 6; j++)
				{
					cout << endl;
					cout << "\t\t" << date[j] << endl;
					cout << "\t\t" << time[j] << " " << timetype[j] << endl;
					cout << "\t\t" << matchT[j] << endl << endl;
					cout << "\t\t" << teamname1[j] << "\t\t\t" << teamname2[j] << endl << endl;
					cout << "\t\t\t  " << "Stadium : " << result[j] << endl;
					cout << endl;
					cout << "\t\t ---------------------------------------- \t\t" << endl;
				}
				cout << endl;
				break;
			case 2:
				infile.open("odimatchesupcoming.txt", ios::out);
				for (int j = 0; j < 6; j++)
				{
					infile >> date[j] >> time[j] >> timetype[j] >> teamname1[j] >> teamname2[j] >> matchT[j] >> result[j];
				}
				for (int j = 0; j < 6; j++)
				{
					cout << endl;
					cout << "\t\t" << date[j] << endl;
					cout << "\t\t" << time[j] << " " << timetype[j] << endl;
					cout << "\t\t" << matchT[j] << endl << endl;
					cout << "\t\t" << teamname1[j] << "\t\t\t" << teamname2[j] << endl << endl;
					cout << "\t\t\t  " << "Stadium : " << result[j] << endl;
					cout << endl;
					cout << "\t\t ---------------------------------------- \t\t" << endl;
				}
				cout << endl;
				break;
			case 3:
				infile.open("T20matchesupcoming.txt", ios::out);
				for (int j = 0; j < 6; j++)
				{
					infile >> date[j] >> time[j] >> timetype[j] >> teamname1[j] >> teamname2[j] >> matchT[j] >> result[j];
				}
				for (int j = 0; j < 6; j++)
				{
					cout << endl;
					cout << "\t\t" << date[j] << endl;
					cout << "\t\t" << time[j] << " " << timetype[j] << endl;
					cout << "\t\t" << matchT[j] << endl << endl;
					cout << "\t\t" << teamname1[j] << "\t\t\t" << teamname2[j] << endl << endl;
					cout << "\t\t\t  " << "Stadium : " << result[j] << endl;
					cout << endl;
					cout << "\t\t ---------------------------------------- \t\t" << endl;
				}
				cout << endl;
				break;
			default:
				cout << "Error / invalid input." << endl;
				break;
			}
			cout << endl;
			cout << "if you want to check matches information again." << endl;
			cout << "1. press 'y' / yes." << endl;
			cout << "2. press 'n' / no." << endl;
			cout << "   Your choice : ";
			cin >> choice7;
			if (choice7 == 'y')
			{
				system("cls");
			}
		}
		else if (choice6 == 'n')
		{
			choice7 = 'n';
		}
	} while (choice7 != 'n');
}
void Match::recentmatches()
{
	char choice7;
	do
	{
		cout << "\t\t if you want to check recent matches information of the teams." << endl;
		cout << "\t\t press Y/y to check else press N/n." << endl;
		char choice6;
		cout << "\t\t Choice : ";
		cin >> choice6;
		string date[100], time[100], timetype[100], teamname1[100], teamname2[100];
		string matchT[100];
		int team1score[100];
		double team1over[100], team2over[100];
		int team1wickets[100], team2wickets[100];
		string scoretype1[100];
		int team2score[100];
		string scoretype2[100];
		string result[100];
		string menofmatchfirstname[100], menofmatchlastname[100];
		if (choice6 == 'y' || choice6 == 'Y')
		{
			ifstream infile;
			cout << endl;
			cout << "Information." << endl;
			cout << "1.press 1 for Test match." << endl;
			cout << "2.press 2 for ODI match." << endl;
			cout << "3.press 3 for T20I match." << endl;
			int choice3;
			cout << "\t\t Choice : ";
			cin >> choice3;
			switch (choice3)
			{
			case 1:
				infile.open("Testmatchesprevious.txt", ios::out);
				for (int j = 0; j < 9; j++)
				{
					infile >> date[j] >> teamname1[j] >> teamname2[j] >> matchT[j] >> team1score[j] >> scoretype1[j]
						>> team2score[j] >> scoretype2[j] >> result[j] >> menofmatchfirstname[j]
						>> menofmatchlastname[j];
				}
				for (int j = 0; j < 9; j++)
				{
					cout << endl;
					cout << "\t\t" << date[j] << endl;
					cout << "\t\t" << matchT[j] << endl << endl;
					cout << "\t\t" << teamname1[j] << "\t\t\t" << teamname2[j] << endl;
					cout << "\t\t " << team1score[j] << "\t\t" << scoretype1[j] << "\t " << team2score[j] << endl << endl;
					cout << "\t\t\t  " << result[j] << endl;
					cout << "\t\t\t Men of the match : " << menofmatchfirstname[j] << " " << menofmatchlastname[j] << endl;
					cout << endl;
					cout << "\t\t ---------------------------------------- \t\t" << endl;
				}
				cout << endl;
				break;
			case 2:
				infile.open("odimatchesprevious.txt", ios::out);
				for (int j = 0; j < 11; j++)
				{
					infile >> date[j] >> teamname1[j] >> teamname2[j] >> matchT[j] >> team1score[j] >> team1over[j]
						>> team1wickets[j] >> team2score[j] >> team2over[j] >> team2wickets[j] >> result[j] >> menofmatchfirstname[j]
						>> menofmatchlastname[j];
				}
				for (int j = 0; j < 11; j++)
				{
					cout << endl;
					cout << "\t\t" << date[j] << endl;
					cout << "\t\t" << matchT[j] << endl << endl;
					cout << "\t\t" << teamname1[j] << "\t\t\t" << teamname2[j] << endl;
					cout << "\t\t " << team1score[j] << "\t\t\t " << team2score[j] << endl << endl;
					cout << "\t\t " << team1over[j] << "\t\t\t " << team2over[j] << endl << endl;
					cout << "\t\t " << team1wickets[j] << "\t\t\t " << team2wickets[j] << endl << endl;
					cout << "\t\t\t  " << result[j] << endl;
					cout << "\t\t\t Men of the match : " << menofmatchfirstname[j] << " " << menofmatchlastname[j] << endl;
					cout << endl;
					cout << "\t\t ---------------------------------------- \t\t" << endl;
				}
				cout << endl;
				break;
			case 3:
				infile.open("T20matchespervious.txt", ios::out);
				for (int j = 0; j < 7; j++)
				{
					infile >> date[j] >> teamname1[j] >> teamname2[j] >> matchT[j] >> team1score[j] >> team1over[j]
						>> team1wickets[j] >> team2score[j] >> team2over[j] >> team2wickets[j] >> result[j] >> menofmatchfirstname[j]
						>> menofmatchlastname[j];
				}
				for (int j = 0; j < 7; j++)
				{
					cout << endl;
					cout << "\t\t" << date[j] << endl;
					cout << "\t\t" << matchT[j] << endl << endl;
					cout << "\t\t" << teamname1[j] << "\t\t\t" << teamname2[j] << endl;
					cout << "\t\t " << team1score[j] << "\t\t\t " << team2score[j] << endl << endl;
					cout << "\t\t " << team1over[j] << "\t\t\t " << team2over[j] << endl << endl;
					cout << "\t\t " << team1wickets[j] << "\t\t\t " << team2wickets[j] << endl << endl;
					cout << "\t\t\t  " << result[j] << endl;
					cout << "\t\t\t Men of the match : " << menofmatchfirstname[j] << " " << menofmatchlastname[j] << endl;
					cout << endl;
					cout << "\t\t ---------------------------------------- \t\t" << endl;
				}
				cout << endl;
				break;
			default:
				cout << "\t ERROR / Invalid input." << endl;
				break;
			}
			cout << endl;
			cout << "if you want to check matches information again." << endl;
			cout << "1. press 'y' / yes." << endl;
			cout << "2. press 'n' / no." << endl;
			cout << "   Your choice : ";
			cin >> choice7;
			if (choice7 == 'y')
			{
				system("cls");
			}
		}
		else if (choice6 == 'n')
		{
			choice7 = 'n';
		}
	} while (choice7 != 'n');
}

void News::upcomingmatches1()
{
	Match::upcomingmatches();
}
void News::recentmatches1()
{
	Match::recentmatches();
}
void News::ICCrankingofteam()
{

	Team::getteaminformation();
	Team::displayteam();
}
void News::ICCrankingofplayer()
{
	Player::getsize();
	Player::getplayerinformation();
	Player::printplayerinformation();
}
