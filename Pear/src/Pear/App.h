#pragma once

#include "SysConfig.h"

namespace Pear {

class PEAR_API App
{
public:
	App();
	virtual ~App();

	void Run();
};

// To be implemented by the client
App* CreateApp();

}
