#include <iostream>
using namespace std;

int main()
{
	int a = 2147483645, b;

	b = a + 1;
	cout << "b = " << b << endl;

	b = a + 10;	// �ִ�� 7�����̱� ������ �����ε� �߻�
	cout << "b = " << b << endl;

	return 0;
}