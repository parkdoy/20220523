#include "Engine.h"
#include"World.h"
#include"AWall.h"
#include"AFloor.h"
#include"APlayer.h"
#include"AGoal.h"

Engine::Engine()
{
	Initialize();
	

}

Engine::~Engine()
{
	Terminate();
}

void Engine::load()
{
	for (int i = 1; i <= 10; ++i)
	{
		MyWorld->MyActors.push_back(new AFloor(i, i, ' ', true));
	}

	for (int i = 1; i <= 10; ++i)
	{
		MyWorld->MyActors.push_back(new AWall(i, 1, '#', true));
		MyWorld->MyActors.push_back(new AWall(i, 10, '#', true));
	}

	for (int i = 2; i <= 9; ++i)
	{
		MyWorld->MyActors.push_back(new AWall(1, i, '#', true));
		MyWorld->MyActors.push_back(new AWall(10, i, '#', true));
	}

	MyWorld->MyActors.push_back(new AGoal(7, 7, 'G', true));
	MyWorld->MyActors.push_back(new APlayer(5, 5, 'P', true));
}

void Engine::Initialize()
{
	bRunning = true;
	MyWorld = new World();
}

void Engine::Run()
{
	World* MyWorld = new World();
}

void Engine::Terminate()
{
	delete MyWorld;
	MyWorld = nullptr;
}
