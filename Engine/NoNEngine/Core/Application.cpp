#include "Application.h"
#include <iostream>
#include "Core/Logger/Logger.h"


namespace NoNEngine
{
	Application::Application(const ApplicationConfiguration& config) : mConfig{ config }
	{
		Logger::Init();
	}

	void Application::Run()
	{
		std::cout << "App is running" << mConfig.Width << ", " << mConfig.Height << ", " << mConfig.Title << std::endl;
	}
}