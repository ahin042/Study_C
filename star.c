#include <stdio.h>

int main() {
    char board[5][5] = {" "};

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j <= i; j++) {
            board[i][j] = '*';
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
}