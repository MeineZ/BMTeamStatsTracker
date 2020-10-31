#include "TeamStatsTracker.h"

#include <bakkesmod/plugin/bakkesmodsdk.h>

#include <utils/Logger.h>

BAKKESMOD_PLUGIN( tst::TeamStatsTracker, "Team Stats Tracker", "0.1", 0 )

std::shared_ptr<CVarManagerWrapper> tst::TeamStatsTracker::globalCVarManager = nullptr;


tst::TeamStatsTracker::TeamStatsTracker()
{
}

void tst::TeamStatsTracker::onLoad()
{
	// Set up logger and log that the plugin is detected
	Logger::GetInstance().SetCVarManagerWrapper( cvarManager );
	TST_LOG( exports.pluginName, " version: ", exports.pluginVersion );

	globalCVarManager = cvarManager;
}

void tst::TeamStatsTracker::onUnload()
{
}