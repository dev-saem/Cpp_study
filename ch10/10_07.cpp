#include <iostream>
#include <string>
using namespace std;

int main()
{
	string newString1("ComputerScience");

	cout << "e�� ��ġ : " << newString1.find('e') << endl;
	cout << "8��° ���Ŀ��� e�� ��ġ : " << newString1.find('e', 8) << endl;

	newString1.assign("Test1Test2Test3Test4");
	string newString2("Test");
	cout << "Test�� ��ġ : " << newString1.find(newString2) << endl;
	cout << "5��° ���Ŀ��� Test�� ��ġ : " << newString1.find(newString2, 5) << endl;

	newString1.replace(0, 7, "REPLACE");
	cout << newString1 << endl;


	return 0;
}
