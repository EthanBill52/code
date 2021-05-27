#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include<stdio.h>

int main() {
	// ´òÓ¡ 3 µÄ±¶Êý
	for (int i = 1; i < 100; i++) {
		if (i % 3 == 0) {
			printf("%d\n", i);
		}
	}
	return 0;
}