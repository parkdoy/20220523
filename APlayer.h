#pragma once
#include"Actor.h"

//2���� ��ǥ�� �ڱ� �ڽ��� �������ϰ� �⵿�ϰ� ó���Ѵ�.
//�Է��� ó���Ѵ�.

class APlayer : public AActor
{
public:
	APlayer();
	APlayer(int NewX, int NewY, char NewShape, bool bNewCollision);
	virtual ~APlayer();

	virtual void Tick() override;


};

