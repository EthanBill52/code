#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include<stdio.h>

int main() {
	// ����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ
	double sum = 0.0;
	for (int i = 1; i <= 100; i++) {
		if (i % 2 == 0) {
			// ż����
			sum -= 1.0 / i;
		}
		else {
			// ������
			sum += 1.0 / i;
		}
	}
	printf("%lf\n", sum);
	return 0;
}