#include "Header.h" // ������Ͽ� �ִ� ���� �ҷ���.

//int add(int a, int b); �Լ�����ε� ������Ϸ� �̵�

int main() {

	int v1 = 100;
	int v2 = 200;

	int rs = add(v1,v2);

	printf("rs : %d\n", rs);

	struct Person p1;
	p1.age = 22;
	printf("p1.age: %d\n", p1.age);


	printf("%f\n", pow((2.0), 10));

	printf("%f\n", sin(1)); // ���⼭ 1�� 1����(57.3��)��. ���� = ȣ��(���� ũ�⸦ ��)
	
	srand(time(0)); // �ǻ� ���� �õ� ���� -> �ǻ糭���� ���� �� �ΰ��� ���� ���־���Ѵ�.
	printf("%d\n", rand() % 10); // ������ ������ �ٸ� ���� �߻���Ŵ. (%10�� 10���� ������ �� ������ ������)

	int k = add(10, 20);
	printf("k: %d\n", k);

	return 0;
}

// main �ؿ� �ۼ�(�Լ� ����δ� ������Ͽ� ���ֱ�)

int add(int a, int b) {
	return a + b;
}