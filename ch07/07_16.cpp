#include <iostream>
using namespace std;

void SWAP(int* a, int* b);

int main()
{
	int num1, num2;
	
	cout << "����1 �Է� : ";
	cin >> num1;

	cout << "����2 �Է� : ";
	cin >> num2;

	if (num1 < num2)
		SWAP(&num2, &num1);

	cout << "ū ���� : " << num1 << "\n";
	cout << "���� ���� : " << num2 << "\n";
	
	return 0;
}

void SWAP(int* a, int* b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}