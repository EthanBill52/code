#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include<stdio.h>
#include<math.h>
// 判断是不是素数
int isPrime(int num) {
	// 素数：大于 1 的整数，除了 1 和 它自身 以外，没有其他因子
	for (int i = 2; i <= (int)sqrt(num); i++) {
		if (num % i == 0) {
			return 0;
		}
	}
	return 1;
}
int main() {
	for (int i = 2; i < 100; i++) {
		if (isPrime(i)) {
			printf("%d\n", i);
		}
	}
	return 0;
}