#pragma once

#include <memory>
#include <string>

#define TST_LOG(string) tst::Logger::GetInstance().Log(string);

class CVarManagerWrapper;

namespace tst // TeamStatsTracker
{

    // TODO : Upgrade Logger to support formatted strings (e.g : "int1: {0} ; string2: {1}")


	class Logger final
	{
    public:
        // Delete copy and copy assignment functionality
        Logger( Logger const & ) = delete;
        void operator=( Logger const & ) = delete;

        // Get the only existing instance of the Logger
        static Logger &GetInstance();

        // Sets up the cvar manager in the logger (can only be set once)
        static void SetCVarManagerWrapper( std::shared_ptr<CVarManagerWrapper> newCVarManager );

        // Log a string
        static void Log( std::string log );

    private:
        Logger()
        { }

        // Declare private properties
        static std::shared_ptr<CVarManagerWrapper> cvarManager;
	};
}