#include <iostream>
using namespace std;

int main()
{
	int a = 100, i;
	int *pa = &a;
	int arr[5] = { 1,2,3,4,5 };

	cout << "pa = " << pa << endl;	// ���� a�� �ּҰ� ���
	cout << "&a = " << &a << endl;	//. ���� a�� �ּҰ� ���
	cout << "*pa = " << *pa << endl;	// a�� ���� ���
	cout << "a = " << a << endl;	// a�� ���� ���

	cout << "*****************" << endl;
	pa = arr;

	for(i=0; i<5; i++)
		cout << "(pa+" << i << ") = " << pa+i << endl;	// 4����Ʈ�� ������ �ּ� ���

	for (i = 0; i < 5; i++)
		cout << "&arr[" << i << "] = " << &arr[i] << endl;	// �迭�� �ּ� ���

	cout << "******************" << endl;
	cout << "&pa = " << &pa << endl;	// �������� Ȯ���� ������ �ּ� ���

	return 0;
}