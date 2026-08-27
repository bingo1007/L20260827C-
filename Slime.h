#pragma once
#include "Monster.h"
class ASlime : public AMonster
{
public:
	ASlime()
	{
		this->Mesh = 'S';
	}
	~ASlime()
	{

	}
};

