#ifndef _h_08_01_H
#define _h_08_01_H

#include <iostream>
using namespace std;

class IntSample
{
public:
	void ShowScore();
	void setScore(const int s);
	int getScore();

private:
	int Score;
};
// 멤버 접근속성을 명시하지 않으면 private로 간주됨

#else
#endif