#pragma once

#include "Hazel/Core/Core.h"

namespace Hazel {

	class HAZEL_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
	private:
		bool m_Running = true;
	};

	Application* CreateApplication();
}
