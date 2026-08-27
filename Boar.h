#include <iostream>
#pragma once
#include "AActor.h"
using namespace std;

class ABoar : public AActor
{
public:
	ABoar()
	{
		this->CMesh = 'P';
		cout << "Boar »ý¼º" << endl;
	}
	~ABoar()
	{
		cout << "Boar ¼Ò¸ê" << endl;
	}
};

