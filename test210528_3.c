#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include<stdio.h>
// �ݹ��ӡ����ÿһλ
void print(int num) {
	if (num > 9) {
		print(num / 10);
	}
	printf("%d ", num % 10);
}
int main() {
	print(123);
	return 0;
}