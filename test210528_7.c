#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include<stdio.h>
#include<string.h>
// �ݹ�������ÿλ֮��
int digitSum1(unsigned int num) {
	if (num == 0) {
		return 0;
	}
	// ��λ + �ݹ�
	return num % 10 + digitSum2(num / 10);
}
// �ǵݹ�������ÿλ֮��
int digitSum2(unsigned int num) {
	int sum = 0;
	// ȡ��ÿһλ�������ۼӼ���
	while (num != 0) {
		// ȡ����λ
		sum += num % 10;
		num /= 10;
	}
	return sum;
}
int main() {
	printf("%d\n", digitSum1(1234));
	printf("%d\n", digitSum2(1234));
	return 0;
}