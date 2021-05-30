#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
	// 20 元可以买 20 瓶汽水
	// 2 个空瓶子可以换 1 瓶汽水
	int bottle = 20;
	int total = 20;
	while (bottle > 1) {
		total += bottle / 2;
		bottle = bottle / 2 + bottle % 2;
	}
	printf("%d\n", total);
	return 0;
}