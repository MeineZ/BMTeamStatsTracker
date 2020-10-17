#pragma once

#include <memory>
#include <sstream>

#include <bakkesmod/wrappers/cvarmanagerwrapper.h>

// Concatinates a variable amount of entries to a stringstream and logs it to the BakkesMod console (if possible)
#define TST_LOG(...) std::stringstream logger_ss_unique(""); tst::Logger::GetInstance().AppendToStringStream(logger_ss_unique, __VA_ARGS__);  tst::Logger::GetInstance().Log(logger_ss_unique.str());

class CVarManagerWrapper;

namespace tst // TeamStatsTracker
{
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

        // Concatinates a variable amount of entries to a stringstream
        template<typename T, typename ...Args>
        void AppendToStringStream( std::stringstream &ss, T t, Args... args );

        // Logs a string to the BakkesMod console (if possible)
        void Log( std::string log );

    private:
        Logger()
        { }

        // Declare private properties
        static std::shared_ptr<CVarManagerWrapper> cvarManager;

        // Concatinates an entry to a stringstream
        template <typename T>
        void AppendToStringStream( std::stringstream &ss, T t );
	};

    template<typename T>
    inline void Logger::AppendToStringStream( std::stringstream &ss, T t )
    {
        ss << t;
    }

    // Declaration of the Log method
    template<typename T, typename ...Args>
    inline void Logger::AppendToStringStream(std::stringstream &ss, T t, Args ...args )
    {
        AppendToStringStream( ss, t );
        AppendToStringStream( ss, args... );
    }
}