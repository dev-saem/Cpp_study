#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream output;
	output.open("test_10_10.txt");
	output << "��ſ� ���α׷���!!!" << endl;
	output.close();

	return 0;
}