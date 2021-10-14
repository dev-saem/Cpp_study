#include <iostream>
using namespace std;

class SaleInf
{
	friend int CheckTax2(SaleInf& Obj);	// 프렌드 함수 선언

public:
	SaleInf(const double Income);
	double getTax();

private:
	double Income;
	double Tax;
};

SaleInf::SaleInf(const double Income)	// 생성자
{
	this->Income = Income;
}

double SaleInf::getTax()	// 멤버함수 정의
{
	return Tax;
}

int CheckTax2(SaleInf& Obj)
{
	if (Obj.Income <= 0)
		return 0;
	Obj.Tax = Obj.Income * 0.03;
	return 1;
}
// SaleInf:: 를 참조하지 않아도 에러x, private멤버 참조 가능 -> friend 함수이기 때문


int main()
{
	SaleInf s1(20.4);
	CheckTax2(s1);

	cout << "세금 : " << s1.getTax() << endl;

	return 0;
}
