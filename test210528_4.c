#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include<stdio.h>
// µÝ¹éÇó½×³Ë
int factor1(int num) {
	if (num == 0 || num == 1) {
		return 1;
	}
	return num * factor1(num - 1);
}
// Ñ­»·Çó½×³Ë
int factor2(int num) {
	if (num == 0 || num == 1) {
		return 1;
	}
	int result = num;
	for (; num > 1; num--) {
		result *= num - 1;
	}
	return result;
}
int main() {
	printf("%d\n", factor1(6));
	printf("%d\n", factor2(6));
	return 0;
}