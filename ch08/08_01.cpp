#include "h_08_01.h"

void IntSample::ShowScore()
{
	cout << "점수 : " << Score << endl;
}
// ShowScore()멤버 함수는 Score와 동일한 IntSample 클래스의 멤버이므로 멤버 변수를 직접 참조 가능

void IntSample::setScore(const int s)
{
	Score = s;
}

int IntSample::getScore()
{
	return Score;
}

int main()
{
	IntSample Obj;	// 객체 생성

	Obj.setScore(100);
	//Obj.ShowScore();
	cout << "점수 : " << Obj.getScore() << endl;

	return 0;
}