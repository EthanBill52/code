#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
// ��������ʱ����
void swap(int* x, int* y) {
	*x += *y;
	*y = *x - *y;
	*x = *x - *y;
}
int main() {
	int num1 = 10;
	int num2 = 20;
	swap(&num1, &num2);
	printf("%d\n", num1);
	printf("%d\n", num2);
	return 0;
}