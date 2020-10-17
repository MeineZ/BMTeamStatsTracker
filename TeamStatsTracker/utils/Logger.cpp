#include <utils/Logger.h>


std::shared_ptr<CVarManagerWrapper> tst::Logger::cvarManager = std::shared_ptr<CVarManagerWrapper>();

tst::Logger &tst::Logger::GetInstance()
{
	static Logger instance;
	return instance;
}

void tst::Logger::SetCVarManagerWrapper( std::shared_ptr<CVarManagerWrapper> newCVarManager )
{ 
	if( cvarManager != nullptr || newCVarManager == nullptr )
		return;

	cvarManager = newCVarManager;
}

void tst::Logger::Log( std::string log )
{ 
	if( cvarManager == nullptr )
		return;

	cvarManager->log( log );
}
