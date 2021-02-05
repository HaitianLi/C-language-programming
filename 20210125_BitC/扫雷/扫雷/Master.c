#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void menu() {
	printf("#############\n");
	printf("## 1. play ##\n");
	printf("## 0. exit ##\n");
}

void game() {
	//�������̶�Ӧ������
	char mine[ROWS][COLS]; //��Ų��úõ��׵���Ϣ
	char show[ROWS][COLS]; //���չʾ������

	initBoard(mine,'0');
	initBoard(show, '*');

	//��ӡ����
	//DisplayBoard(mine);
	DisplayBoard(show);
	SetMine(mine, EASY_MODE);
	//DisplayBoard(show);

	//�Ų���
	FindMine(mine, show, EASY_MODE);
}

int main() {

	int input = 0;
	srand((unsigned)time(NULL));

	do {
		menu();
		printf("��ѡ�� ");
		scanf("%d", &input);

		switch (input) {
		case 1:
			game();
			break;
		case 0:
			printf("Game end\n");
			break;
		default:
			printf("Wrong input\n");
			break;
		}

	} while (input);
	
	return 0;
}