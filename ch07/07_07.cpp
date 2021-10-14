#include <iostream>
using namespace std;

int main()
{
	int a = 100, i;
	int *pa = &a;
	int arr[5] = { 1,2,3,4,5 };

	cout << "pa = " << pa << endl;	// 변수 a의 주소가 출력
	cout << "&a = " << &a << endl;	//. 변수 a의 주소가 출력
	cout << "*pa = " << *pa << endl;	// a의 값이 출력
	cout << "a = " << a << endl;	// a의 값이 출력

	cout << "*****************" << endl;
	pa = arr;

	for(i=0; i<5; i++)
		cout << "(pa+" << i << ") = " << pa+i << endl;	// 4바이트씩 증가한 주소 출력

	for (i = 0; i < 5; i++)
		cout << "&arr[" << i << "] = " << &arr[i] << endl;	// 배열의 주소 출력

	cout << "******************" << endl;
	cout << "&pa = " << &pa << endl;	// 기억장소의 확보된 공간의 주소 출력

	return 0;
}