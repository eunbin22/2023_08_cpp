#include <cstdio>

//#define EXECUTE_NUM 1
#define EXECUTE_NUM

//#if EXECUTE_NUM == 0 
#ifdef EXECUTE_NUM // ���࿡ ���ǰ� �Ǿ����� �̰� ������. // �ݴ밳���� #ifndef EXECUTE_NUM //���ǵǾ����� �ʴٸ� �̰� ������.
int main() { //main.cpp���� main�� �ְ�, �ҽ�.cpp���� main�� �ִ� ��Ȳ. main �Լ��� �� ���� ���� ����. �ϳ��� ���忡�� �������ֱ�

	printf("Hello 0");

	return 0;
}
#else
int main() {

	printf("Hello 1");

	return 0;
}
#endif
// �� ���� �ȿ� main�� ���� ���� ��찡 �ǰ� ����. �׷� ��� ��ũ�θ� ���. ���ǿ� �´� �ϳ��� ����ǵ��� �ϸ� ��.
// ����ϰ� ����µ� ���� ��¦ �ٲ㼭 �׽�Ʈ�� �ؾ��ϴ� ���.
