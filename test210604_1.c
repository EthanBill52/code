#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//����һ������ָ�룬ָ��ĺ���������int�ββ��ҷ���һ������ָ�룬
//���ص�ָ��ָ��һ����һ��int�β��ҷ���int�ĺ�����
typedef int(*F)(int);
typedef F(*P)(int, int);
int main() {
	P p;
	int (*(*a)(int, int))(int);
	return 0;
}

// Cmp�Ǻ���ָ������ͣ�����ֵ������ int,������ int ,int
// ��������Ҫ�󷵻�1�����򷵻�0��
//typedef int(*Cmp)(int, int);
//int ascSort(int x, int y) {
//	return x < y ? 1 : 0;
//}
//int descSort(int x, int y) {
//	return x > y ? 1 : 0;
//}void bubbleSort(int arr[], int size, Cmp cmp) {
//	for (int bound = 0; bound < size; bound++) {
//		for (int cur = size - 1; cur > bound; cur--) {
//			if (cmp(arr[cur - 1], arr[cur]) != 1) {
//				int tmp = arr[cur];
//				arr[cur] = arr[cur - 1];
//				arr[cur - 1] = tmp;
//			}
//		}
//	}
//}
//typedef int(*Cmp)(void*, void*);
// size ��ʾ����Ԫ���еĸ���
// unitSize ��ʾ������ÿ��Ԫ�صĴ�С�������ǰ�����������������ģ�
//void bubbleSortGeneral(void* arr, int size, int unitSize, Cmp cmp) {
//	for (int bound = 0; bound < size; bound++) {
//		for (int cur = size - 1; cur > bound; cur--) {
//			// ǿ������ת��
//			char* carr = (char*)arr;
//			// �ҵ�������Ԫ��
//			char* p1 = carr + (cur - 1) * unitSize;
//			char* p2 = carr + cur * unitSize;
//			if (cmp(p1, p2) != 1) {
//				// ����һ����ʱ�ռ�
//				char* tmp = (char*)malloc(sizeof(char*) * unitSize);
//				// ��p1��Ӧ�������ڴ濽����tmp
//				if (tmp != NULL) {
//					memcpy(tmp, p1, unitSize);
//					// ��p2��Ӧ�������ڴ濽����p1
//					memcpy(p1, p2, unitSize);
//					// ��tmp��Ӧ�������ڴ濽����p2
//					memcpy(p2, tmp, unitSize);
//				}
//			}
//		}
//	}
//}
//int ascInt(const void* x, const void* y) {
//	//if (*(int*)x < *(int*)y) return -1;
//	//if (*(int*)x == *(int*)y) return 0;
//	//if (*(int*)x > *(int*)y) return 1;
//	return (*(int*)x - *(int*)y);
//}
//int main() {
//	int arr[] = { 1,9,2,8,3,7,4,6,5 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	//bubbleSortGeneral(arr, size, sizeof(arr[0]), ascInt);
//	qsort(arr, size, sizeof(arr[0]), ascInt);
//	for (int i = 0; i < size; i++) {
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}