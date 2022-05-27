#pragma once

#ifdef FC_PLATFORM_WINDOWS

extern Fulcrum::Application* Fulcrum::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Fulcrum::CreateApplication();
	app->Run();
	delete app;
}

#endif