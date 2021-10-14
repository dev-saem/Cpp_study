#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
	Person();
	Person(const string name, const int age);
	string getName();
	int getAge();
	void setName(const string name);
	void setAge(const int age);

private:
	string name;
	int age;
};

Person::Person()
	:name("김수한무"), age(120)
{
	;
}

Person::Person(const string name, const int age)
{
	this->name = name;
	this->age = age;
}

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
	Person p1, p2("정대만", 18);
	string name;
	int age;

	name = p1.getName();
	age = p1.getAge();

	cout << name << "  " << age << endl;
	cout << p2.getName() << "  " << p2.getAge() << endl;

	return 0;
}