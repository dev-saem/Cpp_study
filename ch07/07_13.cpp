#include <iostream>
using namespace std;

int main()
{
	int score, i, sum;
	sum = 0;

	for (i = 0; i < 3; i++)
	{
		cout << "점수" << i+1 << " 입력 : ";
		cin >> score;
		sum += score;
	}
	cout << "총점은" << sum << "입니다." << endl;

	return 0;
}