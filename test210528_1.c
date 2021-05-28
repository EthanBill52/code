#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int menu() {
	printf("=-=-=-=-=-=-=-=\n");
	printf("1.开始游戏\n");
	printf("0.退出游戏\n");
	printf("=-=-=-=-=-=-=-=\n");
	int choice = 0;
	while (1) {
		printf("请选择 1/0 \n");
		scanf("%d", &choice);
		if (choice == 0 || choice == 1) {
			break;
		}
		printf("您的输入有误，请重试！\n");
	}
	system("cls");
	return choice;
}

// 猜数字游戏
void game() {
	// 先随机生成一个 1~100 之间的数字
	// 引入时间戳作为随机种子
	srand((unsigned int)time(0));
	int to_guess = rand() % 100 + 1;
	int my_guess = 0;
	while (1) {
		printf("请输入您猜的数字！\n");
		scanf("%d", &my_guess);
		if (my_guess > to_guess) {
			printf("猜大了~\n");
		}
		if (my_guess < to_guess) {
			printf("猜小了~\n");
		}
		if (my_guess == to_guess) {
			printf("恭喜您，猜对了~");
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