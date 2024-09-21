#include "Application.h"

int main()
{
	NoNEngine::Application* Application = NoNEngine::CreateApplication();

	if (Application->Init())
	{
		Application->Run();
	}

	Application->Shutdown();
	NON_FREE_MEMORY(Application);

	return 0;
}