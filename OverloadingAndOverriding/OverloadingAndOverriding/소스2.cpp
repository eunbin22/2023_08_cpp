#define _CRT_SECURE_NO_WARNINGS
// 연산자 오버로딩 
#include <cstdio>
#include <cstring>

class Vector {
public:
	float X;
	float Y;

	Vector() {
		X = 0.0f;
		Y = 0.0f;
	}

	Vector(float x, float y) {
		this->X = x;
		this->Y = y;
	}

	void printInfo(float x, float y) {
		printf("%.2f , %.2f\n", x, y);
	}
};

// 벡터 덧셈
/*Vector operator+(Vector& v1, Vector& v2) {*/ // 값복사가 일어나지 않는다. 주소복사 -> 퍼포먼스가 좋다 // 연산자 오버로딩 : 정적으로 할당(스택얼로케이티드)했을 때만 동작한다.
Vector operator+(Vector v1, Vector v2) {
	return Vector(v1.X + v2.X, v1.Y + v2.Y);
}

int main() {

	Vector v1 = Vector(100,200);
	Vector v2 = Vector(1,2);

    Vector v3 = v1 + v2; // Vector가 기본자료형이 아니기 때문에 연산자 오버로딩이 필요함.

	v3.printInfo(v3.X,v3.Y);

	return 0;
}