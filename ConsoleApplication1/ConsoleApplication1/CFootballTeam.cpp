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