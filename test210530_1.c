#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
	// 20 Ԫ������ 20 ƿ��ˮ
	// 2 ����ƿ�ӿ��Ի� 1 ƿ��ˮ
	int bottle = 20;
	int total = 20;
	while (bottle > 1) {
		total += bottle / 2;
		bottle = bottle / 2 + bottle % 2;
	}
	printf("%d\n", total);
	return 0;
}