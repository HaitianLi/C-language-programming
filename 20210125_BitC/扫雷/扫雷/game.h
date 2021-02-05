#pragma once
#define ROW 9
#define COL 9
#define ROWS ROW + 2
#define COLS COL + 2
#define EASY_MODE 10 //�׵�����

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<math.h>


//��ʼ������
void initBoard(char board[ROWS][COLS], char ch);
void DisplayBoard(char board[ROWS][COLS]);

//������
void SetMine(char board[ROWS][COLS], int count);

//����
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int MineCount);

//�Ų�����׵���Ϣ
int GetMineCount(char mine[ROWS][COLS],int x, int y);


