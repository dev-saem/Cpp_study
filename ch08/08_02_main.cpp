#include "h_08_02.h"

int main()
{
	Weight w1;

	w1.setHeight(175);
	w1.setWeight(87.5);

	cout << w1.getHeight() << "Ű�� ������ ";
	cout << w1.getWeight() << "�� ";

	switch (w1.getWeightStatus())
	{
	case 1:
		cout << "��ü��";
		break;
	case 0:
		cout << "����";
		break;
	case -1:
		cout << "��ü��";
		break;
	default:
		cout << "Ű �Է� ����!";
		;
	}

	cout << "�Դϴ�." << endl;

	return 0;
}