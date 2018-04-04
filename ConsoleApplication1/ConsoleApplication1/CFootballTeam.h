#pragma once

#include "stdafx.h"
using namespace std;

class CFootballTeam
{
public:
	CFootballTeam();
	~CFootballTeam();
private:
	string m_Name;
	int m_GamesPlayed;
	int m_GoalsFor;
	int m_GoalsAgainst;
	int m_Points;

public:
	CFootballTeam(string name);
	CFootballTeam(string name, int gamesPlayed, int goalsFor, int goalsAgainst, int points);
	string GetName(void);
	int GetGamesPlayed(void);
	int GetGoalsFor(void);
	int GetGoalsAgainst(void);
	int GetPoints(void);
	bool HasName(string SearchName);
	void Display(void);
	void UpdateOnResult(int goalsFor, int goalsAgainst);
	void DeductPoints(int num);
	bool IsLessThan(CFootballTeam& team);
};
