#include <Team.h>
#include <TeamStatsTracker.h>

tst::Team::Team() 
{
	this->squad = {};
}

void tst::Team::AddSquadMate()
{
	auto name = tst::TeamStatsTracker::globalCVarManager->getCvar("cl_tst_new_premade_name").getStringValue();
	this->squad.push_back(name);
}

void tst::Team::RemoveSquadMate()
{
	auto name = tst::TeamStatsTracker::globalCVarManager->getCvar("cl_tst_new_premade_name").getStringValue();
	this->squad.erase(std::remove(squad.begin(), squad.end(), name), squad.end());
}

void tst::Team::ResetSquad()
{
	this->squad.clear();
}