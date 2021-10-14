#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	fstream fs;
	fs.open("test_10_15.txt", ios::out);
	if (fs.fail())
		return 0;

	fs << "keyboard" << endl;
	fs << "monitor" << endl;

	fs.close();

	fs.open("test_10_15.txt", ios::app);
	fs << "desk" << endl;
	fs.close();

	fs.open("test_10_15.txt", ios::in);
	string temp;

	while (fs >> temp, !fs.eof())
	{
		cout << temp << endl;
	}
	fs.close();

	return 0;
}