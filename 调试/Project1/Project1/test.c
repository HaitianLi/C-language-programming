#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int FindMurder(char n) {
    int result = 0;

    if (n != 'A') {
        result++;
    }
    if (n == 'C') {
        result++;
    }
    if (n == 'D') {
        result++;
    }
    if (n != 'D') {
        result++;
    }
    return result;
}


int main() {
    int input;
    printf("������: A, B, C, D \n");

    //�������û��ķǷ�����

    while (1) {
        printf("> ");
        scanf("%c", &input);
        if (FindMurder(input) == 3) {
            printf("���־���%c\n", input);
            break;
        }
        else {
            printf("�ٲ�\n");
        }
        //getchar();
    }

    return 0;
}