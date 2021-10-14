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
		WeightStatus = 2;	// ������ ���¸� ������� ����
		return 0;
	}

	double sw = (height - 110) * 0.9;	// ǥ�� ������ ���

	if (sw + 5 < weight)	// ��ü��
		WeightStatus = 1;
	else if (sw - 5 > weight)	// ��ü��
		WeightStatus = -1;
	else
		WeightStatus = 0;	// ����ü��
	
	return 1;
}

int Weight::getWeightStatus()	// ǥ�� ������ ���� return
{
	StdWeight();	// ǥ�� ������ ���
	return WeightStatus;	// return
}