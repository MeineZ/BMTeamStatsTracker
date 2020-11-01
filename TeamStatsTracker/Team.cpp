#include <Team.h>

#include <CVarNames.h>

#include <TeamStatsTracker.h>


tst::Team::Team() 
{
	this->squad = {};
}

void tst::Team::AddSquadMate()
{
	auto name = tst::TeamStatsTracker::globalCVarManager->getCvar( NEW_PREMADE_NAME ).getStringValue();
	this->squad.push_back(name);
}

void tst::Team::RemoveSquadMate()
{
	auto name = tst::TeamStatsTracker::globalCVarManager->getCvar( NEW_PREMADE_NAME ).getStringValue();
	this->squad.erase(std::remove(squad.begin(), squad.end(), name), squad.end());
}

void tst::Team::ResetSquad()
{
	this->squad.clear();
}