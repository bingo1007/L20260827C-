#pragma once
#include "AActor.h"

#include <iostream>

using namespace std;

class ASlime : public AActor
{
public:
	ASlime()
	{
		this->CMesh = 'S';
		cout << "Slime »ý¼º" << endl;
	}
	~ASlime()
	{
		cout << "Slime ¼Ò¸ê" << endl;
	}
};

