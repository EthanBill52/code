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
	// 先让用户输入两个整数
	int x = 0;
	int y = 0;
	printf("请输入两个整数！\n");
	scanf("%d %d", &x, &y);
	printf("请选择功能：\n1.加法 2.减法 3.乘法 4.除法\n");
	int choice = 0;
	scanf("%d", &choice);
	// 根据用户输入的选择调用函数
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
	//	printf("输入有误！\n");
	//}
	//printf("%d\n",ret);

	/* 转移表(表驱动) */
	typedef int(*F)(int, int);
	// 函数指针数组
	F arr[] = { NULL,add,sub,mul,division };
	ret = arr[choice](x, y);
	printf("%d\n", ret);
	return 0;
}