#pragma once
#include <map>
#include <string>

namespace tst
{
	class Tracker 
	{
	public:
		Tracker();

		std::map<std::string, int> stats;
		
		void AddGoal(std::string goalPlayer, std::string assistPlayer);
	};
}