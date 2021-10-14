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
	cout << "*** 객체 소멸 ***" << endl;
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
	cout << "키 : " << height << endl;
	cout << "몸무게 : " << weight << endl;
}

int main()
{
	CopyObj p1(181.5, 79.3);	// 객체 생성
	p1.ShowVar();

	cout << "******************" << endl;

	CopyObj *p2;
	p2 = &p1;
	p2->ShowVar();

	CopyObj* p3 = new CopyObj(189.8, 80.2);
	p3->ShowVar();

	delete(p3);	// p3 객체 소멸

	cout << "*****************" << endl;

	return 0;
}
