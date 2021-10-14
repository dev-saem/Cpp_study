#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
	string getName();
	int getAge();
	void setName(const string name);
	void setAge(const int age);

private:
	string name;
	int age;
};

string Person::getName()
{
	//return this->name;
	return name; // 해당클래스의 멤버인줄 암
	// 매개변수에도 없고 함수에서도 선언하지 않았기 때문
}

int Person::getAge()
{
	return this->age;
}

void Person::setName(const string name)
{
	this->name = name;
	// Person::name = name;
	// 앞 name : private의 name, 뒤 name : 매개변수의 name
}

void Person::setAge(const int age)
{
	this->age = age;
	// 해당 클래스의 age에 매개변수를 전달하는 age할당
}

int main()
{
	Person p1;

	p1.setName("채치수");
	p1.setAge(19);

	cout << "이름 : " << p1.getName() << endl;
	cout << "나이 : " << p1.getAge() << endl;

	return 0;
}