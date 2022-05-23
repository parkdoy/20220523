#pragma once
#include "Actor.h"
#include <vector>

using namespace std;

class World
{
public:
	World();
	virtual ~World();

	vector<AActor*> MyActors;

	void Render();
	void Tick();
};

