#include "Header.h" // 헤더파일에 있는 내용 불러옴.

//int add(int a, int b); 함수선언부도 헤더파일로 이동

int main() {

	int v1 = 100;
	int v2 = 200;

	int rs = add(v1,v2);

	printf("rs : %d\n", rs);

	struct Person p1;
	p1.age = 22;
	printf("p1.age: %d\n", p1.age);


	printf("%f\n", pow((2.0), 10));

	printf("%f\n", sin(1)); // 여기서 1은 1라디안(57.3도)임. 라디안 = 호도(각의 크기를 잼)
	
	srand(time(0)); // 의사 난수 시드 설정 -> 의사난수할 때는 이 두개를 같이 써주어야한다.
	printf("%d\n", rand() % 10); // 실행할 때마다 다른 수를 발생시킴. (%10은 10으로 나눴을 때 나머지 연산자)

	int k = add(10, 20);
	printf("k: %d\n", k);

	return 0;
}

// main 밑에 작성(함수 선언부는 헤더파일에 써주기)

int add(int a, int b) {
	return a + b;
}