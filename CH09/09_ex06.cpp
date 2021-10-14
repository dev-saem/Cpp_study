
#include <iostream>
#include <string>
using namespace std;

class Person
{
	friend void TEST(Person& p);
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

void TEST(Person& p)
{
	cout << p.name << endl;
	cout << p.age << endl;
	p.setAge(23);
	p.setName("�̻��");
}

int main()
{
	Person p1;

	TEST(p1);

	cout << "************" << endl;
	cout << p1.getName() << "  " << p1.getAge() << endl;

	Person *pp1 = new Person("������", 25);
	cout << "�̸� : " << pp1->getName() << endl;
	cout << "���� : " << pp1->getAge() << endl;

	delete(pp1);
	return 0;
}