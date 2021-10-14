#include <iostream>
using namespace std;

int main()
{
	int inum1, inum2, iquotient, iremainder;
	double Dquo;
	inum1 = 100;
	inum2 = 34;

	iquotient = inum1 / inum2;
	iremainder = inum1 % inum2;

	Dquo = inum1 / (double)inum2;

	cout << inum1 << "/" << inum2 << "의 몫 : " << iquotient << endl;
	cout << inum1 << "/" << inum2 << "의 나머지 : " << iremainder << endl;
	cout << inum1 << "/" << inum2 << " = " << Dquo << endl;

	return 0;
}