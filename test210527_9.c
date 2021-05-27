#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include<stdio.h>
// ���ֲ���
int binarySearch(int arr[], int size, int to_find) {
	int left = 0;
	int right = size - 1;
	while (left <= right) {
		int mid = (left + right) / 2;
		// ֻ����������е�����
		if (arr[mid] > to_find) {
			// �������
			right = mid - 1;
		}
		if (arr[mid] < to_find) {
			// ���ұ���
			left = mid + 1;
		}
		if (arr[mid] == to_find) {
			// �ҵ�������Ԫ���±�
			return mid;
		}
	}
	// û�ҵ�
	return -1;
}

int main() {
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int size = sizeof(arr) / sizeof(arr[0]);
	printf("result is %d\n", binarySearch(arr, size,6));
	return 0;
}