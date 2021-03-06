// FootballApp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "CFootballTeam.h"

using namespace std;

//Global Functions
int ShowMenu(void);
void DoInitialiseTable(void);
void DoDisplayLeague(void);
void DoEnterMatchResult(void);
void DoDeductPoints(void);`\
void DoBestDefence(void);
void DoRelegationZone(void);
void DoAddTeamToList(void);


//Global Variables
CFootballTeam league[10];
bool quitFlag = false;


int main()
{
	//DISPLAY USER INTERFACE
	int option;
	do
	{
		option = ShowMenu();
		switch (option)
		{
		case 1:
			DoInitialiseTable();
			break;
		case 2:
			DoDisplayLeague();
			break;
		case 3:
			DoEnterMatchResult();
			break;
		case 4:
			DoDeductPoints();
			break;
		case 5:
			DoBestDefence();
			break;

		case 6:
			DoRelegationZone();
			break;
		case 7:
			DoAddTeamToList();
			break;
		case 0:
			break;
		default:
			if (option > 7)
			{
				cout << "Invalid option!, Please enter an option from 1-7." << endl << endl;
			}
		}

	} while (!quitFlag);


	return 0;
}
int ShowMenu()
{
	int option;

	cout << "----------------------Football League Menu------------------------------" << endl << endl;
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
	cout << endl;

	return option;
}

void DoInitialiseTable(void)
{
	string teamName;

	cout << "This league features 10 teams, you will be asked to enter the names of these teams" << endl << endl;
	for (int i = 0; i < 10; i++)
	{

		cout << "Please enter the name of a team: ";
		cin >> teamName;

		CFootballTeam team(teamName);
		league[i] = team;
	}

}

void DoDisplayLeague(void)
{
	cout << "\t\t\t League Table\n";
	for (int i = 0; i < 10; i++)
	{
		league[i].Display();
		cout << endl << endl;
	}

}

void DoEnterMatchResult(void)
{
	int homeScore, awayScore;
	string homeTeam, awayTeam;

	cout << "Please enter the match result in the format Home Team, Home Score, Away Team, Away Score: ";
	cin >> homeTeam >> homeScore >> awayTeam >> awayScore;

	for (int i = 0; i < 10; i++)
	{
		if (league[i].HasName(homeTeam) == true)
		{
			league[i].UpdateOnResult(homeScore, awayScore);
		}
	}

	for (int i = 0; i < 10; i++)
	{
		if (league[i].HasName(awayTeam) == true)
		{
			league[i].UpdateOnResult(awayScore, homeScore);
		}
	}
	
}


void DoDeductPoints(void)
{
	string teamName;
	int pointsDeducted;

	cout << "Please enter the team to be deducted points: " << endl;
	cin >> teamName;
	
	cout << "Please enter the number of points to be deducted: " << endl;
	cin >> pointsDeducted;

	for (int i = 0; i < 10; i++)
	{
		if (league[i].HasName(teamName) == true)
		{
			league[i].DeductPoints(pointsDeducted);
		}
	}


}

	void DoBestDefence(void)
	{
		string leastConceded;
		
		for (int i = 0; i < 10; i++)
		{
			leastConceded == league[0].GetName();
			if (league[i].GetGoalsAgainst() < league[0].GetGoalsAgainst())
			{
				leastConceded == league[i].GetName();
			}

		}
	
	
	}

	void DoRelegationZone(void)
	{
		cout << "The teams threatened by relegation are: " << league[7].GetName() << ", " << league[8].GetName() << " and " << league[9].GetName() << "." << endl << endl;


	}

	void DoAddTeamToList(void)
		{




}
