#pragma once
#include "Monster.h"
class ABoar : public AMonster
{
public:
	ABoar()
	{
		this->Mesh = 'P';
		cout << "»ı¼º" << endl;
	}
	~ABoar()
	{

	}
};

