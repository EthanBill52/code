#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include<stdio.h>
// 1 ~ 100 的所有整数中 9 的个数
int count9(int begin, int end) {
	int count = 0;
	for (int i = begin; i <= end; i++) {
		// 9 可能出现在 个位 和 十位
		if (i % 10 == 9) {
			count++;
		}
		if (i / 10 == 9) {
			count++;
		}
	}
	return count;
}
int main() {
	printf("1 ~ 100 有 %d 个 9\n", count9(1,100));
	return 0;
}