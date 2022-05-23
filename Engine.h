#pragma once
#include"World.h"


class Engine
{
public:
	Engine();
	virtual ~Engine();

	World* MyWorld;
	bool bRunning;
	
	void load();
	void Initialize();
	void Run();
	void Terminate();
};

