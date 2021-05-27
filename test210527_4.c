#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include<stdio.h>
int minNum(int x, int y) {
	return x < y ? x : y;
}

// 暴力求解最大公因数
int maxDivisor(int num1, int num2) {
	// 两个数的最大公约数一定在 [1,min(num1,num2)] 之间
	for (int i = minNum(num1, num2); i >= 1; i--) {
		if (num1 % i == 0 && num2%i == 0) {
			return i;
		}
	}
}
int main() {
	int num1 = 0;
	int num2 = 0;
	printf("请输入两个整数！\n");
	scanf("%d %d", &num1, &num2);
	printf("最大公约数是 %d\n", maxDivisor(num1, num2));
	return 0;
}