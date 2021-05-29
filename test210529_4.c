#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
// 打印整数二进制的奇数位和偶数位
// 要取出这个数的某个指定的二进制位
void getBits(int num) {
	// 先取出奇数位（从1开始数，1 3 5 7...）
	for (int i = 0; i < 32; i += 2) {
		if (num & (1 << i)) {
			printf("1 ");
		}
		else {
			printf("0 ");
		}
	}
	printf("\n");
	// 再取出偶数位（从2开始数，2 4 6 8...）
	for (int i = 1; i < 32; i += 2) {
		if (num & (1 << i)) {
			printf("1 ");
		}
		else {
			printf("0 ");
		}
	}
}
int main() {
	getBits(10);
	return 0;
}