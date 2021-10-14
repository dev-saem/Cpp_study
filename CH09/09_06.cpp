#include <iostream>
using namespace std;

class CopyObj
{
public:
	CopyObj(const double height, const double weight);
	~CopyObj();
	void ShowVar();

private:
	double height;
	double weight;
};

CopyObj::~CopyObj()
{
	cout << "*** ��ü �Ҹ� ***" << endl;
};

CopyObj::CopyObj(const double height, const double weight)
{
	this->height = height;
	// CopyObj::height = height;
	this->weight = weight;
};

void CopyObj::ShowVar()
{
	cout << "Ű : " << height << endl;
	cout << "������ : " << weight << endl;
}

int main()
{
	CopyObj p1(181.5, 79.3);	// ��ü ����
	p1.ShowVar();

	cout << "******************" << endl;

	CopyObj* p2;	// ��ü ����x, ��ü�� �ּҸ� ����ϴ� ����
	p2 = &p1;
	p2->ShowVar();

	CopyObj* p3 = new CopyObj(189.8, 80.2);
	p3->ShowVar();

	delete(p3);	// p3 ��ü �Ҹ�

	cout << "*****************" << endl;

	CopyObj& p4 = p1;	// �̹� ������ ��ü�� �ٸ��̸����� �θ��� ��
	// ����x, ������ �������� ����Ŵ
	p4.ShowVar();

	return 0;
}