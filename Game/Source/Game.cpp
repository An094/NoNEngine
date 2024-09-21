#include <NoNEngine/Core/Entry.h>
#include <iostream>

#include <Core/Logger/Logger.h>

class Game : public NoNEngine::Application
{
public:
	Game(const NoNEngine::ApplicationConfiguration& config) : NoNEngine::Application(config)
	{

	}

	virtual bool Init() override
	{
		
		return true;
	}

	virtual void Shutdown() override
	{

	}
};

NoNEngine::Application* NoNEngine::CreateApplication()
{
	NoNEngine::ApplicationConfiguration appConfig;

	appConfig.Width = 600;
	appConfig.Height = 800;
	appConfig.Title = "NoNEngine v0.1";

	return new Game(appConfig);
}