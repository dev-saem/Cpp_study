#include <iostream>
#include <string>
using namespace std;

int main()
{
	string course = "Computer!!!";
	int i;
	char ch;

	cout << "���ڿ� : " << course << endl;
	cout << "���� : " << course.length() << endl;

	for (i = 0; i < course.length(); i++)
	{
		ch = course.at(i);	// at() : ������ ��°�� ���ڿ��� �̷�� ���ڸ� ��ȯ
		if (ch >= 'a' && ch <= 'z')	// �ҹ���
			ch = ch - ('a' - 'A');	// �ҹ��� -> �빮��
		else if (ch >= 'A' && ch <= 'Z')	// �빮��
			ch = ch + ('a' - 'A');	// �빮�� -> �ҹ���
		else
			;
		cout << ch;
	}
	cout << endl;
	return 0;
}