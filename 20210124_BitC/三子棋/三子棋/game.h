#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 3
#define COL 3

//��ʼ������
void InitBoard(char board[ROW][COL]);

//��ӡ����
void DisplayBoard(char board[ROW][COL]);


//�������
void PlayerMove(char board[ROW][COL]);


//AI����
void AiMove(char board[ROW][COL]);


//�ж���Ӯ
char WinCheck(char board[ROW][COL]);

//�ж�����
int pingju(char board[ROW][COL]);



