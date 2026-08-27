#pragma once
#include "Charater.h"

#include <iostream>
class APlayer:public ACharater
{
public:
	APlayer()
	{
		this->Mesh = 'P';
		cout << "Player »ý¼º" << endl;
	}
	~APlayer()
	{
		cout << "Player ¼Ò¸ê" << endl;
	}
};

