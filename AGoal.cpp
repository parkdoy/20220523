#include "AGoal.h"

AGoal::AGoal()
{
}

AGoal::AGoal(int NewX, int NewY, char NewShape, bool bNewCollision)
	:AActor(NewX, NewY, NewShape, bNewCollision)
{
	
}

AGoal::~AGoal()
{
}

void AGoal::Tick()
{
}

