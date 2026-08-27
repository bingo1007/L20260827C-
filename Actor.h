#pragma once
#include "Object.h"

class AActor : public UObject
{
public:
	int X;
	int Y;
	int Z;

	char Mesh;

	void Render();
};

