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
	}
	
	AGoblin* Goblin[2];
	for (int i = 0; i < 2; i++)
	{
		Goblin[i] = new AGoblin;
	}
	
	ABoar* WildBoar = new ABoar;



	MyPlayer->Move();

	for (int i = 0; i < 3; i++)
	{
		Slime[i]->Move();
	}

	AGoblin* Goblin[2];
	for (int i = 0; i < 2; i++)
	{
		Goblin[i]->Move();
	}

	WildBoar->Move();

	

	delete MyPlayer;
	delete Slime;
	delete Goblin;
	delete WildBoar;

	return 0;
}