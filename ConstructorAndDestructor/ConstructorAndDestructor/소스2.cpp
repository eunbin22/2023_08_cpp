#include <cstdio>
#include <cstdlib>
int main() {

	int arr[20]; // 자동할당, 자동반납

	int* arr2 = (int*)malloc(sizeof(int) * 20);
	free(arr2);

	int* arr3 = new int[20]; 
	delete arr3;

	return 0;
}