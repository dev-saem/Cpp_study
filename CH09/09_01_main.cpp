#include "h_09_01.h"

int main()
{
	Student p1;	// ��ü ������ ������ �ڵ� ȣ��, �Ű����� ���� ������ ȣ��
	p1.ShowScore();	// �ʱ�ȭ ���� ���

	cout << "***************************" << endl;

	p1.setScore(99, 93, 89);
	p1.SumAverage();
	p1.ShowScore();

	cout << "***************************" << endl;

	Student p2(80, 56, 100);	// �Ű������� �ִ� ������ ȣ��
	p2.SumAverage();
	p2.ShowScore();

	return 0;
}