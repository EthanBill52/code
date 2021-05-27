#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include<stdio.h>

int main() {
	// 打印乘法口诀表
	// 一行一行打印
	// 共 9 行，第 i 行打印 i 列
	// col * row = col*row
	for (int row = 1; row <= 9; row++) {
		for (int col = 1; col <= row; col++) {
			printf("%d * %d = %d", col, row, row * col);
		}
		printf("\n");
	}
	return 0;
}