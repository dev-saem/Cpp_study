#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream input;
	char message[80];
	input.open("test_10_10.txt");
	input >> message;
	cout << message << endl;
	input.close();

	return 0;
}