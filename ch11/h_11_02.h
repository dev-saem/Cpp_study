#ifndef _h_11_02_h_
#define _h_11_02_h_

#include <iostream>
#include <string>
#define MAX 50
using namespace std;

class StringCharArray :public string
// string을 상속받는 StringCharArray
// 문자열 값을 문자배열에 넣어주는 기능
{
public:
	void toCharArray(char* str);
};

#else
#endif