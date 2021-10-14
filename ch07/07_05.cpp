#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int score[5][5] = {{15,68,98,0,0}, {64,77,100,0,0}, {33,64,98,0,0}, {78,42,98,0,0}, {66,88,11,0,0} };
	double avg[5] = { 0, };
	int i, j;

	for (i = 0; i < 5; i++)
	{
		score[i][3] = score[i][0] + score[i][1] + score[i][2];	// ����
		avg[i] = score[i][3] / 3.0;	// ���
		score[i][4] = 1;	// ����ʱ�ȭ
	}

	for (i = 0; i < 4; i++)	// ���
	{
		for (j = i + 1; j < 5; j++)
		{
			if (score[i][3] < score[j][3])
				score[i][4]++;
			else
				score[j][4]++;
		}
	}
	cout << "���	����1	����2	����3	����	���" << endl;

	for (i = 0; i < 5; i++)
	{
		cout << setw(3) << score[i][4] << "\t";
		for (j = 0; j < 4; j++)
			cout << score[i][j] << "\t";
		cout << avg[i] << endl;
	}

	return 0;	
}