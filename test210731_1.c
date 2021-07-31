#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
#include <string.h>
#include <assert.h>

#define max_person_info_size 20
// ͨѶ����
typedef struct personinfo {
	char name[20];
	char phone[10];
}personinfo;

typedef struct addressbook {
	personinfo persons[max_person_info_size];
	int size;// person������Ч��Ԫ�ظ���
}addressbook;

void init(addressbook* address_book) {
	address_book->size = 0;
	memset(address_book->persons, 0, sizeof(address_book->persons));
}

int menu() {
	printf("================\n");
	printf(" ��ӭʹ��ͨ��¼����\n");
	printf(" 1.�鿴������ϵ��\n");
	printf(" 2.����������ϵ��\n");
	printf(" 3.������ϵ��\n");
	printf(" 4.ɾ����ϵ��\n");
	printf(" 5.�޸���ϵ����Ϣ\n");
	printf("================\n");
	printf("���������ѡ��");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}

void showpersoninfo(addressbook* address_book) {
	assert(address_book != NULL);
	printf("�鿴������ϵ��...\n");
	for (int i = 0; i < address_book->size; i++) {
		personinfo* p = &address_book->persons[i];
		printf("[%d] %s\t%s\n", i, p->name, p->phone);
	}
	printf("����ʾ�� %d ������\n", address_book->size);
}

void addpersoninfo(addressbook* address_book) {
	assert(address_book != NULL);
	printf("������ϵ��...\n");
	if (address_book->size >= max_person_info_size) {
		// ��ϵ���Ѿ�����
		printf("������ϵ��ʧ��\n");
	}
	// ������ϵ�˵���Ϣ���ŵ��±�Ϊ size ��Ԫ����
	personinfo* p = &address_book->persons[address_book->size];
	printf("����������ϵ�˵�������");
	scanf("%s", p->name);
	printf("����������ϵ�˵ĵ绰��");
	scanf("%s", p->phone);
	address_book->size++;
	printf("������ϵ�˳ɹ�\n");
}

void findpersoninfo(addressbook* address_book) {
	assert(address_book != NULL);
	printf("��������������ϵ��...\n");
	printf("������Ҫ���ҵ���ϵ��������");
	char name[20] = { 0 };
	scanf("%s", name);
	for (int i = 0; i < address_book->size; i++) {
		personinfo* p = &address_book->persons[i];
		if (strcmp(p->name, name) == 0) {
			printf("[%d]%s\t%s\n", i, p->name, p->phone);
		}
	}
	printf("�������\n");
}

void deletepersoninfo(addressbook* address_book) {
	assert(address_book != NULL);
	printf("ɾ����ϵ��...\n");
	printf("������Ҫɾ������ϵ����ţ�");
	int id = 0;
	scanf("%d", &id);
	if (id < 0 || id >= address_book->size) {
		printf("��������ɾ��ʧ��\n");
		return;
	}
	// ʹ�����һ��Ԫ���滻��Ҫɾ����Ԫ�أ���ɾ�����һ��Ԫ��
	else if (id != address_book->size - 1) {
		address_book->persons[id] = address_book->persons[address_book->size - 1];
		address_book->size--;
	}
	else {
		address_book->size--;
	}
	printf("ɾ����ϵ�˳ɹ�\n");
	return;
}

void updatepersoninfo(addressbook* address_book) {
	assert(address_book != NULL);
	printf("�޸���ϵ����Ϣ...\n");
	printf("������Ҫ�޸ĵ���ϵ����ţ�");
	int id = 0;
	scanf("%d", &id);
	if (id < 0 || id >= address_book->size) {
		printf("���������޸�ʧ��\n");
		return;
	}
	personinfo* p = &address_book->persons[id];
	printf("����������ϵ��������");
	scanf("%s", p->name);
	printf("����������ϵ�˵绰��");
	scanf("%s", p->phone);
	printf("�޸ĳɹ�\n");
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
			printf("�Ƿ�choice\n");
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