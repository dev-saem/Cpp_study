#include <iostream>
using namespace std;

int main()
{
	int a = 2147483645, b;

	b = a + 1;
	cout << "b = " << b << endl;

	b = a + 10;	// 최대는 7까지이기 때문에 오버로드 발생
	cout << "b = " << b << endl;

	return 0;
}