#include "h_11_02.h"

void StringCharArray::toCharArray(char* str)
// const�� �����Ƿ� ���� �������°��� ����
// ���ڹ迭 ���� �ּҸ� �����ϱ� ���� �����ͺ���
{
	int i, len = this->length();
	// this : StringCharArray ��ü

	for (i = 0; i < len; i++)
		*(str + i) = this->at(i);
	// ���ڸ� �迭�� �߰�

	*(str + i) = '\0';
	// ���� �迭�� �׻� �������� null �߰�
}