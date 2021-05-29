#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void swap(int* x, int* y) {
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
// √∞≈›≈≈–Ú£¨Ωµ–Ú
void bubbleSort(int arr[], int size) {
	for (int bound = 0; bound < size; bound++) {
		for (int cur = bound; cur < size - 1; cur++) {
			if (arr[cur] < arr[cur + 1]) {
				swap(&arr[cur], &arr[cur + 1]);
			}
		}
	}

}
int main() {
	int arr[] = { 1,9,2,8,3,7,4,6,5 };
	int size = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr, size);
	for (int i = 0; i < size; i++) {
		printf("%d\n", *(arr + i));
	}
	return 0;
}