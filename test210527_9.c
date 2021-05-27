#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include<stdio.h>
// 二分查找
int binarySearch(int arr[], int size, int to_find) {
	int left = 0;
	int right = size - 1;
	while (left <= right) {
		int mid = (left + right) / 2;
		// 只针对升序排列的数组
		if (arr[mid] > to_find) {
			// 在左边找
			right = mid - 1;
		}
		if (arr[mid] < to_find) {
			// 在右边找
			left = mid + 1;
		}
		if (arr[mid] == to_find) {
			// 找到，返回元素下标
			return mid;
		}
	}
	// 没找到
	return -1;
}

int main() {
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int size = sizeof(arr) / sizeof(arr[0]);
	printf("result is %d\n", binarySearch(arr, size,6));
	return 0;
}