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
	cout << "*** 객체 소멸 ***" << endl;
};

CopyObj::CopyObj(const double height, const double weight)
{
	this->height = height;
	// CopyObj::height = height;
	this->weight = weight;
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

	CopyObj* p2;	// 객체 생성x, 객체의 주소를 기억하는 공간
	p2 = &p1;
	p2->ShowVar();

	CopyObj* p3 = new CopyObj(189.8, 80.2);
	p3->ShowVar();

	delete(p3);	// p3 객체 소멸

	cout << "*****************" << endl;

	CopyObj& p4 = p1;	// 이미 생성된 객체를 다른이름으로 부르는 것
	// 생성x, 동일한 기억공간을 가르킴
	p4.ShowVar();

	return 0;
}