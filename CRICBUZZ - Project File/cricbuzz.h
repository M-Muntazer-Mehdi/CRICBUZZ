#ifndef _CRICBUZZ_H
#define _CRICBUZZ_H
#include<iostream>
#include<iomanip>
#include<fstream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include<Windows.h>
using namespace std;
class Player
{
protected:
	string playername[200];
	string lastname[200];
	int shirtno[200];
	string matchtype[4];
	int matches[4][200];
	int runs[4][200];
	float battingavg[4][200];
	int highscore[4][200];
	float strikerate[4][200];
	int ballsbowled[4][200];
	int wickets[4][200];
	float bollingavg[4][200];
	int fivewickets[4][200];
	float econ[4][200];
	int catches[4][200];
	int stumps[4][200];
	int runout[4][200];
	int size;
public:

	void getsize();
	void getplayerinformation();
	void printplayerinformation();
	void addplayer();
	void removeplayer();
	void searchplayer();
	void updateplayer();
};
enum Login
{
	SUCCESS = 1,
	FAILURE = 0
};
class Team : public Player
{
protected:
	string teamname[200];
	string captionfirstname[5];
	string captionlastname[5];
	string coachfirstname[5];
	string coachlastname[5];
	string matchtypes[5];
	int points[4][5];
	int rating[4][5];
	int match[4][5];
	int win[4][5];
	int lost[4][5];
	Login login;
public:
	void addplayers();
	void removeplayers();
	void searchplayers();
	void updateplayers();
	void getteaminformation();
	void displayteam();
	void updatecaption();
	void updatecoach();
	void displaymatches();
	Login checkstatus(string firstname, string lastname, string password);
};
class Match : public Team
{
private:
	string Team1[100];
	string team2[100];
	string Date[100];
	string venue[100];
	string MatchType[100];
	string Tournamentname[100];
	string commentatorsfirstname1[100];
	string commentatorslastname1[100];
	string commentatorsfirstname2[100];
	string commentatorslastname2[100];
	string umpiresfirstname1[100];
	string umpireslastname1[100];
	string umpiresfirstname2[100];
	string umpireslastname2[100];
	string Matchstatus;
	int team1total;
	int team2total;
	string team1schedule, team2schedule;
	int ICCRANKING;
	string date1;
public:
	void conductmatch();
	int toss();
	void team1match();
	void team2match();
	int winnig();
	void schedulematch();
	void updateworldrecords();
	void updateplayerrecords();
	void upcomingmatches();
	void recentmatches();
};
class News : public Match
{
public:
	void upcomingmatches1();
	void recentmatches1();
	void ICCrankingofteam();
	void ICCrankingofplayer();
};
#endif