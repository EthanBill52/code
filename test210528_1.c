#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int menu() {
	printf("=-=-=-=-=-=-=-=\n");
	printf("1.��ʼ��Ϸ\n");
	printf("0.�˳���Ϸ\n");
	printf("=-=-=-=-=-=-=-=\n");
	int choice = 0;
	while (1) {
		printf("��ѡ�� 1/0 \n");
		scanf("%d", &choice);
		if (choice == 0 || choice == 1) {
			break;
		}
		printf("�����������������ԣ�\n");
	}
	system("cls");
	return choice;
}

// ��������Ϸ
void game() {
	// ���������һ�� 1~100 ֮�������
	// ����ʱ�����Ϊ�������
	srand((unsigned int)time(0));
	int to_guess = rand() % 100 + 1;
	int my_guess = 0;
	while (1) {
		printf("���������µ����֣�\n");
		scanf("%d", &my_guess);
		if (my_guess > to_guess) {
			printf("�´���~\n");
		}
		if (my_guess < to_guess) {
			printf("��С��~\n");
		}
		if (my_guess == to_guess) {
			printf("��ϲ�����¶���~");
			break;
		}
	}
}
int main() {
	while (1) {
		int choice = menu();
		if (choice) {
			game();
		}
		break;
	}
	return 0;
}