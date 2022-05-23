#pragma once
#include"Actor.h"

//2차원 좌표에 자기 자신을 렌더링하고 출동하고 처리한다.
//입력을 처리한다.

class APlayer : public AActor
{
public:
	APlayer();
	APlayer(int NewX, int NewY, char NewShape, bool bNewCollision);
	virtual ~APlayer();

	virtual void Tick() override;


};

