#include<iostream>
using namespace std;

void SelectNum(int number[3], int pi) {
	while (true)
	{
		cout << "Player"<< pi << "의 수를 입력하세요: ";
		cin >> number[0] >> number[1] >> number[2];
		//예외 처리.

		if (number[0] < 1 || number[0] > 9 ||
			number[1] < 1 || number[1] > 9 ||
			number[2] < 1 || number[2] > 9)
		{
			cout << "잘못된 숫자를 입력하였습니다. 1-9 범위의 숫자를 입력하세요." << endl;
			continue;
		}
		//예외 처리2
		else if (number[0] == number[1] ||
			number[1] == number[2] ||
			number[2] == number[0])
		{
			cout << "중복된 숫자를 입력하였습니다. 1-9 범위의 중복이 아닌 숫자 3개를 입력하세요." << endl;
			continue;
		}
		else
			break;
	}
}

void Player1() {

}

int main() {
	int number1[3], number2[3];
	
	SelectNum(number1, 1);
	system("cln");
	SelectNum(number2, 2);
	for (int i = 0; i < 3; i++)
	{
		cout << number1[i];
	}	for (int i = 0; i < 3; i++)
	{
		cout << number2[i];
	}


	int iStrike1 = 0, iBall1 = 0;
	int iCnt1 = 1;
	int iInput1[3];

	int iStrike2 = 0, iBall2 = 0;
	int iCnt2 = 1;
	int iInput2[3];

	while (true)
	{
		cout << iCnt1 << " 회" << endl;
		cout << "1-9 숫자 중 숫자 3개를 입력하세요.(0: 종료): ";
		cin >> iInput1[0] >> iInput1[1] >> iInput1[2];

		//종료 조건
		if (iInput1[0] == 0 || iInput1[1] == 0 || iInput1[2] == 0)
			break;

		//예외 처리1
		else if (iInput1[0] < 1 || iInput1[0] > 9 ||
			iInput1[1] < 1 || iInput1[1] > 9 ||
			iInput1[2] < 1 || iInput1[2] > 9)
		{
			cout << "잘못된 숫자를 입력하였습니다. 1-9 범위의 숫자를 입력하세요." << endl;
			continue;
		}
		//예외 처리2
		else if (iInput1[0] == iInput1[1] ||
			iInput1[1] == iInput1[2] ||
			iInput1[2] == iInput1[0])
		{
			cout << "중복된 숫자를 입력하였습니다. 1-9 범위의 중복이 아닌 숫자 3개를 입력하세요." << endl;
			continue;
		}

		iStrike1 = 0;
		iBall1 = 0;

		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (number2[i] == iInput1[j])
				{
					if (i == j) {
						iStrike1++;
					}
					else {
						iBall1++;
					}
				}
			}
		}

		if (iStrike1 >= 3) {
			std::system("cls"); //콘솔 화면 지우기
			cout << "축하합니다";
		}
		else if (iStrike1 == 0 && iBall1 == 0)
			cout << "Out입니다 " << endl;
		else
		{
			cout << "Strike: " << iStrike1 << " Ball: " << iBall1 << endl;
			iCnt1++;
		}



		cout << iCnt2 << " 회" << endl;
		cout << "1-9 숫자 중 숫자 3개를 입력하세요.(0: 종료): ";
		cin >> iInput2[0] >> iInput2[1] >> iInput2[2];

		//종료 조건
		if (iInput2[0] == 0 || iInput2[1] == 0 || iInput2[2] == 0)
			break;

		//예외 처리1
		else if (iInput2[0] < 1 || iInput2[0] > 9 ||
			iInput2[1] < 1 || iInput2[1] > 9 ||
			iInput2[2] < 1 || iInput2[2] > 9)
		{
			cout << "잘못된 숫자를 입력하였습니다. 1-9 범위의 숫자를 입력하세요." << endl;
			continue;
		}
		//예외 처리2
		else if (iInput2[0] == iInput2[1] ||
			iInput2[1] == iInput2[2] ||
			iInput2[2] == iInput2[0])
		{
			cout << "중복된 숫자를 입력하였습니다. 1-9 범위의 중복이 아닌 숫자 3개를 입력하세요." << endl;
			continue;
		}

		iStrike2 = 0;
		iBall2 = 0;

		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (number1[i] == iInput2[j])
				{
					if (i == j) {
						iStrike2++;
					}
					else {
						iBall2++;
					}
				}
			}
		}

		if (iStrike2 >= 3) {
			std::system("cls"); //콘솔 화면 지우기
			cout << "축하합니다";
		}
		else if (iStrike2 == 0 && iBall2 == 0)
			cout << "Out입니다 " << endl;
		else
		{
			cout << "Strike: " << iStrike2 << " Ball: " << iBall2 << endl;
			iCnt2++;
		}
	}
	std::system("cls"); //콘솔 화면 지우기

}