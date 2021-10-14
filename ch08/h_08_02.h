#ifndef _h_08_02_H
#define _h_08_02_H

#include <iostream>
using namespace std;

class Weight
{
public:	// 멤버함수
	void setHeight(const double h);
	void setWeight(const double w);
	double getHeight();
	double getWeight();	
	int getWeightStatus();

private:	// 멤버변수
	int StdWeight();	// 멤버함수지만 private로 선언
	double height, weight;
	int WeightStatus;
};

#else
#endif