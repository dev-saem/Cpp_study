#include "h_07_08.h"

bool MaxMin(int* max, int* min, const int num[], const int dataCount)
{
	int i;

	if (dataCount <= 0)	// 입력한 데이터가 없을 때
		return false;

	*max = *min = num[0];

	for (i = 1; i < dataCount; i++)
	{
		if (num[i] > *max)
			*max = num[i];
		if (num[i] < *min)
			*min = num[i];
	}
	return true;
}

int main()
{
	int data[5] = { 89,43,67,22,67 };
	int d_max; // 최대값
	int d_min; // 최소값

	if (MaxMin(&d_max, &d_min, data, 5))
	{
		cout << "최대값 : " << d_max << endl;
		cout << "최소값 : " << d_min << endl;
	}
	else
		cout << "데이터 개수 오류!" << endl;

	return 0;
}
