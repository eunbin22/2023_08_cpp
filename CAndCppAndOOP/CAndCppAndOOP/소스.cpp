// c�� c++ �� ����
// c++�� ��� c�� ������ ��� ��ü������ �߰��ϸ� ����� ���� ����ӵ��� ������.

// �Ϲ������� �ٸ� ��ü���� ���� Ŭ������ ������ ������ �� ����. -> ��� �Լ��� Ŭ���� ���ο� �����Ѵ�.

// c++�� ��ü������ �����ϸ鼭 Ŭ������ ��� ���������� ������ �� �ִ�. (php js)

#include <iostream> 
#include <cstdlib>

struct Person {
	int age;
	int hp;

};

int main() {

	/*Person* p1 = (Person*)malloc(sizeof(Person)); //����ü Ȱ��
	free(p1);*/

	Person* p1 = new Person();
	delete(p1); //delete p1;�̶�� �� �� ����.


	//int* arr = (int*)malloc(sizeof(int) * 10); // �����Ҵ�
	//free(arr);

	int* arr = new int[10];
	delete(arr); // delete[] arr; �ε� ��.

	printf("Hello World!\n");

	/*std::cout << "Hello World!\n";*/



	return 0;
}