#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

// �������һ��ָ���ķ�Χ��������
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
	// ��������ַ�������
	reverse(input, strlen(input));
	// ��Ե�������
	char* start = input;
	while (*start != '\0') {
		char* end = start;
		while (*end != ' ' && *end != '\0') {
			end++;
		}
		reverse(start, end - start);
		// ���������ֻ���˺󣬽�����������
		if (*end == '\0') {
			break;
		}
		else {
			// ����������һ������
			start = end + 1;
		}
	}
}
int main() {
	char input[101] = { 0 };
	while (1) {
		// ��ȡ�ַ���
		char* ret = gets(input); // �Զ����'\0'
		if (ret = NULL) {
			break;
		}
		reverseString(input);
		printf("%s\n", input);
	}

	
	return 0;
}