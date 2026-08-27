#pragma once
#include "AActor.h"
#include <iostream>
using namespace std;

class AGoblin : public AActor
{
public:
	AGoblin()
	{
		this->CMesh = 'G';
		cout << "»ý¼º" << endl;
	}
	~AGoblin()
	{
		
	}
};

