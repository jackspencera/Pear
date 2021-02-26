#pragma once

#ifdef PEAR_PLATFORM_WINDOWS

extern Pear::App* Pear::CreateApp();

int main(int argc, char** argv)
{
	auto app = Pear::CreateApp();
	app->Run();
	delete app;
}

#endif // PEAR_PLATFORM_WINDOWS
