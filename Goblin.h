#pragma once
#include "Monster.h"
class AGoblin : public AMonster
{
public:
	AGoblin()
	{
		this->Mesh = 'G';
		cout << "»ı¼º" << endl;
	}
	~AGoblin()
	{
		
	}
};

