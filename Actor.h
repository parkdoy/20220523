#pragma once

//2���� ��ǥ�� �ڱ� �ڽ��� �������ϰ� �⵿�ϰ� ó���Ѵ�.
class AActor
{
public:
	AActor();
	AActor(int NewX, int NewY, char NewShape, bool bCollision = false);
	virtual ~AActor();

	char Shape;
	int X;
	int Y;
	bool bCollision;

	virtual void Tick();
	virtual void Render();

};

