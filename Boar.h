#include <iostream>
#pragma once
#include "AActor.h"
class ABoar : public AActor
{
public:
	ABoar()
	{
		this->Mesh = 'P';
		cout << "Boar »ý¼º" << endl;
	}
	~ABoar()
	{
		cout << "Boar ¼Ò¸ê" << endl;
	}
};

