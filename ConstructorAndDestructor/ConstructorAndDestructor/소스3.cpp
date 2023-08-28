// 어느 회사는 사원 관리시스템이 있다.
// 이 사원관리 시스템은 관리자에 의해 사원을 입력받아 등록할 수 있으며
// 사원은 각각 사원번호, 이름, 성별, 직급 이라는 속성을 갖고 있다.
// 관리자는 모든사원을 한번에 볼 수 있고
// 관리자에 의해 사원이 추가될 수 있으며 사원이 퇴사시 관리자에 의해 삭제될 수 있다.
// 삭제는 사원번호를 입력받아 퇴사처리를 할 수 있다
// 사원번호는 시스템에 의해 자동으로 관리되며 사원번호가 관리되는 방법은 자유롭게 구현할 수 있다 (100명)

#include "헤더.h"

int main() {

	Employee* employee[100]; // 사원을 저장할 공간 100개
	int count = 0; // 현재의 사원 숫자 저장

	// 사원 보기
	// 사원 등록
	// 사원 삭제
	// 프로그램 종료


	// 메인 루프가 하나 돌고, 그 안 쪽에서 명령어를 입력하는 칸, 명령어에 맞게 기능이 실행.
	while (true) {
		printf("명령어를 입력해주세요\n");
		printf("1. 사원보기\n");
		printf("2. 사원등록\n");
		printf("3. 사원삭제\n");
		printf("4. 프로그램종료\n");

		fseek(stdin, 0, SEEK_END);
		int input;
		scanf("%d", &input);

		if (input == 1) {
			printf("== 전체 사원 보기 ==\n");
			for (int i = 0; i < count; i++) { // 어디까지 채워져있는지 모르니까 count로 기억
				employee[i]->printInfo();
			}
			
		}
		else if (input == 2) {
			printf("== 사원 등록 ==\n");

			char* name = getString("사원명을 입력해주세요 : ");
			int gender = getInt("성별을 입력해주세요 : ");
			char* rank = getString("직급을 입력해주세요 : ");

			Employee* e = new Employee(name, gender, rank);
			
		}
		else if (input == 3) {
			printf("== 사원 삭제 ==\n");
			
		}
		else if (input == 4) {
			printf("== 프로그램 종료 ==\n");
			break;
		}
		else {
			printf("존재하지 않는 기능입니다.\n");
		}
	}


	return 0;
}

int getInt(const char* prompt) { // 사용자에게 숫자를 입력받는다.
	int input;
	printf("%s", prompt);
	fseek(stdin, 0, SEEK_END);
	scanf("%d", &input); // input이 단수개를 받을 거니까 주소가 있어야함.
	return input;
} // 입력 받은 정수값을 리턴

char* getString(const char* prompt) { // 사용자에게 문장열을 입력받는다.
	/*char input[100];*/ // 배열의 주소만 리턴하고 실질적인 배열은 사라지므로 동적할당을 해야한다.
	char* input = new char[100]; // 동적할당 // 힙 영역에 생기므로 위와 같은 문제가 생기지 않는다.
	printf("%s", prompt);
	fseek(stdin, 0, SEEK_END);
	scanf("%99[^\n]s",input); // 99개(마지막은 널문자가 들어와야하니까)의 문자를 받아서 String으로 input에 저장 // input은 배열의 첫번째 주소를 가리키는 거니까 input 앞에 &없음.
	return input;
} // 입력 받은 문장을 리턴