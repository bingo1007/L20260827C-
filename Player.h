#pragma once
#include "AActor.h"

#include <iostream>
using namespace std;

class APlayer:public AActor
{
public:
	APlayer()
	{
		this->CMesh = 'P';
		cout << "Player »ý¼º" << endl;
	}
	~APlayer()
	{
		cout << "Player ¼Ò¸ê" << endl;
	}
};

