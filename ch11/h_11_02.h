#ifndef _h_11_02_h_
#define _h_11_02_h_

#include <iostream>
#include <string>
#define MAX 50
using namespace std;

class StringCharArray :public string
// string�� ��ӹ޴� StringCharArray
// ���ڿ� ���� ���ڹ迭�� �־��ִ� ���
{
public:
	void toCharArray(char* str);
};

#else
#endif