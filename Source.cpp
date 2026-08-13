#include <iostream>

using namespace std;

int main()
{
	//주머니에 공이 64개, 그중 6개를 뽑음
	//한판에 1000원

	srand((unsigned int)time(nullptr));

	int Balls[64] = { 0 };
	int random;
	for (int i = 0; i < 6; i++)
	{
		random = rand() % 64;
		if (Balls[random] == 1)
		{
			i--;
		}
		else
		{
			Balls[random] = 1;
			cout << random + 1 <<endl;
		}
	}

	int price = 1000;
	

	return 0;
}
