#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str = "COMPUTER";
	int i;

	for (i = 0; i < (int)str.length(); i++)
	{
		cout << i << "��° ���� : " << str.at(i) << endl;
	}

	cout << "Programming ���ڿ� ���� : " << str.length() << endl;
	cout << "Programming ���ڿ� ���� : " << str.size() << endl;

	str.erase(6, 2); //���ڿ� 6��° ���� 2�� ���� ����
	cout << "str�� erase ���� ��� : " << str << endl;

	str.assign("COMPUTER");
	cout << "���ڿ� : " << str << endl;
	str.clear(); //���ڿ��� ��� ������
	cout << "���ڿ� : " << str << endl;

	return 0;
}
