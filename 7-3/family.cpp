/***************************************************************/
/*             HW#5 : 여러가지 객체의 생성방법                 */
/*  작성자 : 김태형                    날짜 : 2023년 5월 07일  */
/*                                                             */
/* 문제 정의 :   Person,Family 클래스를 동적 할당하고 	       */
/*               출력 후 메모리 해제한다.                      */
/***************************************************************/

#include <iostream>
#include <string>
using namespace std;
class Person {
	string name;
public:
	Person() { name = ""; }
	Person(string name) { this->name = name; } // 객체멤버를 매개변수로 초기화
	string getName() { return name; } // 멤버변수 리턴 받음
	void setName(string name) { this->name = name; } // 멤버변수 name을 설정하는 함수
};
class Family {
	string name;
	Person* p; // Person 배열 포인터
	int size; // Person 배열의 크기. 가족 구성원 수
public:
	Family(string name, int size);
	void setName(int index, string name);
	void show();
	~Family();
};
Family::Family(string name, int size) {
	p = new Person[size]; // size의 크기만큼 동적배열 생성
	this->size = size; // size를 멤버 변수에 저장
	this->name = name; // name을 멤버 변수에 저장
}
void Family::show() {
	cout << name << " 가족은 다음과 같이 " << size << "명입니다." << endl;
	for (int i = 0; i < size; i++) {
		cout << p[i].getName() << "\t"; // person 객체 출력
	}
	cout << endl;
}
void Family::setName(int index, string name) {
	p[index].setName(name); // 인덱스를 받아 person객체 이름 설정
}
Family::~Family() {
	delete [] p; // 동적으로 할당된 메모리 해제
}
int main() {
	Family* simpson = new Family("Simpson", 3); // 3명으로 구성된 Simpson 가족 동적 할당
	simpson->setName(0, "Mr. Simpson");
	simpson->setName(1, "Mrs. Simpson");
	simpson->setName(2, "Bart Simpson");
	simpson->show();
	delete simpson; // 메모리 해제
}