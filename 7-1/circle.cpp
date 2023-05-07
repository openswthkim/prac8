/***************************************************************/
/*             HW#5 : 여러가지 객체의 생성방법                 */
/*  작성자 : 김태형                    날짜 : 2023년 5월 07일  */
/*                                                             */
/* 문제 정의 :   3개의 Circle 객체를 가진 배열을 선언하고      */
/*               반지름을 입력받아 면적이 100보다 큰 원의      */
/*               개수를 출력함                                 */
/***************************************************************/

#include <iostream>
using namespace std;

class Circle {
	int radius; // 원의 반지름 값
public:
	void setRadius(int radius); // 반지름을 설정한다.
	double getArea(); // 면적을 리턴한다.
};

void Circle::setRadius(int radius) {
	this->radius = radius; // this포인터를 사용해 멤버 변수에 radius값을 할당
}

double Circle::getArea() {
	return 3.14 * radius * radius; // 원의 면적 계산
}

int main() {
	Circle cir[3] = {}; // 3개의 Circle 객체를 가진 배열을 선언
	int radius; // 정수형 변수 선언
	int count = 0; // 원의 개수를 저장할 변수 선언 후 초기화
	
	for (int i = 0; i < 3; i++) {
		cout << "원 "<<i+1<<"의 반지름 >>";
		cin >> radius; // 반지름을 입력받음
		cir[i].setRadius(radius); // 입력 받은 반지름 값을 Circle 객체에 설정

		if (cir[i].getArea() > 100) { // 면적이 100보다 크면 count값 증가
			count++;
		}
	}
	cout << "면적이 100보다 큰 원 " << count << "개입니다.";
}