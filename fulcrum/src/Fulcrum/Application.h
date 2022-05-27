#pragma once

#include "Core.h"

namespace Fulcrum
{
	class FULCRUM_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	private:
	};

	// to be difined in Client
	Application* CreateApplication();
}
