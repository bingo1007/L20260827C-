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
	MyPlayer->Mesh = 'P';

	AGoblin* Goblin = new AGoblin;
	Goblin->Mesh = 'G';
	ASlime* Slime = new ASlime;
	Slime->Mesh = 'S';
	ABoar* WildBoar = new ABoar;
	WildBoar->Mesh = 'W';

	delete Goblin;
	delete Slime;
	delete WildBoar;

	delete MyPlayer;

	return 0;
}