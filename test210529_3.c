#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int bin1Count(int num) {
	int count = 0;
	for (int i = 0; i < 32; i++) {
		if ((1 << i) & num) {
			count++;
		}
	}
	return count;
}


// ��������������λ��ͬ�ĸ���
int binDifferCount(int num1,int num2) {
	// �ȵõ����������Ľ��
	int tmp = num1 ^ num2;
	// ���ж��������� 1 �ĸ���
	return bin1Count(tmp);
}
int main() {
	printf("%d\n", binDifferCount(0,1));
	return 0;
}