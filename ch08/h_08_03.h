#ifndef _h_08_03_H
#define _h_08_03_H

#include <iostream>
using namespace std;

class Course
{
public:
	void setCourseName(const char c[]);
	void setName(const char n[]);
	int getCourseName(char c[]);
	int getName(char n[][30]);	// 열 크기는 명시
	int getCount();

private:
	char CourseName[30];
	char Name[10][30];
	int Count;
};

#else
#endif