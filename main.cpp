#include<iostream>
#include "Monster.h"
#include "Player.h"
#include "Slime.h"
#include "Goblin.h"
#include "Boar.h"

using namespace std;


int main()
{
	APlayer* MyPlayer = new APlayer;
	
	ASlime* Slime[3];
	for (int i = 0; i < 3; i++)
	{
		Slime[i] = new ASlime;
		Slime[i]->Move();
	}
	
	AGoblin* Goblin[2];
	for (int i = 0; i < 2; i++)
	{
		Goblin[i] = new AGoblin;
		Goblin[i]->Move();
	}
	
	ABoar* WildBoar = new ABoar;
	

	delete MyPlayer;
	
	for (int i = 0; i < 3; i++)
	{
		delete Slime[i];
	}

	for (int i = 0; i < 2; i++)
	{
		delete Goblin[i];
	}

	delete WildBoar;

	return 0;
}