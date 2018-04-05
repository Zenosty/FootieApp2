﻿// FootballApp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "CFootballTeam.h"

using namespace std;

//Global Functions
int ShowMenu(void);
void DoInitialiseTable(void);
void DoDisplayLeague(void);
void DoEnterMatchResult(void);
void DoDeductPoints(void);
void DoBestDefence(void);
void DoRelegationZone(void);
void DoAddTeamToList(void);


//Global Variables
CFootballTeam league[10];

int main()
{
	//DISPLAY USER INTERFACE
	int option;
	do
	{
		option = ShowMenu();
		switch (option)
		{
			case 0:
				DoInitialiseTable();
				break;
			case 1:
				DoDisplayLeague();
				break;
			case 2:
				DoEnterMatchResult();
				break;
			case 3:
				DoDeductPoints();
				break;
			case 4:
				DoBestDefence();
				break;
			case 5:
				DoRelegationZone();
				break;
			case 6:
				DoAddTeamToList();
				break;
			case 7:
				// Quit option.
				break;
			default:
				cout << "invalid option, Please enter an option from 1-7." << endl;
				break;
		}

	// 7 = quit.
	} while (option != 7);
	
	return 0;
}
int ShowMenu()
{
	int option;

	cout << "----------------------Football League Menu------------------------------" << endl;
	cout << "| \t1.) Initialise League Table				        |" << endl;
	cout << "| \t2.) Display League Table		                  	|" << endl;
	cout << "| \t3.) Enter a Match Result		                  	|" << endl;
	cout << "| \t4.) Deduct Points				                |" << endl;
	cout << "| \t5.) Best Defence				                |" << endl;
	cout << "| \t6.) Relegation Zone						|" << endl;
	cout << "| \t7.) Add Team to List						|" << endl;
	cout << "| \t0.) Quit						        |" << endl << endl;
	cout << "------------------------------------------------------------------------" << endl << endl;
	cout << "Please enter a selection from the options above:  ";
	cin >> option;

	return option;
}

void DoInitialiseTable(void)
{
	string teamName;
	for (int i = 0; i < 10; i++)
	{
		cout << "Please enter the name of a team: ";
		cin >> teamName;

		CFootballTeam FootballTeam(teamName);
		league[i] = FootballTeam;

	}
}

void DoDisplayLeague(void)
{


}

void DoEnterMatchResult(void)
{



}


void DoDeductPoints(void)
{



}

void DoBestDefence(void)
{



}

void DoRelegationZone(void)
{



}

void DoAddTeamToList(void)
{




}
