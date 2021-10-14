#include <iostream>
using namespace std;

int main()
{
	int num, abs;

	cout << "숫자 입력 : ";
	cin >> num;

	if (num < 0)
	{
		cout << "음수입니다." << endl;
		abs = num * -1;
	}
	else
	{
		cout << "양수입니다." << endl;
		abs = num;
	}
	cout << "절대값 : " << abs << endl;

	return 0;
}