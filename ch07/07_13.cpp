#include <iostream>
using namespace std;

int main()
{
	int score, i, sum;
	sum = 0;

	for (i = 0; i < 3; i++)
	{
		cout << "����" << i+1 << " �Է� : ";
		cin >> score;
		sum += score;
	}
	cout << "������" << sum << "�Դϴ�." << endl;

	return 0;
}