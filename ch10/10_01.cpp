#include <iostream>
#include <string>	// ���ڿ� Ŭ���� ����� ���� ����
using namespace std;

int main()
{
	string s_name;	// ��Ʈ�� Ŭ������ ��ü ����
	s_name = "���ڿ�";	// ���Թ����� ���� ���ڿ� �Ҵ� ����

	cout << s_name << endl;
	cout << "���ڿ� ���� : " << s_name.length() << endl;	// 6

	s_name = s_name + "Ŭ����";	// ���ڿ� ������ ��� ����
	// s_name.append("Ŭ����");

	cout << s_name << endl;
	cout << "���ڿ� ���� : " << s_name.length() << endl;	// 12

	string str(s_name);	// ���������, ������ ����������� ����

	str.append("ComputerScience", 0, 8);
	cout << str << endl;	// ���ڿ�Ŭ����computer
	cout << str.length() << endl;	// 20
	cout << str.size() << endl;		// 20

	return 0;
}