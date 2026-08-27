#pragma once
#include "AActor.h"
#include <iostream>
class AGoblin : public AActor
{
public:
	AGoblin()
	{
		this->Mesh = 'G';
		cout << "»ý¼º" << endl;
	}
	~AGoblin()
	{
		
	}
};

