#include<iostream>
#include "Player.h"
#include <string>

using namespace std;


int StringLength(char* String, int Size)
{
	int Length = 0;
	while (String[Length] != '\0' || Length<Size)
	{
		Length++;
		
	}

	return Length;
}

//int main()
//{
//	char C[1024] = "Hello World";
//
//	cout << StringLength(C, 1024) << endl;
//	return 0;
//}





//class UObject
//{
//public:
//};
//
//
//class AActor : public UObject
//{
//public:
//	int X;
//	int Y;
//	int Z;
//
//	char Mesh;
//};
//
//class ACharactor : public AActor
//{
//public:
//	void Move();
//};
//
//class APlayer : public ACharactor
//{
//public:
//};
//
//class AMonster : public AActor
//{
//public:
//	void Move();
//};
//
//class AWall : public AActor
//{
//public:
//};
//
//class AGoal : public AActor
//{
//public:
//};
//
//class AFloor : public AActor
//{
//public:
//};