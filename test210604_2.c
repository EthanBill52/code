#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int add(int x, int y) {
	return x + y;
}
int sub(int x, int y) {
	return x - y;
}
int mul(int x, int y) {
	return x * y;
}
int division(int x, int y) {
	return x / y;
}
int main() {
	// �����û�������������
	int x = 0;
	int y = 0;
	printf("����������������\n");
	scanf("%d %d", &x, &y);
	printf("��ѡ���ܣ�\n1.�ӷ� 2.���� 3.�˷� 4.����\n");
	int choice = 0;
	scanf("%d", &choice);
	// �����û������ѡ����ú���
	int ret = 0;
	//if (choice == 1) {
	//	ret = add(x, y);
	//}
	//else if (choice == 2) {
	//	ret = sub(x, y);
	//}
	//else if (choice == 3) {
	//	ret = mul(x, y);
	//}
	//else if (choice == 4) {
	//	ret = division(x, y);
	//}
	//else {
	//	printf("��������\n");
	//}
	//printf("%d\n",ret);

	/* ת�Ʊ�(������) */
	typedef int(*F)(int, int);
	// ����ָ������
	F arr[] = { NULL,add,sub,mul,division };
	ret = arr[choice](x, y);
	printf("%d\n", ret);
	return 0;
}