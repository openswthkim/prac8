/***************************************************************/
/*             HW#5 : �������� ��ü�� �������                 */
/*  �ۼ��� : ������                    ��¥ : 2023�� 5�� 07��  */
/*                                                             */
/* ���� ���� :   ���� �߻�ȭ�� color Ŭ������ �����ϰ�	       */
/*               ��� �� Ȱ���Ѵ�                              */
/***************************************************************/
#include <iostream>
using namespace std;

class Color {
	int red, green, blue;
public:
	Color() { red = green = blue = 0; } // �������� ��� ���� red,green,blue �� 0���� �ʱ�ȭ
	Color(int r, int g, int b) { red = r; green = g; blue = b; } // ��� ������ ���ڷ� �ʱ�ȭ
	void setColor(int r, int g, int b) { red = r; green = g; blue = b; }
	void show() { cout << red << ' ' << green << ' ' << blue << endl; }
};

int main() {
	Color screenColor(255, 0, 0); // �������� screenColor ��ü ����
	Color* p; // Color Ÿ���� ������ ���� p ����
	p = &screenColor; // (1) p�� screenColor�� �ּҸ� �������� �ڵ� �ۼ�
	p->show(); // (2) p�� show()�� �̿��Ͽ� screenColor �� ���
	Color colors[3]; // (3) Color�� ������ �迭 colors ����. ���Ҵ� 3��
	p = colors;// (4) p�� colors �迭�� ����Ű���� �ڵ� �ۼ�
	p->setColor(255, 0, 0);// (5) p�� setColor()�� �̿��Ͽ� colors[0], colors[1], colors[2]��
	(p + 1)->setColor(0, 255, 0);// ���� ����, �ʷ�, �Ķ����� �������� �ڵ� �ۼ�
	(p + 2)->setColor(0, 0, 255);
	// (6) p�� show()�� �̿��Ͽ� colors �迭�� ��� ��ü�� �� ���. for �� �̿�
	for (int i = 0; i < 3; i++) { // i�� 0 ���� 2���� �ݺ�
		(p + i)->show(); // 3���� ���� ���
	}
}