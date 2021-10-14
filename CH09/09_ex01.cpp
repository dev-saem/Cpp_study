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

	p1.setName("äġ��");
	p1.setAge(19);

	cout << "�̸� : " << p1.getName() << endl;
	cout << "���� : " << p1.getAge() << endl;

	return 0;
}