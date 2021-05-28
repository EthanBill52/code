#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include<stdio.h>
#include<string.h>
// �ݹ� �ַ�������
void reverseString1(char* str){
	// ����˼�룺������
	// ��������������ַ����ٵݹ鴦���м���ַ���
	int len = strlen(str);
	if (len == 0 || len == 1) {
		// ֻ��һ���ַ�����û���ַ����Ͳ��õݹ���
		return;
	}
	// ����������ַ�Ԫ��
	char tmp = str[0];
	str[0] = str[len - 1];
	// ��ȡ�м��ַ���
	// �� str+1, �� len-1
	// �Ȱ� len-1 λ����Ϊ '\0'
	str[len - 1] = '\0';
	// �����м��ַ���
	reverseString1(str + 1);
	// �ݹ��������Ҫ�� len-1 λ�û�ԭ����
	str[len - 1] = tmp;
}
// �ǵݹ� �ַ�������
void reverseString2(char* str) {
	int left = 0;
	// '\0' ��ǰһ��Ԫ�ض�Ӧ�������±�
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