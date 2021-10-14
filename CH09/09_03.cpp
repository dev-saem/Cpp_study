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
	cout << "*** 按眉 家戈 ***" << endl;
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
	cout << "虐 : " << height << endl;
	cout << "个公霸 : " << weight << endl;
}

int main()
{
	CopyObj p1(181.5, 79.3);	// 按眉 积己
	p1.ShowVar();

	cout << "******************" << endl;

	CopyObj p2(p1);	// 按眉 积己, 汗荤 积己磊 龋免
	p2.ShowVar();

	return 0;
}