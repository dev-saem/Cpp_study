#include "h_07_08.h"

bool MaxMin(int* max, int* min, const int num[], const int dataCount)
{
	int i;

	if (dataCount <= 0)	// �Է��� �����Ͱ� ���� ��
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
	int d_max; // �ִ밪
	int d_min; // �ּҰ�

	if (MaxMin(&d_max, &d_min, data, 5))
	{
		cout << "�ִ밪 : " << d_max << endl;
		cout << "�ּҰ� : " << d_min << endl;
	}
	else
		cout << "������ ���� ����!" << endl;

	return 0;
}
