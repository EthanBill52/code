#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
#include <string.h>
#include <assert.h>

#define max_person_info_size 20
// 通讯程序
typedef struct personinfo {
	char name[20];
	char phone[10];
}personinfo;

typedef struct addressbook {
	personinfo persons[max_person_info_size];
	int size;// person数组有效的元素个数
}addressbook;

void init(addressbook* address_book) {
	address_book->size = 0;
	memset(address_book->persons, 0, sizeof(address_book->persons));
}

int menu() {
	printf("================\n");
	printf(" 欢迎使用通信录程序\n");
	printf(" 1.查看所有联系人\n");
	printf(" 2.新增所有联系人\n");
	printf(" 3.查找联系人\n");
	printf(" 4.删除联系人\n");
	printf(" 5.修改联系人信息\n");
	printf("================\n");
	printf("请输入你的选择：");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}

void showpersoninfo(addressbook* address_book) {
	assert(address_book != NULL);
	printf("查看所有联系人...\n");
	for (int i = 0; i < address_book->size; i++) {
		personinfo* p = &address_book->persons[i];
		printf("[%d] %s\t%s\n", i, p->name, p->phone);
	}
	printf("共显示了 %d 条数据\n", address_book->size);
}

void addpersoninfo(addressbook* address_book) {
	assert(address_book != NULL);
	printf("新增联系人...\n");
	if (address_book->size >= max_person_info_size) {
		// 联系人已经满了
		printf("新增联系人失败\n");
	}
	// 把新联系人的信息，放到下标为 size 的元素上
	personinfo* p = &address_book->persons[address_book->size];
	printf("请输入新联系人的姓名：");
	scanf("%s", p->name);
	printf("请输入新联系人的电话：");
	scanf("%s", p->phone);
	address_book->size++;
	printf("新增联系人成功\n");
}

void findpersoninfo(addressbook* address_book) {
	assert(address_book != NULL);
	printf("根据姓名查找联系人...\n");
	printf("请输入要查找的联系人姓名：");
	char name[20] = { 0 };
	scanf("%s", name);
	for (int i = 0; i < address_book->size; i++) {
		personinfo* p = &address_book->persons[i];
		if (strcmp(p->name, name) == 0) {
			printf("[%d]%s\t%s\n", i, p->name, p->phone);
		}
	}
	printf("查找完毕\n");
}

void deletepersoninfo(addressbook* address_book) {
	assert(address_book != NULL);
	printf("删除联系人...\n");
	printf("请输入要删除的联系人序号：");
	int id = 0;
	scanf("%d", &id);
	if (id < 0 || id >= address_book->size) {
		printf("输入有误，删除失败\n");
		return;
	}
	// 使用最后一个元素替换掉要删除的元素，再删掉最后一个元素
	else if (id != address_book->size - 1) {
		address_book->persons[id] = address_book->persons[address_book->size - 1];
		address_book->size--;
	}
	else {
		address_book->size--;
	}
	printf("删除联系人成功\n");
	return;
}

void updatepersoninfo(addressbook* address_book) {
	assert(address_book != NULL);
	printf("修改联系人信息...\n");
	printf("请输入要修改的联系人序号：");
	int id = 0;
	scanf("%d", &id);
	if (id < 0 || id >= address_book->size) {
		printf("输入有误，修改失败\n");
		return;
	}
	personinfo* p = &address_book->persons[id];
	printf("请输入新联系人姓名：");
	scanf("%s", p->name);
	printf("请输入新联系人电话：");
	scanf("%s", p->phone);
	printf("修改成功\n");
	return;
}
typedef void(*func)(addressbook*);

int main() {
	addressbook address_book;
	init(&address_book);
	func arr[] = {
		NULL,
		showpersoninfo,
		addpersoninfo,
		findpersoninfo,
		deletepersoninfo,
		updatepersoninfo,
	};
	while (1) {
		int choice = menu();
		if (choice < 1 || choice >= sizeof(arr) / sizeof(arr[0])) {
			printf("非法choice\n");
			continue;
		}
		if (choice == 0) {
			printf("goodbye~\n");
			break;
		}
		arr[choice](&address_book);

	}

	return 0;
}