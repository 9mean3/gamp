#include<iostream>
using namespace std;

int main() {
	cout << "====================" << endl;
	cout << " ��Ÿ���� ��ȭ ���� " << endl;
	cout << "====================" << endl;

	int iUpgrade = 0;
	cout << "���� ����� ��ΰ���?: ";
	cin >> iUpgrade;

	srand((unsigned int)time(NULL));
	float fPercent = rand() % 10001 / 100.f;
	cout << fPercent << endl;
	cout << "���� ���� Upgrade: " << iUpgrade << "��" << endl;
	cout << "��ȭ Ȯ�� Percent: " << iUpgrade << "%" << endl;
	cout << "��ȭ�Ͻðڽ��ϱ�? ��: 1, �ƴϿ�: 0" << endl;

	int iInput;
	cin >> iInput;

	if (iInput == 0)
		return 0;
	if (iUpgrade <= 2)
		if (fPercent <= 90.f)
			cout << "��ȭ ����" << endl;
		else
			cout << "��ȭ ����" << endl;

	if (iUpgrade >= 3 && iUpgrade <= 5)
		if (fPercent <= 50.f)
			cout << "��ȭ ����" << endl;
		else
			cout << "��ȭ ����" << endl;

	if (iUpgrade >= 6 && iUpgrade <= 9)
		if (fPercent <= 10.f)
			cout << "��ȭ ����" << endl;
		else
			cout << "��ȭ ����" << endl;

	if (iUpgrade >= 10)
		if (fPercent <= 1.f)
			cout << "��ȭ ����" << endl;
		else
			cout << "��ȭ ����" << endl;
	
}