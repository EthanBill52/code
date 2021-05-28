#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include<stdio.h>
// µİ¹éÄ£Äâstrlen
int myStrlen1(char* str){
	if (*str == '\0') {
		return 0;
	}
	return 1 + myStrlen1(1 + str);
}
// ·Çµİ¹éÄ£Äâstrlen
int myStrlen2(char* str) {
	int count = 0;
	while (*str != '\0') {
		count++;
		str++;
	}
	return count;
}
int main() {
	printf("%d\n", myStrlen1("hello world!\n"));
	printf("%d\n", myStrlen2("hello world!\n"));
	return 0;
}