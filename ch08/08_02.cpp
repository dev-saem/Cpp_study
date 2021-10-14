#include "h_08_02.h"

void Weight::setHeight(const double h)
{
	height = h;
}

void Weight::setWeight(const double w)
{
	weight = w;
}

double Weight::getHeight()
{
	return height;
}

double Weight::getWeight()
{
	return weight;
}

int Weight::StdWeight()
{
	if (height <= 0)
	{
		WeightStatus = 2;	// 몸무게 상태를 계산하지 않음
		return 0;
	}

	double sw = (height - 110) * 0.9;	// 표준 몸무게 계산

	if (sw + 5 < weight)	// 과체중
		WeightStatus = 1;
	else if (sw - 5 > weight)	// 저체중
		WeightStatus = -1;
	else
		WeightStatus = 0;	// 정상체중
	
	return 1;
}

int Weight::getWeightStatus()	// 표준 몸무게 상태 return
{
	StdWeight();	// 표준 몸무게 계산
	return WeightStatus;	// return
}