#include "h_08_03.h"

int main()
{
	Course c1;
	char CourseN[30];
	char ch = 'y', n[30], name[10][30];

	cout << "������ �Է� : ";
	cin >> CourseN;

	c1.setCourseName(CourseN);
	
	while (ch == 'y' || ch == 'Y')
	{
		cout << "�����л� �̸� �Է� : ";
		cin >> n;

		c1.setName(n);

		cout << "����Ͻðڽ��ϱ�?(y/n) ";
		cin >> ch;
	}
	
	c1.getCourseName(CourseN);
	cout << "������ : " << CourseN << endl;
	cout << "�����л� ��� : " << endl;

	c1.getName(name);

	for (int i = 0; i < c1.getCount(); i++)
		cout << name[i] << " ";
	cout << endl;

	cout << "�� �����л� �� : " << c1.getCount() << endl;

	return 0;
}