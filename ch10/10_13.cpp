#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream input;	// 입력 파일 객체 생성
	char word[50] = { 0, };

	input.open("test.txt");	// 출력 파일 열기

	if (input.fail())	// 파일 열기 실패일 경우
		return 1;

	while (input.eof() == false)	// eof파일이 아니면
	{
		input >> word;
		cout << word << endl;
	}

	input.close();	// 파일 닫기

	return 0;
}