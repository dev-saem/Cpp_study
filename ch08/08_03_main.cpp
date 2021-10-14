#include "h_08_03.h"

int main()
{
	Course c1;
	char CourseN[30];
	char ch = 'y', n[30], name[10][30];

	cout << "과정명 입력 : ";
	cin >> CourseN;

	c1.setCourseName(CourseN);
	
	while (ch == 'y' || ch == 'Y')
	{
		cout << "수강학생 이름 입력 : ";
		cin >> n;

		c1.setName(n);

		cout << "계속하시겠습니까?(y/n) ";
		cin >> ch;
	}
	
	c1.getCourseName(CourseN);
	cout << "과정명 : " << CourseN << endl;
	cout << "수강학생 명단 : " << endl;

	c1.getName(name);

	for (int i = 0; i < c1.getCount(); i++)
		cout << name[i] << " ";
	cout << endl;

	cout << "총 수강학생 수 : " << c1.getCount() << endl;

	return 0;
}