#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<math.h>
#include<stdio.h>
// ���������������ֵ
int maxNum(int a, int b) {
	return a > b ? a : b;
}

int main() {
	int num1 = 0;
	int num2 = 0;
	printf("��������������!\n");
	scanf("%d %d", &num1, &num2);
	printf("���ֵ��%d\n", maxNum(num1, num2));
	return 0;
}