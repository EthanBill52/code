#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include<stdio.h>
// ���������Ӵ�С���
void func(int* num1, int* num2, int* num3) {
	// �ȱȽ� num1 �� num2
	if (*num1 < *num2) {
		int tmp = *num1;
		*num1 = *num2;
		*num2 = tmp;
	}
	// �ٱȽ� num1 �� num3
	if (*num1 < *num3) {
		int tmp = *num1;
		*num1 = *num3;
		*num3 = tmp;
	}
	// ���Ƚ� num2 �� num3
	if (*num2 < *num3) {
		int tmp = *num2;
		*num2 = *num3;
		*num3 = tmp;
	}
}
int main() {
	int num1 = 10;
	int num2 = 20;
	int num3 = 30;
	func(&num1, &num2, &num3);
	printf("%d > %d > %d\n", num1, num2, num3);
	return 0;
}