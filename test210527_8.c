#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include<stdio.h>

int main() {
	// ��ӡ�˷��ھ���
	// һ��һ�д�ӡ
	// �� 9 �У��� i �д�ӡ i ��
	// col * row = col*row
	for (int row = 1; row <= 9; row++) {
		for (int col = 1; col <= row; col++) {
			printf("%d * %d = %d", col, row, row * col);
		}
		printf("\n");
	}
	return 0;
}