#include "h_11_02.h"

int main()
{
	StringCharArray one;	// ��ü ����
	char t_str[50];

	one.assign("sample");	// one�� ���� �߰�
	one.toCharArray(t_str);

	cout << one << endl;
	cout << t_str << endl;

	return 0;
}