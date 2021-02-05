#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"


void initBoard(char board[ROWS][COLS], char ch) {
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			board[i][j] = ch;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS]) {
	for (int i = 0; i <= COL; i++) {
		printf("%d ", i);
	}
	putchar('\n');

	for (int i = 1; i <= ROW; i++) {
		printf("%d ",i);
		for (int j = 1; j <= COL; j++) {
			printf("%c ", board[i][j]);
		}
		putchar('\n');
	}
	
}

void SetMine(char board[ROWS][COLS], int count) {

	//����Ϊ1, ����Ϊ0, ������char��1��0 Ϊ�˺����������Ų�
	while (count) {
		int x = rand() % ROW + 1;
		int y = rand() % COL + 1;
		if (board[x][y] == '0') {
			board[x][y] = '1';
			count--;
		}
	}
}

//�ݹ���չ����, ģ��ɨ�׵ĵ�һ�³�һƬ�����.
void GetMineCount(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y) {
	if (x >= 1 && x <= ROW && y >= 1 && y <= COL) {

		int count = 
			mine[x - 1][y] +
			mine[x - 1][y - 1] +
			mine[x][y - 1] +
			mine[x + 1][y - 1] +
			mine[x + 1][y] +
			mine[x + 1][y + 1] +
			mine[x][y + 1] +
			mine[x - 1][y + 1] - 8 * '0';

		if (count == 0) {
			show[x][y] = ' ';

			if (show[x - 1][y] == '*') {
				GetMineCount(mine, show, x - 1, y);
			}
			if (show[x - 1][y - 1] == '*') {
				GetMineCount(mine, show, x - 1, y - 1);
			}
			if (show[x][y - 1] == '*') {
				GetMineCount(mine, show, x, y - 1);
			}
			if (show[x + 1][y - 1] == '*') {
				GetMineCount(mine, show, x + 1, y - 1);
			}
			if (show[x + 1][y] == '*') {
				GetMineCount(mine, show, x + 1, y);
			}
			if (show[x + 1][y + 1] == '*') {
				GetMineCount(mine, show, x + 1, y + 1);
			}
			if (show[x][y + 1] == '*') {
				GetMineCount(mine, show, x, y + 1);
			}
			if (show[x - 1][y + 1] == '*') {
				GetMineCount(mine, show, x - 1, y + 1);
			}

		}
		else {
			show[x][y] = count + '0';
		}
	}
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int Minecount) {
	int win = 0;


	while (win < ROW * COL - Minecount) {
		printf("������Ҫ�Ų������:> ");
		int x = 0;
		int y = 0;
		scanf("%d %d", &x, &y);

		//1. ����ĺϷ���
		//2. �����괦�ǲ�����, ������, ͳ����Χ���׵�����
		if (x >= 1 && x <= ROW && y >= 1 && y <= COL) {
			if (mine[x][y] == '1') {
				printf("������\n");
				DisplayBoard(mine);
				break;
			}
			else {
				GetMineCount(mine, show, x, y);
				DisplayBoard(show);
			}
		}
		else {
			printf("�������, ����������.\n");
		}

		if (win == ROW * COL - Minecount) {
			printf("��ϲ���׳ɹ�\n");
		}
	}
}