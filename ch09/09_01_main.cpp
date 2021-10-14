#include "h_09_01.h"

int main()
{
	Student p1;	// 객체 생성시 생성자 자동 호출, 매개변수 없는 생성자 호출
	p1.ShowScore();	// 초기화 값이 출력

	cout << "***************************" << endl;

	p1.setScore(99, 93, 89);
	p1.SumAverage();
	p1.ShowScore();

	cout << "***************************" << endl;

	Student p2(80, 56, 100);	// 매개변수가 있는 생성자 호출
	p2.SumAverage();
	p2.ShowScore();

	return 0;
}
