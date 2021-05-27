#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include<stdio.h>
// �ж��ǲ�������
int isLeapYear(int year) {
	// ��ͨ���꣺�ܱ� 4 ���������ܱ� 100 ����
	if (year % 4 == 0 && year % 100 != 0) {
		return 1;
	}
	// �������꣺�ܱ� 400 ����
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