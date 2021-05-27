#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include<stdio.h>
// 判断是不是闰年
int isLeapYear(int year) {
	// 普通闰年：能被 4 整除，不能被 100 整除
	if (year % 4 == 0 && year % 100 != 0) {
		return 1;
	}
	// 世纪闰年：能被 400 整除
	if (year % 400 == 0) {
		return 1;
	}
	return 0;
}
int main() {
	for (int i = 0; i < 2000; i++) {
		if (isLeapYear(i)) {
			printf("%d\n", i);
		}
	}
	return 0;
}