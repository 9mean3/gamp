#include<iostream>
using namespace std;

void SelectNum(int number[3], int pi) {
	while (true)
	{
		cout << "Player"<< pi << "�� ���� �Է��ϼ���: ";
		cin >> number[0] >> number[1] >> number[2];
		//���� ó��.

		if (number[0] < 1 || number[0] > 9 ||
			number[1] < 1 || number[1] > 9 ||
			number[2] < 1 || number[2] > 9)
		{
			cout << "�߸��� ���ڸ� �Է��Ͽ����ϴ�. 1-9 ������ ���ڸ� �Է��ϼ���." << endl;
			continue;
		}
		//���� ó��2
		else if (number[0] == number[1] ||
			number[1] == number[2] ||
			number[2] == number[0])
		{
			cout << "�ߺ��� ���ڸ� �Է��Ͽ����ϴ�. 1-9 ������ �ߺ��� �ƴ� ���� 3���� �Է��ϼ���." << endl;
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
		cout << iCnt1 << " ȸ" << endl;
		cout << "1-9 ���� �� ���� 3���� �Է��ϼ���.(0: ����): ";
		cin >> iInput1[0] >> iInput1[1] >> iInput1[2];

		//���� ����
		if (iInput1[0] == 0 || iInput1[1] == 0 || iInput1[2] == 0)
			break;

		//���� ó��1
		else if (iInput1[0] < 1 || iInput1[0] > 9 ||
			iInput1[1] < 1 || iInput1[1] > 9 ||
			iInput1[2] < 1 || iInput1[2] > 9)
		{
			cout << "�߸��� ���ڸ� �Է��Ͽ����ϴ�. 1-9 ������ ���ڸ� �Է��ϼ���." << endl;
			continue;
		}
		//���� ó��2
		else if (iInput1[0] == iInput1[1] ||
			iInput1[1] == iInput1[2] ||
			iInput1[2] == iInput1[0])
		{
			cout << "�ߺ��� ���ڸ� �Է��Ͽ����ϴ�. 1-9 ������ �ߺ��� �ƴ� ���� 3���� �Է��ϼ���." << endl;
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
			std::system("cls"); //�ܼ� ȭ�� �����
			cout << "�����մϴ�";
		}
		else if (iStrike1 == 0 && iBall1 == 0)
			cout << "Out�Դϴ� " << endl;
		else
		{
			cout << "Strike: " << iStrike1 << " Ball: " << iBall1 << endl;
			iCnt1++;
		}



		cout << iCnt2 << " ȸ" << endl;
		cout << "1-9 ���� �� ���� 3���� �Է��ϼ���.(0: ����): ";
		cin >> iInput2[0] >> iInput2[1] >> iInput2[2];

		//���� ����
		if (iInput2[0] == 0 || iInput2[1] == 0 || iInput2[2] == 0)
			break;

		//���� ó��1
		else if (iInput2[0] < 1 || iInput2[0] > 9 ||
			iInput2[1] < 1 || iInput2[1] > 9 ||
			iInput2[2] < 1 || iInput2[2] > 9)
		{
			cout << "�߸��� ���ڸ� �Է��Ͽ����ϴ�. 1-9 ������ ���ڸ� �Է��ϼ���." << endl;
			continue;
		}
		//���� ó��2
		else if (iInput2[0] == iInput2[1] ||
			iInput2[1] == iInput2[2] ||
			iInput2[2] == iInput2[0])
		{
			cout << "�ߺ��� ���ڸ� �Է��Ͽ����ϴ�. 1-9 ������ �ߺ��� �ƴ� ���� 3���� �Է��ϼ���." << endl;
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
			std::system("cls"); //�ܼ� ȭ�� �����
			cout << "�����մϴ�";
		}
		else if (iStrike2 == 0 && iBall2 == 0)
			cout << "Out�Դϴ� " << endl;
		else
		{
			cout << "Strike: " << iStrike2 << " Ball: " << iBall2 << endl;
			iCnt2++;
		}
	}
	std::system("cls"); //�ܼ� ȭ�� �����

}