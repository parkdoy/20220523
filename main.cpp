#include<iostream>
#include"World.h"
#include"AWall.h"
#include"AFloor.h"
#include"APlayer.h"
#include"AGoal.h"



int main()
{
	//initialize

	bool bRunning = true;
	World* MyWorld = new World();
	AWall* NewWall= new AWall(1,1,'#',true);


	//load

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

	MyWorld->MyActors.push_back(new AGoal(9,9,'G',true));
	MyWorld->MyActors.push_back(new APlayer(2,2,'P',true));

	//Running
	// 1 Frame
	while (bRunning)
	{
		MyWorld->Tick();
		MyWorld->Render();
	}

	//Terminate
	delete MyWorld;

	return 0;
}