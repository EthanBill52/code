#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include<stdio.h>
int minNum(int x, int y) {
	return x < y ? x : y;
}

// ��������������
int maxDivisor(int num1, int num2) {
	// �����������Լ��һ���� [1,min(num1,num2)] ֮��
	for (int i = minNum(num1, num2); i >= 1; i--) {
		if (num1 % i == 0 && num2%i == 0) {
			return i;
		}
	}
}
int main() {
	int num1 = 0;
	int num2 = 0;
	printf("����������������\n");
	scanf("%d %d", &num1, &num2);
	printf("���Լ���� %d\n", maxDivisor(num1, num2));
	return 0;
}