#include "TeamStatsTracker.h"

#include <bakkesmod/plugin/bakkesmodsdk.h>

#include <utils/Logger.h>

BAKKESMOD_PLUGIN( tst::TeamStatsTracker, "Team Stats Tracker", "0.1", 0 )

tst::TeamStatsTracker::TeamStatsTracker()
{
}

void tst::TeamStatsTracker::onLoad()
{
	// Set up logger and log that the plugin is detected
	Logger::GetInstance().SetCVarManagerWrapper( cvarManager );
	TST_LOG( std::string( exports.pluginName ) + " version: " + std::string( exports.pluginVersion ) );
}

void tst::TeamStatsTracker::onUnload()
{
}