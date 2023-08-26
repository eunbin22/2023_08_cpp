// 상속(inheritance)

struct Animal {
	int age = 1;
	int legs = 0;
	int arms = 0;
};

struct Person : public Animal{ // Person은 Animal의 상속을 받겠다.
	Person() {
		int legs = 2;
		int arms = 2;
	}
};

struct Dog : public Animal {
	Dog() {
		int legs = 4;
		int arms = 0;
	}
};

#include <cstdio>

int main() {

	Person p1;
	printf("p1.age : %d\n", p1.age); // 1 나옴.
	printf("p1.legs : %d\n", p1.legs); //물려주는 쪽의 속성을 물려받는 쪽이 그대로 물려받음. 0 나옴.
	printf("p1.arms : %d\n", p1.arms);

	Person* person;

	Animal* animal;

	animal = person; // person데이터가 animal에 들어갈 수 있음. animal이 더 상위개념. person = animal;은 불가능.

	person = (Person*)animal; //은 가능. 강제로 형변환을 시킬 수 있음. // casting -> 형변환 
	return 0;
}