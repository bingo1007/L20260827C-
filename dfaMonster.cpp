//#include<iostream>
//
//using namespace std;
//
//////맵 생성
////int Map[10][10] =
////{
////	{1,1,1,1,1,1,1,1,1,1},
////	{1,0,0,0,0,0,0,0,0,1},
////	{1,0,0,0,0,0,0,0,0,1},
////	{1,0,0,0,0,0,0,0,0,1},
////	{1,0,0,0,0,0,0,0,0,1},
////	{1,0,0,0,0,0,0,0,0,1},
////	{1,0,0,0,0,0,0,0,0,1},
////	{1,0,0,0,0,0,0,0,0,1},
////	{1,0,0,0,0,0,0,0,0,1},
////	{1,1,1,1,1,1,1,1,1,1}
////};
////
////
//////정의만, 실행은 따로 호출해야 됨.
////void Render(int PlayerX, int PlayerY )
////{
////	system("cls");
////	for (int Y = 0; Y < 10; Y++)  //1이면 벽, 0이면 맵
////	{
////		for (int X = 0; X < 10; X++)
////		{
////			if (PlayerX == X && PlayerY == Y)  //플레이어 위치인지 확인
////			{
////				cout << "P";  //맞다면 플레이어 그림
////			}
////
////			else if (Map[Y][X] == 1)  //아니면 맵 그림
////			{
////				cout << "*";
////			}
////			else if (Map[Y][X] == 0)
////			{
////				cout << " ";
////			}
////		}
////		cout << endl;
////	}
////}
//////scope : 영역
////
////
////int Tick(char Move, int PlayerX, int PlayerY)
////{
////	switch (Move)
////	{
////	case 'd':
////		PlayerX++;
////		break;
////	case 's':
////		PlayerY++;
////		break;
////	case 'a':
////		PlayerX--;
////		break;
////	case 'w':
////		PlayerY--;
////		break;
////	case 'q':
////		return 0;
////	default:
////		break;
////	}
////}
////
////char Input()
////{
////	char Move;
////	cin >> Move;
////	return Move;
////}
////
////
////int main()
////{
////	
////
////	//플레이어 시작점
////	int PlayerX = 1;
////	int PlayerY = 1;
////
////
////	char Move;
////
////	for (;;) {
////		//맵 그림
////		char Move = Input();
////		Tick(Move, PlayerX, PlayerY);
////		Render(PlayerX, PlayerY);
////	}
////
////}
//
//
//
////old -> 면접볼때 
//void swap(int* PA)
//{
//	*PA = 200;
//}
//
////
////C++ 
////modern ->
//void swap(int& A) 
//{
//	A = 20;
//}
//
//int main()
//{
//
//	int A = 100;
//	int** PP = 0;  //이중포인터
//	int* P = &A;  //A의 주소는 P
//	PP = &P;
//	**PP = 200;
//
//	cout << A << endl;
//	cout<<
//	P + 1;
//
//	return 0;
//}