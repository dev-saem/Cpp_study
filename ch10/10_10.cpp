#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream output;
	output.open("test_10_10.txt");
	output << "즐거운 프로그래밍!!!" << endl;
	output.close();

	return 0;
}