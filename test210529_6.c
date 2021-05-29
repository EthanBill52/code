#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int func(int num) {
	int sum = 0;
	// µ±Ç°Ïî
	int cur = 0;
	for (int i = 1; i <= 5; i++) {
		cur = cur * 10 + num;
		sum += cur;
	}
	return sum;
}
int main() {
	printf("%d\n", func(2));
	return 0;
}