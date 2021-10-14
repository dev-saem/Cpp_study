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
	Person p1;

	cout << "�̸� : " << p1.getName() << endl;
	cout << "���� : " << p1.getAge() << endl;
	// �Ű������� �������� �ʾұ� ������ �ʱ�ȭ ���� ��µ�

	p1.setName("äġ��");
	p1.setAge(19);

	cout << "�̸� : " << p1.getName() << endl;
	cout << "���� : " << p1.getAge() << endl;

	Person p2("���븸", 18);
	cout << "�̸� : " << p2.getName() << endl;
	cout << "���� : " << p2.getAge() << endl;

	return 0;
}