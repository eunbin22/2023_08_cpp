#include <cstdio> 

#define SWAP(X , Y , T) T = X; X = Y; Y = T  // ������ ��Ģ. ��ũ�δ� �� �ٿ� ��������.
// X , Y , T�� ���̳� ���ڿ� ����� ���� ����. ��ū(token)�̶�� ��. ��Ģ�� �´� ������ ���ָ� ����.

#define P(X, Y) X##Y // �̾�ٿ��ִ� ����.

#define PI 3.141592  // ��� ó��



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

	//printf("== value swap �� == \n");
	//printf("v1 : %d\n", v1);
	//printf("v2 : %d\n", v2);

	///*temp = v1;  // T = v1;�� ���� ǥ��
	//v1 = v2;
	//v2 = temp;*/

	//SWAP(v1, v2, temp);

	//printf("== value swap �� ==\n");
	//printf("v1 : %d\n", v1);
	//printf("v2 : %d\n", v2);



	return 0;
}