#pragma once
#include "Charater.h"
class APlayer:public ACharater
{
public:
	APlayer()
	{
		this->Mesh = 'P';
		cout << "»ı¼º" << endl;
	}
	~APlayer()
	{

	}
};

