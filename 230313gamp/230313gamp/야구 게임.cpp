#include<iostream>
using namespace std;

int main() {
	srand((unsigned int)time(NULL));
	//���� �˰���
	int iNumber[9] = { };
	for (int i = 0; i < 9; i++)
		iNumber[i] = i + 1;

	int idx1, idx2, temp;
	for (int i = 0; i < 100; i++)
	{
		idx1 = rand() % 9;
		idx2 = rand() % 9;
		temp = iNumber[idx1];
		iNumber[idx1] = iNumber[idx2];
		iNumber[idx2] = temp;
	}
	cout << iNumber[0] << "\t" << iNumber[1] << "\t" << iNumber[2] << endl;

	int iStrike = 0, iBall = 0;
	int iCnt = 1;
	int iInput[3];

	while (true)
	{
		cout << iCnt << " ȸ" << endl;
		cout << "1-9 ���� �� ���� 3���� �Է��ϼ���.(0: ����): ";
		cin >> iInput[0] >> iInput[1] >> iInput[2];

		//���� ����
		if (iInput[0] == 0 || iInput[1] == 0 || iInput[2] == 0)
			break;

		//���� ó��1
		else if (iInput[0] < 1 || iInput[0] > 9 ||
			iInput[1] < 1 || iInput[1] > 9 ||
			iInput[2] < 1 || iInput[2] > 9)
		{
			cout << "�߸��� ���ڸ� �Է��Ͽ����ϴ�. 1-9 ������ ���ڸ� �Է��ϼ���." << endl;
			continue;
		}
		//���� ó��2
		else if (iInput[0] == iInput[1] ||
			iInput[1] == iInput[2] ||
			iInput[2] == iInput[0])
		{
			cout << "�ߺ��� ���ڸ� �Է��Ͽ����ϴ�. 1-9 ������ �ߺ��� �ƴ� ���� 3���� �Է��ϼ���." << endl;
			continue;
		}

		iStrike = 0;
		iBall = 0;

		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (iNumber[i] == iInput[j])
				{
					if (i == j) {
						iStrike++;
					}
					else {
						iBall++;
					}
				}
			}
		}

		if (iStrike >= 3) {
			system("cls"); //�ܼ� ȭ�� �����
			cout << "�����մϴ�";
		}
		else if (iStrike == 0 && iBall == 0)
			cout << "Out�Դϴ� " << endl;
		else
		{
			cout << "Strike: " << iStrike << " Ball: " << iBall << endl;
			iCnt++;
		}




	}
	system("cls"); //�ܼ� ȭ�� �����

}