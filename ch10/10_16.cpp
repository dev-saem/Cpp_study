#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	fstream fp;
	int score[5] = { 78, 96, 100, 25, 96 };

	fp.open("sample.txt", ios::out | ios::binary);	// 출력 이진파일 설정
	fp.write((char*)score, 20);	// score 위치에서 20바이트 출력
	fp.close();

	return 0;
}