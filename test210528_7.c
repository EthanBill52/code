#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include<stdio.h>
#include<string.h>
// 递归求数的每位之和
int digitSum1(unsigned int num) {
	if (num == 0) {
		return 0;
	}
	// 个位 + 递归
	return num % 10 + digitSum1(num / 10);
}
// 非递归求数的每位之和
int digitSum2(unsigned int num) {
	int sum = 0;
	// 取出每一位，进行累加即可
	while (num != 0) {
		// 取出个位
		sum += num % 10;
		num /= 10;
	}
	return sum;
}
int main() {
	printf("%d\n", digitSum1(1234));
	printf("%d\n", digitSum2(1234));
	return 0;
}
