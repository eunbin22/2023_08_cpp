#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <cstring>
#include <cstdlib>

// 접근지정자 : public, protected, private

// 상속
// 상속해주는 클래스의 변수, 함수를 외부에서도 활용할 수 있다.

class Animal {
public: // 누구나 접근 가능
// protected: // 외부에서 접근 불가, 대신 내부에서 접근 가능. 부모자식 관계라면 접근 가능.
// private: // 해당 클래스 내부 외에는 접근 불가. 상속 관계에서도 접근 불가능.
	int legs;
	char name[50];
// public:
	Animal(int legs, const char* name) {
		printf("동물 생성자 실행됨\n");
		this->legs = legs;
		strcpy(this->name, name);
	}

	void printInfo() {
		printf("다리의 갯수 : %d\n", legs);
		printf("이름 : %s\n", name);
	}
};

class Dog : public Animal {
public:
    Dog() : Animal(4, "개") {
		printf("개 생성자 실행됨\n");
	}
};

// 속성과 기능은 자식클래스가 부모클래스보다 더 많거나 같을 수 있다.
class Person : public Animal{
public:
	char regist_no[30];

	Person(const char* regist_no) : Animal(2, "사람") {
		printf("사람 생성자 실행됨\n");
		strcpy(this->regist_no, regist_no);
	}

	void printLegs() {
		printf("Person의 다리 : %d\n", this->legs);
	}
};

int main() {

	Animal* a;

	Person* p = new Person("1234-5678");
	p->printInfo();

	printf("p->legs : %d\n", p->legs);

	Dog* d = new Dog();
	d->printInfo();

	// a = p;는 가능(a가 부모클래스니까 p를 포함할 수 있음). p = a; 는 불가능.
	// a = d; 도 가능. // d = a;도 불가능.
	// 그러나 p = (Person*)a; 라고 하면 가능.(Person*)은 형변환(casting)임. 형변환의 결과는 개발자 책임.

	// p = (Person*)d; 도 가능.


	return 0;
}
