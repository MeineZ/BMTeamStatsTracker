#pragma once
#include <string>
#include <vector>

namespace tst
{
	class Team
	{
	public:
		std::vector<std::string> squad;

		void AddSquadMate();
		void RemoveSquadMate();
		void ResetSquad();
	};;
}