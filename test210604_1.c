#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//定义一个函数指针，指向的函数有两个int形参并且返回一个函数指针，
//返回的指针指向一个有一个int形参且返回int的函数？
typedef int(*F)(int);
typedef F(*P)(int, int);
int main() {
	P p;
	int (*(*a)(int, int))(int);
	return 0;
}

// Cmp是函数指针的类型，返回值类型是 int,参数是 int ,int
// 符合排序要求返回1，否则返回0、
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
// size 表示数组元素中的个数
// unitSize 表示数组中每个元素的大小（本来是包含在数组类型里面的）
//void bubbleSortGeneral(void* arr, int size, int unitSize, Cmp cmp) {
//	for (int bound = 0; bound < size; bound++) {
//		for (int cur = size - 1; cur > bound; cur--) {
//			// 强制类型转换
//			char* carr = (char*)arr;
//			// 找到这两个元素
//			char* p1 = carr + (cur - 1) * unitSize;
//			char* p2 = carr + cur * unitSize;
//			if (cmp(p1, p2) != 1) {
//				// 现有一个临时空间
//				char* tmp = (char*)malloc(sizeof(char*) * unitSize);
//				// 把p1对应变量的内存拷贝到tmp
//				if (tmp != NULL) {
//					memcpy(tmp, p1, unitSize);
//					// 把p2对应变量的内存拷贝到p1
//					memcpy(p1, p2, unitSize);
//					// 把tmp对应变量的内存拷贝到p2
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