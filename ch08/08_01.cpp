#include "h_08_01.h"

void IntSample::ShowScore()
{
	cout << "���� : " << Score << endl;
}
// ShowScore()��� �Լ��� Score�� ������ IntSample Ŭ������ ����̹Ƿ� ��� ������ ���� ���� ����

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
	IntSample Obj;	// ��ü ����

	Obj.setScore(100);
	//Obj.ShowScore();
	cout << "���� : " << Obj.getScore() << endl;

	return 0;
}