#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include<stdio.h>
#include<math.h>
// �ж��ǲ�������
int isPrime(int num) {
	// ���������� 1 ������������ 1 �� ������ ���⣬û����������
	for (int i = 2; i <= (int)sqrt(num); i++) {
		if (num % i == 0) {
			return 0;
		}
	}
	return 1;
}
int main() {
	for (int i = 2; i < 100; i++) {
		if (isPrime(i)) {
			printf("%d\n", i);
		}
	}
	return 0;
}