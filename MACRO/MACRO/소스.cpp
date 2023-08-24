#include <cstdio>

//#define EXECUTE_NUM 1
#define EXECUTE_NUM

//#if EXECUTE_NUM == 0 
#ifdef EXECUTE_NUM // 만약에 정의가 되었으면 이걸 실행해. // 반대개념이 #ifndef EXECUTE_NUM //정의되어있지 않다면 이걸 실행해.
int main() { //main.cpp에도 main이 있고, 소스.cpp에도 main이 있는 상황. main 함수가 두 개일 수는 없음. 하나는 빌드에서 제외해주기

	printf("Hello 0");

	return 0;
}
#else
int main() {

	printf("Hello 1");

	return 0;
}
#endif
// 한 파일 안에 main이 여러 개인 경우가 되게 많다. 그런 경우 매크로를 사용. 조건에 맞는 하나만 실행되도록 하면 됨.
// 비슷하게 생겼는데 값만 살짝 바꿔서 테스트를 해야하는 경우.
