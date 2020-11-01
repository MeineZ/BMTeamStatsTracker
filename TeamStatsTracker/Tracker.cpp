#include <Tracker.h>
#include <Team.h>

tst::Tracker::Tracker()
{
	this->stats = {};
}

void tst::Tracker::AddGoal(std::string goalPlayer, std::string assistPlayer)
{
	std::string keyName = goalPlayer + " -> " + assistPlayer;

	auto result = this->stats.find(keyName);

	if (result != stats.end())
	{
		++result->second;
	}
	else
	{		
		this->stats.insert(std::pair<std::string, int>(keyName, 1));
	}	
}