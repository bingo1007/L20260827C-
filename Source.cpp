#include <iostream>

using namespace std;

int main()
{
	//블랙잭
	//3장 3장, 숫자 계산 1 ~ 10, 그 이상은 10점


	int Player[3];
	int Computer[3];

	//카드 만들기
	int Cards[52];

	for (int i = 0; i < 52; i++)
	{
		Cards[i] = i + 1;
	}

	
	srand((unsigned int)time(nullptr));

	//카드 섞기
	for (int i = 0; i < 10000; i++)
	{
		int num1 = rand() % 52;
		int num2 = rand() % 52;
		int tmp;
		tmp = Cards[num1];
		Cards[num1] = Cards[num2];
		Cards[num2] = tmp;
	}

	//카드 번갈아가며 총 3장씩 배부
	for (int i = 1; i < 7; i++) // 1 2 3 4 5 6
	{
		if (i % 2 != 0)  //홀수면 플레이어 한 장
		{
			Player[i / 2] = Cards[i];  //1.3.5  =>  Player[0,1,2]
			
		}
		else  //짝수면 컴퓨터 한 장
		{
			Computer[i / 3] = Cards[i];  //2 4 6
			
		}
	}

	//뽑은 카드와 총합 출력
	//플레이어
	int PlayerSum = 0;
	int ComputerSum = 0;
	cout << "플레이어의 카드 : ";
	for (int i = 0; i < 3; i++)
	{
		cout << Player[i]<<" ";  //일단 뽑은 카드를 번호로(1~52) 보여줌(문양별로 식별)
		if (Player[i] % 13 >= 10 || Player[i] % 13 == 0)  //카드가 10,J,Q,K면 10으로 저장
		{
			PlayerSum += 10;
		}
		else  //그 이하면 그냥 번호로 저장
		{
			PlayerSum += Player[i] % 13;
		}
	}


	cout << endl << "플레이어 점수 : "<<PlayerSum<<endl;

	cout << endl << "===========================================" << endl<<endl;

	
	//컴퓨터
	cout << "컴퓨터의 카드 : ";
	for (int i = 0; i < 3; i++)
	{
		cout << Computer[i] << " ";
		if (Computer[i] % 13 >= 10 || Computer[i] % 13 ==0)
		{
			ComputerSum += 10;
		}
		else
		{
			ComputerSum += Computer[i] % 13;
		}
	}
	cout << endl << "컴퓨터의 점수 : " << ComputerSum<<endl<<endl;



	//결과 출력
	if (ComputerSum > 21 && PlayerSum > 21)
		cout << "승자는 없군요...";
	else if (ComputerSum > 21 && PlayerSum <= 21)
		cout << "승자는 Player!!";
	else if (PlayerSum > 21 && ComputerSum <= 21)
		cout << "승자는 Computer!!!";
	else
	{
		if (ComputerSum > PlayerSum)
			cout << "승자는 Computer!!";
		else if (ComputerSum < PlayerSum)
			cout << "승자는 Player!!";
		else
			cout << "무승부";
	}
	cout << endl << endl;







	/*int Balls[64] = { 0 };
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

	int price = 1000;*/
	

	return 0;
}
