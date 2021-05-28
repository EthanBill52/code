#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include<stdio.h>
#include<string.h>
// µİ¹éÇóì³²¨ÄÇÆõ
int fib1(int num) {
	if (num == 1 || num == 2) {
		return 1;
	}
	return fib1(num - 1) + fib1(num - 2);
}
// ·Çµİ¹éÇóì³²¨ÄÇÆõ
int fib2(int num) {
	if (num == 1 || num == 2) {
		return 1;
	}
	int pre = 1;
	int ppre = 1;
	int now = pre + ppre;
	for (int i = 3; i <= num; i++) {
		now = pre + ppre;
		ppre = pre;
		pre = now;
	}
	return now;
}
int main() {
	printf("%d\n", fib1(5));
	printf("%d\n", fib2(5));
	return 0;
}