#include <iostream>
using namespace std;

int main()
{
	int num, abs;

	cout << "���� �Է� : ";
	cin >> num;

	if (num < 0)
	{
		cout << "�����Դϴ�." << endl;
		abs = num * -1;
	}
	else
	{
		cout << "����Դϴ�." << endl;
		abs = num;
	}
	cout << "���밪 : " << abs << endl;

	return 0;
}