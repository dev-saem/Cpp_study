#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main()
{
	fstream fp;
	int score;
	fp.open("sample.txt", ios::in | ios::binary);	// 입력-이진파일
	if (fp.fail())	// 파일열기 실패하면 프로그램 종료
		return 1;

	while (fp.read((char*)&score, 4), !fp.eof())
		cout << setw(3) << right << score << endl;

	fp.close();

	return 0;
}