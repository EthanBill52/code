#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
// ��ӡ���������Ƶ�����λ��ż��λ
// Ҫȡ���������ĳ��ָ���Ķ�����λ
void getBits(int num) {
	// ��ȡ������λ����1��ʼ����1 3 5 7...��
	for (int i = 0; i < 32; i += 2) {
		if (num & (1 << i)) {
			printf("1 ");
		}
		else {
			printf("0 ");
		}
	}
	printf("\n");
	// ��ȡ��ż��λ����2��ʼ����2 4 6 8...��
	for (int i = 1; i < 32; i += 2) {
		if (num & (1 << i)) {
			printf("1 ");
		}
		else {
			printf("0 ");
		}
	}
}
int main() {
	getBits(10);
	return 0;
}