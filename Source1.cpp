#include<iostream>

using namespace std;

class World
{
public:
	Wall wall;
	Floor floor;
	Player player;
	Monster monster;
	Goal goal;
};

class Wall
{
public:
	Vector2D Position;
	Shape Shape;
};

class Floor
{
public:
	Vector2D Position;
	Shape Shape;
};

class Player
{
public:
	Vector2D Position;
	Shape Shape;

	int Move();
	int GameOver();
};

class Monster
{
public:
	Vector2D Position;

	int Move();
	Shape Shape;
};

class Goal
{
public:
	Vector2D Position;
	Shape Shape;
};

class Vector2D
{
public:
	int X;
	int Y;
};

class Shape
{
public:
	char TextShape;
};



int main()
{
	World world;
	world.floor.Shape.TextShape = ' ';
	world.goal.Shape.TextShape = 'G';
	world.wall.Shape.TextShape = '*';
	return 0;
}