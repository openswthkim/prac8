/***************************************************************/
/*             HW#5 : 여러가지 객체의 생성방법                 */
/*  작성자 : 김태형                    날짜 : 2023년 5월 07일  */
/*                                                             */
/* 문제 정의 :   색을 추상화한 color 클래스를 선언하고	       */
/*               출력 및 활용한다                              */
/***************************************************************/
#include <iostream>
using namespace std;

class Color {
	int red, green, blue;
public:
	Color() { red = green = blue = 0; } // 생성자의 멤버 변수 red,green,blue 를 0으로 초기화
	Color(int r, int g, int b) { red = r; green = g; blue = b; } // 멤버 변수를 인자로 초기화
	void setColor(int r, int g, int b) { red = r; green = g; blue = b; }
	void show() { cout << red << ' ' << green << ' ' << blue << endl; }
};

int main() {
	Color screenColor(255, 0, 0); // 빨간색의 screenColor 객체 생성
	Color* p; // Color 타입의 포인터 변수 p 선언
	p = &screenColor; // (1) p가 screenColor의 주소를 가지도록 코드 작성
	p->show(); // (2) p와 show()를 이용하여 screenColor 색 출력
	Color colors[3]; // (3) Color의 일차원 배열 colors 선언. 원소는 3개
	p = colors;// (4) p가 colors 배열을 가리키도록 코드 작성
	p->setColor(255, 0, 0);// (5) p와 setColor()를 이용하여 colors[0], colors[1], colors[2]가
	(p + 1)->setColor(0, 255, 0);// 각각 빨강, 초록, 파랑색을 가지도록 코드 작성
	(p + 2)->setColor(0, 0, 255);
	// (6) p와 show()를 이용하여 colors 배열의 모든 객체의 색 출력. for 문 이용
	for (int i = 0; i < 3; i++) { // i가 0 부터 2까지 반복
		(p + i)->show(); // 3가지 색깔 출력
	}
}