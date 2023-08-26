#include <cstdio>

// 내가 해야하는 일 : 회사의 erp 시스템(전사적자원관리)구축
// 나이, 연봉, 이름, 혈액형, 이메일주소, 주민번호, 전화번호, 키, 몸무게, 결혼여부, 자녀유무, 유튜브계정닉네임... 
// 나이, 연봉, 이름, 이메일주소, 주민번호, 전화번호, 결혼여부, 자녀유무 추출. (속성들을 뽑아냄)
struct Person {
	int age;
	float salary;
	char name[100]; 

	void goToWork() {};
	void workOff() {}; 
	void vacation() {};
}; // 추상화(abstraction) : 객체의 공통적인 속성과 기능을 추출하여 정의하는 것. 공통 특성을 파악해 필요없는 특성을 제거하는 과정.

int main() {



	return 0;
}