#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// ˮ�ɻ�����nλ���ĸ�λ����n�η���͵��������

// �����Ǹ���λ��
int digitCount(int num) {
	int count = 0;
	while (num) {
		count++;
		num /= 10;
	}
	return count;
}
// ���λ��n�η�֮��
int digitSum(int num) {
	int sum = 0;
	int digit = digitCount(num);
	for (int i = 0; i < digit; i++) {
		sum += pow(num % 10, digit);
		num /= 10;
	}
	return sum;
}
// �ж��ǲ���ˮ�ɻ���
int isNarc(num) {
	if (num == digitSum(num)) {
		return 1;
	}
	return 0;
}
int main() {
	for (int i = 1; i < 10 * 10000; i++) {
		if (isNarc(i)) {
			printf("%d\n",i);
		}
	}
	return 0;
}