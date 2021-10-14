#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main()
{
	fstream fp;
	int score;
	fp.open("sample.txt", ios::in | ios::binary);	// �Է�-��������
	if (fp.fail())	// ���Ͽ��� �����ϸ� ���α׷� ����
		return 1;

	while (fp.read((char*)&score, 4), !fp.eof())
		cout << setw(3) << right << score << endl;

	fp.close();

	return 0;
}