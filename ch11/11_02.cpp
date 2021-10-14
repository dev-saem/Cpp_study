#include "h_11_02.h"

void StringCharArray::toCharArray(char* str)
// const가 없으므로 값을 가져가는것이 목적
// 문자배열 시작 주소를 전달하기 위해 포인터변수
{
	int i, len = this->length();
	// this : StringCharArray 객체

	for (i = 0; i < len; i++)
		*(str + i) = this->at(i);
	// 문자를 배열에 추가

	*(str + i) = '\0';
	// 문자 배열은 항상 마지막에 null 추가
}