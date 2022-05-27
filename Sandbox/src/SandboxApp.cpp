#include <Fulcrum.h>
#include <iostream>

class Sandbox : public Fulcrum::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}

	void Run()
	{
		for (int i = 0; i < 100; i++)
			std::cout << i << std::endl;
	}
};

Fulcrum::Application* Fulcrum::CreateApplication()
{
	return new Sandbox();
}