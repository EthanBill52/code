#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// 水仙花数：n位数的各位数的n次方求和等于这个数

// 求这是个几位数
int digitCount(int num) {
	int count = 0;
	while (num) {
		count++;
		num /= 10;
	}
	return count;
}
// 求各位数n次方之和
int digitSum(int num) {
	int sum = 0;
	int digit = digitCount(num);
	for (int i = 0; i < digit; i++) {
		sum += pow(num % 10, digit);
		num /= 10;
	}
	return sum;
}
// 判断是不是水仙花数
int isNarc(num) {
	if (num == digitSum(num)) {
		return 1;
	}
	return 0;
}
int main() {
	for (int i = 1; i < 10 * 10000; i++) {
		if (isNarc(i)) {
			printf("%d\n",i);
		}
	}
	return 0;
}