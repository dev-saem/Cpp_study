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
	:name("����ѹ�"), age(120)
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
	return name; // �ش�Ŭ������ ������� ��
	// �Ű��������� ���� �Լ������� �������� �ʾұ� ����
}

int Person::getAge()
{
	return this->age;
}

void Person::setName(const string name)
{
	this->name = name;
	// Person::name = name;
	// �� name : private�� name, �� name : �Ű������� name
}

void Person::setAge(const int age)
{
	this->age = age;
	// �ش� Ŭ������ age�� �Ű������� �����ϴ� age�Ҵ�
}

int main()
{
	Person p1, p2("���븸", 18);
	string name;
	int age;

	name = p1.getName();
	age = p1.getAge();

	cout << name << "  " << age << endl;
	cout << p2.getName() << "  " << p2.getAge() << endl;

	return 0;
}