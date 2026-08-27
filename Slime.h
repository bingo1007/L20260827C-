#pragma once
#include "AActor.h"

#include <iostream>
class ASlime : public AActor
{
public:
	ASlime()
	{
		this->Mesh = 'S';
		cout << "Slime »ý¼º" << endl;
	}
	~ASlime()
	{
		cout << "Slime ¼Ò¸ê" << endl;
	}
};

