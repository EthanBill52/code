#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

// 这是针对一个指定的范围进行逆置
void reverse(char* str, int len) {
	char* left = str;
	char* right = str + len - 1;
	while (left < right) {
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
void reverseString(char* input) {
	// 针对整个字符串逆序
	reverse(input, strlen(input));
	// 针对单词逆序
	char* start = input;
	while (*start != '\0') {
		char* end = start;
		while (*end != ' ' && *end != '\0') {
			end++;
		}
		reverse(start, end - start);
		// 这个单词你只完了后，将继续往后走
		if (*end == '\0') {
			break;
		}
		else {
			// 继续处理下一个单词
			start = end + 1;
		}
	}
}
int main() {
	char input[101] = { 0 };
	while (1) {
		// 读取字符串
		char* ret = gets(input); // 自动填充'\0'
		if (ret = NULL) {
			break;
		}
		reverseString(input);
		printf("%s\n", input);
	}

	
	return 0;
}