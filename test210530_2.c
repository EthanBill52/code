#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int maxNum(int x, int y) {
	return x > y ? x : y;
}
int minComMul(int x, int y) {
	for (int i = maxNum(x, y); i <= x * y; i++) {
		if (i % x == 0 && i % y == 0) {
			return i;
		}
	}
	return 0;
}
int main() {
	//while (1) {
	//	int x = 0;
	//	int y = 0;
	//	// �ж� scanf �ķ���ֵ����ʾ���������ݵĸ���
	//	int n = scanf("%d %d", &x, &y);
	//	if (n < 2) {
	//	//	// �û��������
	//		break;
	//	}
	//	printf("%d\n", minComMul(x, y));
	//}
	int x = 0;
	int y = 0;
	while ((scanf("%d %d", &x, &y)) != EOF) {
		printf("%d\n", minComMul(x, y));
	}	
	return 0;
}