// ���(inheritance)

struct Animal {
	int age = 1;
	int legs = 0;
	int arms = 0;
};

struct Person : public Animal{ // Person�� Animal�� ����� �ްڴ�.
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
	printf("p1.age : %d\n", p1.age); // 1 ����.
	printf("p1.legs : %d\n", p1.legs); //�����ִ� ���� �Ӽ��� �����޴� ���� �״�� ��������. 0 ����.
	printf("p1.arms : %d\n", p1.arms);

	Person* person;

	Animal* animal;

	animal = person; // person�����Ͱ� animal�� �� �� ����. animal�� �� ��������. person = animal;�� �Ұ���.

	person = (Person*)animal; //�� ����. ������ ����ȯ�� ��ų �� ����. // casting -> ����ȯ 
	return 0;
}