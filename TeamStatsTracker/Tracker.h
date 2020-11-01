#pragma once
#include <map>
#include <string>

namespace tst
{
	class Tracker 
	{
	public:
		std::map<std::string, int> stats;
		
		void AddGoal(std::string goalPlayer, std::string assistPlayer);
	};
}