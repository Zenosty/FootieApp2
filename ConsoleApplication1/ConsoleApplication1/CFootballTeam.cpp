#include "stdafx.h"
#include "CFootballTeam.h"


CFootballTeam::CFootballTeam()
	: m_Name("")
	, m_GamesPlayed(0)
	, m_GoalsFor(0)
	, m_GoalsAgainst(0)
	, m_Points(0)
{
}

CFootballTeam::~CFootballTeam()
{
}

CFootballTeam::CFootballTeam(string name)
	: m_Name(name)
	, m_GamesPlayed(0)
	, m_GoalsFor(0)
	, m_GoalsAgainst(0)
	, m_Points(0)
{
}

CFootballTeam::CFootballTeam(string name, int gamesPlayed, int goalsFor, int goalsAgainst, int points)
{
	m_Name = name;
	m_GamesPlayed = gamesPlayed;
	m_GoalsFor = goalsFor;
	m_GoalsAgainst = goalsAgainst;
	m_Points = points;
}

string CFootballTeam::GetName(void)
{
	return m_Name;
}

int CFootballTeam::GetGamesPlayed(void)
{
	return m_GamesPlayed;
}

int CFootballTeam::GetGoalsFor(void)
{
	return m_GoalsFor;
}

int CFootballTeam::GetGoalsAgainst(void)
{
	return m_GoalsAgainst;
}

int CFootballTeam::GetPoints(void)
{
	return m_Points;
}

bool CFootballTeam::HasName(string SearchName)
{
	if (m_Name == SearchName)
	{
		return true;
	}
	else {
		return false;
	}
}

void CFootballTeam::Display(void)
{
	cout << setw(10) << m_Name 
		<< setw(10) << m_GamesPlayed
		<< setw(10) << m_GoalsFor
		<< setw(10) << m_GoalsAgainst 
		<< setw(10) << m_Points << endl;

}

void CFootballTeam::UpdateOnResult(int goalsFor, int goalsAgainst)
{
	m_GoalsFor += goalsFor;
	m_GoalsAgainst += goalsAgainst;

	if (goalsFor > goalsAgainst)
	{
		m_Points += 3;
	}
	else if (goalsFor == goalsAgainst)
	{
		m_Points += 1;
	}
}

void CFootballTeam::DeductPoints(int num)
{
	m_Points -= num;
}
