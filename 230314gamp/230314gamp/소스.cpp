#include<iostream>
#include<vector>
#include<Windows.h>
#include "소스.h"
using namespace std;

vector<int> v;

enum MODE
{
	EASY = 1,
	NORMAL,
	HARD
};

void RandNum(int n, int time) {
	for (int i = 0; i < n; i++)
	{
		int randN = rand() % 100 + 1;
		cout << randN << " ";
		v.push_back(randN);
		Sleep(time);
	}
	system("cls");
}

void SelectMode(int mode)
{
	int i = 1;
	while (i)
	{
		cin >> mode;
		switch (mode)
		{
		case EASY: {
			RandNum(5, 1000);
			i = 0;
			break;
		}
		case NORMAL: {
			RandNum(10, 700);
			i = 0;
			break;
		}
		case HARD: {
			RandNum(15, 500);
			i = 0;
			break;
		}
		default:
			cout << "잘못된 숫자입니다." << endl;
			break;
		}
	}
}

int main() {
	int mode=0, n;
	bool isWrong = false;

	srand((unsigned int)time(NULL));


	cout << "숫자 기억 게임입니다 모드를 선택하세요";
	SelectMode(mode);

	for (int i = 0; i < v.size(); i++)
	{
		//cout << v[i] << " ";
		cin >> n;
		if (v[i] != n) {
			isWrong = true;
		}
	}

	if (isWrong)
		cout << "실패!!";
	else
		cout << "축하합니다";
}