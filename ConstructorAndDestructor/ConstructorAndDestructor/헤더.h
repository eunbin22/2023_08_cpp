#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <cmath>

int number_counter = 1;

class Employee {
public:
	int no;
	char* name;
	int gender;
	char* rank;

	Employee(char* name, int gender, char* rank){ // 생성자
		this->name = new char[strlen(name) + 1]; // 널문자까지
		this->rank = new char[strlen(rank) + 1];
		strcpy(this->name, name);
		this->gender = gender;
		strcpy(this->rank, rank);
		this->no = number_counter;
		number_counter++;
	}

	~Employee() { // 소멸자
		delete[] name;
		delete[] rank;
		printf("%d번 사원이 삭제되었습니다.\n", no);
	}

	void printInfo() {
		printf("사원번호 : %d\n", no);
		printf("사원명 : %s\n", name);
		printf("성별 : %s\n", gender == 0 ? "남성" : "여성");
		printf("직급 : %s\n", rank);
	}
};

int getInt(const char* prompt);

// 끝나면 메모리 해제 해줘야해 #### 필수
char* getString(const char* prompt);