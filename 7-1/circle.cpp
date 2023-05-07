/***************************************************************/
/*             HW#5 : �������� ��ü�� �������                 */
/*  �ۼ��� : ������                    ��¥ : 2023�� 5�� 07��  */
/*                                                             */
/* ���� ���� :   3���� Circle ��ü�� ���� �迭�� �����ϰ�      */
/*               �������� �Է¹޾� ������ 100���� ū ����      */
/*               ������ �����                                 */
/***************************************************************/

#include <iostream>
using namespace std;

class Circle {
	int radius; // ���� ������ ��
public:
	void setRadius(int radius); // �������� �����Ѵ�.
	double getArea(); // ������ �����Ѵ�.
};

void Circle::setRadius(int radius) {
	this->radius = radius; // this�����͸� ����� ��� ������ radius���� �Ҵ�
}

double Circle::getArea() {
	return 3.14 * radius * radius; // ���� ���� ���
}

int main() {
	Circle cir[3] = {}; // 3���� Circle ��ü�� ���� �迭�� ����
	int radius; // ������ ���� ����
	int count = 0; // ���� ������ ������ ���� ���� �� �ʱ�ȭ
	
	for (int i = 0; i < 3; i++) {
		cout << "�� "<<i+1<<"�� ������ >>";
		cin >> radius; // �������� �Է¹���
		cir[i].setRadius(radius); // �Է� ���� ������ ���� Circle ��ü�� ����

		if (cir[i].getArea() > 100) { // ������ 100���� ũ�� count�� ����
			count++;
		}
	}
	cout << "������ 100���� ū �� " << count << "���Դϴ�.";
}