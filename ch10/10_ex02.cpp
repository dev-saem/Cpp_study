#include "h_10_ex02.h"

int main()
{
	char fn[] = "sung.txt";
	OneStudent OneLine[MAX];
	fstream fp;
	int i, len;

	fp.open(fn, ios::in);	// �Է����� ���� ����
	if (fp.fail())
		return 0;

	i = 0;
	while (!fp.eof())	// ���� �о����
	{
		fp >> OneLine[i].name >> OneLine[i].score[0] >> OneLine[i].score[1] >> OneLine[i].score[2];
		i++;
	}

	len = i - 1;	// 0���� �����ϱ� ����
	for (i = 0; i < len; i++)	// ����, ��� ���
	{
		OneLine[i].sum = OneLine[i].score[0] + OneLine[i].score[1] + OneLine[i].score[2];
		OneLine[i].aver = OneLine[i].sum / 3.;
	}

	for (i = 0; i < len; i++)
	{
		cout << OneLine[i].name << "  " << setw(3) << OneLine[i].score[0];
		cout << "  " << setw(3) << OneLine[i].score[1];
		cout << "  " << setw(3) << OneLine[i].score[2];
		cout << "  " << setw(3) << OneLine[i].sum << "  " << OneLine[i].aver << endl;

	}
	fp.close();
	
	return 1;
}