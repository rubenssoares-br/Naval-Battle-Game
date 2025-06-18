#include <stdio.h>

int main() {
    char column_labels[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    const char *row_labels[] = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "10"};

    char board[10][10];

    int i, j;

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            board[i][j] = '0';
        }
    }

    board[3][3] = '3';
    board[3][4] = '3';
    board[3][5] = '3';

    board[6][7] = '3';
    board[7][7] = '3';
    board[8][7] = '3';

    printf("BOARD - NAVAL BATTLE\n");
    printf("   ");
    for (i = 0; i < 10; i++) {
        printf("%c ", column_labels[i]);
    }
    printf("\n");

    for (i = 0; i < 10; i++) {
        printf("%-2s ", row_labels[i]);

        for (j = 0; j < 10; j++) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }

    return 0;
}