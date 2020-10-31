#pragma once

#include <bakkesmod/plugin/bakkesmodplugin.h>

namespace tst // TeamStatsTracker
{
	class TeamStatsTracker: public BakkesMod::Plugin::BakkesModPlugin
	{
	public:
		TeamStatsTracker();

		// Required plugin hooks
		virtual void onLoad();
		virtual void onUnload();

		static std::shared_ptr<CVarManagerWrapper> globalCVarManager;
	};
}

