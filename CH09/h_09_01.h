#ifndef _h_09_01_h_
#define _h_09_01_h_

#include <iostream>
using namespace std;

class Student
{
public:
	Student();	// 생성자 - 객체 생성시 매개변수가 없을 때 자동 호출
	Student(const int s1, const int s2, const int s3);	// 생성자 - 객체 생성시 세개의 정수형 매개변수가 있을 때 자동호출
	void setScore(const int s1, const int s2, const int s3);
	void ShowScore();
	void SumAverage();

private:
	int score[3], sum;
	double average;
};

#else
#endif