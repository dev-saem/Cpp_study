#ifndef _h_09_01_h_
#define _h_09_01_h_

#include <iostream>
using namespace std;

class Student
{
public:
	Student();	// ������ - ��ü ������ �Ű������� ���� �� �ڵ� ȣ��
	Student(const int s1, const int s2, const int s3);	// ������ - ��ü ������ ������ ������ �Ű������� ���� �� �ڵ�ȣ��
	void setScore(const int s1, const int s2, const int s3);
	void ShowScore();
	void SumAverage();

private:
	int score[3], sum;
	double average;
};

#else
#endif