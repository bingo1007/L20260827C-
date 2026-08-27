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
	
	AGoblin* Goblin = new AGoblin;
	ASlime* Slime = new ASlime;
	ABoar* WildBoar = new ABoar;
	
	delete Goblin;
	delete Slime;
	delete WildBoar;

	delete MyPlayer;

	return 0;
}