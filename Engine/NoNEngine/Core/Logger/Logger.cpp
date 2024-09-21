#include "Logger.h"

#include <spdlog/spdlog.h>
#include <spdlog/common.h>

namespace NoNEngine
{
	Shared<spdlog::logger> Logger::sCoreLogger = nullptr;
	Shared<spdlog::logger> Logger::sClientLogger = nullptr;

	void Logger::Init()
	{
		//Ex: [12:47:00] [NoNEngine::Application::Init:13] [NoNEngine] [thread 1000] Logger works
		spdlog::set_pattern("%^[%H:%M:%S] [%!:%#] [%n] [thread %t] %v%$");

		sCoreLogger = spdlog::stdout_color_mt("NoNEngine");
		sCoreLogger->set_level(spdlog::level::trace);

		sClientLogger = spdlog::stdout_color_mt("Client");
		sClientLogger->set_level(spdlog::level::trace);
	}
}