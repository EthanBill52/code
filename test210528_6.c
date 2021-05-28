#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include<stdio.h>
#include<string.h>
// 递归 字符串逆序
void reverseString1(char* str){
	// 核心思想：问题拆分
	// 交换左右两侧的字符，再递归处理中间的字符串
	int len = strlen(str);
	if (len == 0 || len == 1) {
		// 只有一个字符或者没有字符，就不用递归了
		return;
	}
	// 交换两侧的字符元素
	char tmp = str[0];
	str[0] = str[len - 1];
	// 获取中间字符串
	// 从 str+1, 到 len-1
	// 先把 len-1 位置设为 '\0'
	str[len - 1] = '\0';
	// 处理中间字符串
	reverseString1(str + 1);
	// 递归结束，就要把 len-1 位置还原回来
	str[len - 1] = tmp;
}
// 非递归 字符串逆序
void reverseString2(char* str) {
	int left = 0;
	// '\0' 的前一个元素对应的数组下标
	int right = strlen(str) - 1;
	while (left < right) {
		char tmp = str[left];
		str[left] = str[right];
		str[right] = tmp;
		left++;
		right--;
	}
}
int main() {
	char str[] = "hello";
	reverseString1(str);
	printf("%s\n", str);
	reverseString2(str);
	printf("%s\n", str);
	return 0;
}