#include "TeamStatsTracker.h"

#include <bakkesmod/plugin/bakkesmodsdk.h>

BAKKESMOD_PLUGIN( tst::TeamStatsTracker, "Team Stats Tracker", "0.1", 0 )

tst::TeamStatsTracker::TeamStatsTracker()
{
}

void tst::TeamStatsTracker::onLoad()
{
	// Log startup to console
	cvarManager->log( std::string( exports.pluginName ) + " version: " + std::string( exports.pluginVersion ) );
}

void tst::TeamStatsTracker::onUnload()
{
}