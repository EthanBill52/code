#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include<stdio.h>
// 1 ~ 100 ������������ 9 �ĸ���
int count9(int begin, int end) {
	int count = 0;
	for (int i = begin; i <= end; i++) {
		// 9 ���ܳ����� ��λ �� ʮλ
		if (i % 10 == 9) {
			count++;
		}
		if (i / 10 == 9) {
			count++;
		}
	}
	return count;
}
int main() {
	printf("1 ~ 100 �� %d �� 9\n", count9(1,100));
	return 0;
}