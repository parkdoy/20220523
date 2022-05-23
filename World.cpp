#include "World.h"

World::World()
{
}

World::~World()
{
	for (auto Actor : MyActors)
	{
		delete Actor;
	}
}

void World::Render()
{
	
	for (auto Actor : MyActors)
	{
		Actor->Render();
	}
}

void World::Tick()
{	

	/*
	for (int i = 0; i < MyActors.size(); ++i)
	{
		MyActors[i]->Tick();
	}



	for (vector<AActor*>::iterator iter = MyActors.begin(); iter != MyActors.end(); ++iter)
	{
		(*iter)->Tick();
	}
	*/

	for (auto Actor : MyActors) //AActor* Actor : MyActors
	{
		Actor->Tick();
	}
}
