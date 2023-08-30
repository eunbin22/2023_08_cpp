// 판타지 게임의 적 캐릭터 설계를 하려고 한다,
// 고블린의 최대 체력은 60이며 공격력은 5이고 사정거리는 10이며 이동속도는 10이다
// 오크의 최대 체력은 80이며 공격력은 10이고 사정거리는 12이며 이동속도는 8이다
// 슬라임의 최대 체력은 100이며 공격력은 3이고 사정거리는 5이며 이동속도는 4이다
// 해골궁수의 최대 체력은 60이며 공격력은 20이고 사정거리는 50이며 이동속도는 3이다
//// => 개체 수가 4

// 이를 상속을 이용해 클래스 설계를 하여 코드를 작성해보자

// 모든 캐릭터는 자신의 이름이라는 속성이 존재하고
// printInfo라는 멤버 함수가 존재하며,
// 이 printInfo 라는 멤버 함수를 이용해 생성결과를 출력해보자.

#include "헤더.h"

int main() {
	Unit* units[10];

	srand(time(0)); // rand : 생성되는 개체가 무엇인지 모르게 하기 위함. 랜덤.

	for (int i = 0; i < 10; i++) {
		switch (rand() % 4) { // 조건문
		case 0:
			units[i] = new Goblin();
			break;
		case 1:
			units[i] = new Orc();
			break;
		case 2:
			units[i] = new Slime();
			break;
		case 3:
			units[i] = new SkeletonArcher();
			break;
		}
	}

	for (int i = 0; i < 10; i++) {
		units[i]->printInfo();
	}

	for (int i = 0; i < 10; i++) {
		delete units[i];
	}

	return 0;
}