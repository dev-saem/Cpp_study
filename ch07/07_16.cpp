#include <iostream>
using namespace std;

void SWAP(int* a, int* b);

int main()
{
	int num1, num2;
	
	cout << "정수1 입력 : ";
	cin >> num1;

	cout << "정수2 입력 : ";
	cin >> num2;

	if (num1 < num2)
		SWAP(&num2, &num1);

	cout << "큰 정수 : " << num1 << "\n";
	cout << "작은 정수 : " << num2 << "\n";
	
	return 0;
}

void SWAP(int* a, int* b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}