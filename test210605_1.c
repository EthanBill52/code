#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#define MAX_ROW 3
#define MAX_COL 3
int menu() {
	int choice = 0;
	printf("=-=-=-=-=-=-=-=\n");
	printf("= 1.开始游戏  =\n");
	printf("= 0.退出游戏  =\n");
	printf("=-=-=-=-=-=-=-=\n");
	while (1) {
		printf("请选择（1/0）:\n");
		scanf("%d", &choice);
		if (choice == 1 || choice == 0) {
			break;
		}
		printf("输入有误，请重新输入！\n");
	}
	return choice;
}
void init(char chessBoard[MAX_ROW][MAX_COL]) {
	memset(chessBoard, ' ', MAX_ROW * MAX_COL);
}
void print(char chessBoard[MAX_ROW][MAX_COL]) {
	system("cls");
	printf("+-+-+-+-+-+-+\n");
	for (int row = 0; row < MAX_ROW; row++) {
		printf("|");
		for (int col = 0; col < MAX_COL; col++) {
			printf(" %c |", chessBoard[row][col]);
		}
		printf("\n+-+-+-+-+-+-+\n");
	}
}
void playerMove(char chessBoard[MAX_ROW][MAX_COL]) {
	printf("请输入落子位置（row col）:\n");
	int row = 0;
	int col = 0;
	while (1) {
		scanf("%d %d", &row, &col);
		if (chessBoard[row][col] == ' ') {
			chessBoard[row][col] = 'x';
			break;
		}
		printf("输入有误，请重新输入！\n");
	}
}
void computerMove(char chessBoard[MAX_ROW][MAX_COL]) {
	while (1) {
		int row = rand() % MAX_ROW;
		int col = rand() % MAX_COL;
		if (chessBoard[row][col] == ' ') {
			chessBoard[row][col] = 'o';
			break;
		}
	}
}
int isFull(char chessBoard[MAX_ROW][MAX_COL]) {
	for (int row = 0; row < MAX_ROW; row++) {
		for (int col = 0; col < MAX_COL; col++) {
			if (chessBoard[row][col] == ' ') {
				return 0;
			}
		}
	}
	return 1;
}
char winner(char chessBoard[MAX_ROW][MAX_COL]) {
	for (int row = 0; row < MAX_ROW; row++) {
		if (chessBoard[row][0] != ' ' &&
			chessBoard[row][0] == chessBoard[row][1] &&
			chessBoard[row][0] == chessBoard[row][2]) {
			return chessBoard[row][0];
			}	
	}	
	for (int col = 0; col < MAX_COL; col++) {
		if (chessBoard[0][col] != ' ' &&
			chessBoard[0][col] == chessBoard[1][col] &&
			chessBoard[0][col] == chessBoard[2][col]) {
			return chessBoard[0][col];
		}
	}
	if (chessBoard[0][0] != ' '
		&& chessBoard[0][0] == chessBoard[1][1]
		&& chessBoard[0][0] == chessBoard[2][2]) {
		return chessBoard[0][0];
	}
	if (chessBoard[0][2] != ' '
		&& chessBoard[0][2] == chessBoard[1][1]
		&& chessBoard[0][2] == chessBoard[2][0]) {
		return chessBoard[0][2];
	}
	if (isFull(chessBoard)) {
		return 'h';
	}
	return ' ';
}
void game(char chessBoard[MAX_ROW][MAX_COL]) {
	init(chessBoard);
	char win = ' ';
	while(1) {
		print(chessBoard);
		playerMove(chessBoard);
		win = winner(chessBoard);
		if (win != ' ') {
			break;
		}
		print(chessBoard);
		computerMove(chessBoard);
		win = winner(chessBoard);
		if (win != ' ') {
			break;
		}
	}
	print(chessBoard);
	if (win == 'x') {
		printf("恭喜你赢啦~\n");
	}
	else if (win == 'o') {
		printf("你输了，太菜啦~\n");
	}
	else {
		printf("你得加油啊~\n");
	}
}
int main() {
	char chessBoard[MAX_ROW][MAX_COL] = { 0 };
	srand((unsigned int)time(0));
	while (1) {
		int choice = menu();
		if (choice == 0) {
			printf("goodbye~\n");
			break;
		}
		game(chessBoard);
	}
	return 0;
}