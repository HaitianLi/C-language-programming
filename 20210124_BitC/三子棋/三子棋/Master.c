#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void menu() {

	printf("**************\n");
	printf("***1. play ***\n");
	printf("***0. exit ***\n");
	
}

void game() {

	char status = 0;
	char board[ROW][COL];
	InitBoard(board);
	DisplayBoard(board);

	while (1) {
		PlayerMove(board);
		status = WinCheck(board);
		if (status != 'C') {
			break;
		}
		DisplayBoard(board);

		AiMove(board);
		status = WinCheck(board);
		if (status != 'C') {
			break;
		}
		DisplayBoard(board);
	}

	if (status == '#') {
		printf("����Ӯ!\n");
	} else if (status == '*') {
		printf("���Ӯ!\n");
	} else {
		printf("ƽ��");
	}

}
int main() {
	int input = 0;
	srand((unsigned int)time(NULL));

	do {
		menu();
		printf("��ѡ��: ");
		scanf("%d", &input);

		switch (input) {
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�������, ����������\n");
			break;
		}
	
	} while (input);
	return 0;
}