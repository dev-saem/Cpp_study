#include "h_08_ex02.h"

int main()
{
	Triangle t1;
	double a, b, c;

	cout << "삼각형의 세변 입력 : ";
	cin >> a >> b >> c;

	t1.setSide1(a);
	t1.setSide2(b);
	t1.setSide3(c);

	t1.CalArea();

	cout << "삼각형의 세 변 : " << t1.getSide1() << ", " << t1.getSide2() << ", " << t1.getSide3() << endl;
	cout << "삼각형 면적 : " << t1.getArea() << endl;

	return 0;
}