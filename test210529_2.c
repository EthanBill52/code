#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

// ��һ������������ 1 �ĸ���
int bin1Count(int num) {
	int count = 0;
	for (int i = 0; i < 32; i++) {
		if (num & (1 << i)) {
			count++;
		}
	}
	return count;
}
int main() {
	printf("%d\n", bin1Count(10));
	return 0;
}