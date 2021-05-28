#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include<stdio.h>
#include<string.h>
// 递归求 n 的 k 次方
int myPower(int n, int k) {
	if (k == 0) {
		return 1;
	}
	return n * myPower(n, k - 1);
}
int main() {
	printf("%d\n", myPower(2,10));
	return 0;
}