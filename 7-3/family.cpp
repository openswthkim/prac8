/***************************************************************/
/*             HW#5 : �������� ��ü�� �������                 */
/*  �ۼ��� : ������                    ��¥ : 2023�� 5�� 07��  */
/*                                                             */
/* ���� ���� :   Person,Family Ŭ������ ���� �Ҵ��ϰ� 	       */
/*               ��� �� �޸� �����Ѵ�.                      */
/***************************************************************/

#include <iostream>
#include <string>
using namespace std;
class Person {
	string name;
public:
	Person() { name = ""; }
	Person(string name) { this->name = name; } // ��ü����� �Ű������� �ʱ�ȭ
	string getName() { return name; } // ������� ���� ����
	void setName(string name) { this->name = name; } // ������� name�� �����ϴ� �Լ�
};
class Family {
	string name;
	Person* p; // Person �迭 ������
	int size; // Person �迭�� ũ��. ���� ������ ��
public:
	Family(string name, int size);
	void setName(int index, string name);
	void show();
	~Family();
};
Family::Family(string name, int size) {
	p = new Person[size]; // size�� ũ�⸸ŭ �����迭 ����
	this->size = size; // size�� ��� ������ ����
	this->name = name; // name�� ��� ������ ����
}
void Family::show() {
	cout << name << " ������ ������ ���� " << size << "���Դϴ�." << endl;
	for (int i = 0; i < size; i++) {
		cout << p[i].getName() << "\t"; // person ��ü ���
	}
	cout << endl;
}
void Family::setName(int index, string name) {
	p[index].setName(name); // �ε����� �޾� person��ü �̸� ����
}
Family::~Family() {
	delete [] p; // �������� �Ҵ�� �޸� ����
}
int main() {
	Family* simpson = new Family("Simpson", 3); // 3������ ������ Simpson ���� ���� �Ҵ�
	simpson->setName(0, "Mr. Simpson");
	simpson->setName(1, "Mrs. Simpson");
	simpson->setName(2, "Bart Simpson");
	simpson->show();
	delete simpson; // �޸� ����
}