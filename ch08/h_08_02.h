#ifndef _h_08_02_H
#define _h_08_02_H

#include <iostream>
using namespace std;

class Weight
{
public:	// ����Լ�
	void setHeight(const double h);
	void setWeight(const double w);
	double getHeight();
	double getWeight();	
	int getWeightStatus();

private:	// �������
	int StdWeight();	// ����Լ����� private�� ����
	double height, weight;
	int WeightStatus;
};

#else
#endif