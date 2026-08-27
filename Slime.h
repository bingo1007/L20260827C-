#pragma once
#include "Monster.h"
class ASlime : public AMonster
{
public:
	ASlime()
	{
		this->Mesh = 'S';
		cout << "»ı¼º" << endl;
	}
	~ASlime()
	{

	}
};

