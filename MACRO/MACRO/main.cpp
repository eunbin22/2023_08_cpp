#include <cstdio> 

#define SWAP(X , Y , T) T = X; X = Y; Y = T  // 법이자 규칙. 매크로는 한 줄에 끝내야함.
// X , Y , T는 값이나 문자열 취급을 하지 않음. 토큰(token)이라고 함. 규칙상 맞는 행위만 해주면 끝남.

#define P(X, Y) X##Y // 이어붙여주는 역할.

#define PI 3.141592  // 상수 처리



int main() {

	P(print, f("Hello World!\n"));

	float pi = PI;

	//for (int i = 1; i <= 5; i++) {
	//	printf("%d\n",i);
	//}

	//// value swap

	//int v1 = 100;
	//int v2 = 200;
	//int temp;

	//printf("== value swap 전 == \n");
	//printf("v1 : %d\n", v1);
	//printf("v2 : %d\n", v2);

	///*temp = v1;  // T = v1;과 같은 표현
	//v1 = v2;
	//v2 = temp;*/

	//SWAP(v1, v2, temp);

	//printf("== value swap 후 ==\n");
	//printf("v1 : %d\n", v1);
	//printf("v2 : %d\n", v2);



	return 0;
}