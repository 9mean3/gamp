#include<iostream>
#include<vector>
#include<Windows.h>
#include "�ҽ�.h"
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
			cout << "�߸��� �����Դϴ�." << endl;
			break;
		}
	}
}

int main() {
	int mode=0, n;
	bool isWrong = false;

	srand((unsigned int)time(NULL));


	cout << "���� ��� �����Դϴ� ��带 �����ϼ���";
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
		cout << "����!!";
	else
		cout << "�����մϴ�";
}