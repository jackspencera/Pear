#include <Pear.h>

class TestEnv : public Pear::App
{
public:
	TestEnv()
	{

	}

	~TestEnv()
	{

	}
};

Pear::App* Pear::CreateApp()
{
	return new TestEnv();
}
