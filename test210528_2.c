#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include<stdio.h>
void swap(int* x,int* y) {
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
int main() {
	int num1 = 10;
	int num2 = 20;
	swap(&num1, &num2);
	printf("num1=%d,num2=%d", num1, num2);
	return 0;
}