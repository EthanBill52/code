#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void printLine(int blankCount, int starCount) {
	for (int i = 0; i < blankCount; i++) {
		printf(" ");
	}
	for (int i = 0; i < starCount; i++) {
		printf("*");
	}
	printf("\n");
}
int main() {
	for (int i = 1; i <= 4; i++) {
		printLine(4 - i, 2 * i - 1);
	}
	for (int i = 3; i >= 1; i--) {
		printLine(4 - i, 2 * i - 1);
	}
}