#include <iostream>
using namespace std;

class CopyObj
{
public:
	CopyObj(const double h, const double w);
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

CopyObj::CopyObj(const double h, const double w)
{
	//is->height = height;
	//this->weight = weight;
	height = h;
	weight = w;
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

	CopyObj p2(p1);	// ��ü ����, ���� ������ ȣ��
	p2.ShowVar();

	return 0;
}