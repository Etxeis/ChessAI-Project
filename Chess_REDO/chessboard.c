#include <stdio.h>
#include <stdlib.h>

int rows = 8;
int columns = 8;
char* white_pawn   = "\xe2\x99\x9f "; //"\xe2\x99\x99"; // ♙
char* white_rook   = "\xe2\x99\x9c "; //"\xe2\x99\x96"; // ♖
char* white_knight = "\xe2\x99\x9e "; //"\xe2\x99\x98"; // ♘
char* white_bishop = "\xe2\x99\x9d "; //"\xe2\x99\x97"; // ♗
char* white_queen  = "\xe2\x99\x9b "; //"\xe2\x99\x95"; // ♕
char* white_king   = "\xe2\x99\x9a "; //"\xe2\x99\x94"; // ♔
char* black_pawn   = "\xe2\x99\x99 "; //"\xe2\x99\x9f"; // ♟
char* black_rook   = "\xe2\x99\x96 "; //"\xe2\x99\x9c"; // ♜
char* black_knight = "\xe2\x99\x98 "; //"\xe2\x99\x9e"; // ♞
char* black_bishop = "\xe2\x99\x97 "; //"\xe2\x99\x9d"; // ♝
char* black_queen  = "\xe2\x99\x95 "; //"\xe2\x99\x9b"; // ♛
char* black_king   = "\xe2\x99\x94 "; //"\xe2\x99\x9a"; // ♚
char* nothing = "\xE2\x96\x88\xE2\x96\x88";
int white = 0;
int black = 1;

char*** create_board() {

    char ***board = (char***)malloc(rows * sizeof(char**));
    for (int i=0; i < rows; i++) {
        board[i] = (char**)malloc(columns * sizeof(char*));
    }
    

    for (int i=0; i < rows; i++) {
        for (int j=0; j < columns; j++) {
            // PRIMERA SECCION
            if (i == 0 && j == 0) {
                board[i][j] = white_rook;
            }
            if (i == 0 && j == 1) {
                board[i][j] = white_knight;
            }
            if (i == 0 && j == 2) {
                board[i][j] = white_bishop;
            }
            if (i == 0 && j == 3) {
                board[i][j] = white_queen;
            }
            if (i == 0 && j == 4) {
                board[i][j] = white_king;
            }
            if (i == 0 && j == 5) {
                board[i][j] = white_bishop;
            }
            if (i == 0 && j == 6) {
                board[i][j] = white_knight;
            }
            if (i == 0 && j == 7) {
                board[i][j] = white_rook;
            }
            if (i == 1) {
                board[i][j] = white_pawn;
            }

            // SEGUNDA SECCION
            if (i == 7 && j == 0) {
                board[i][j] = black_rook;
            }
            if (i == 7 && j == 1) {
                board[i][j] = black_knight;
            }
            if (i == 7 && j == 2) {
                board[i][j] = black_bishop;
            }
            if (i == 7 && j == 3) {
                board[i][j] = black_queen;
            }
            if (i == 7 && j == 4) {
                board[i][j] = black_king;
            }
            if (i == 7 && j == 5) {
                board[i][j] = black_bishop;
            }
            if (i == 7 && j == 6) {
                board[i][j] = black_knight;
            }
            if (i == 7 && j == 7) {
                board[i][j] = black_rook;
            }
            if (i == 6) {
                board[i][j] = black_pawn;
            }
            if (i == 2) {
                board[i][j] = nothing;
            }
            if (i == 3) {
                board[i][j] = nothing;
            }
            if (i == 4) {
                board[i][j] = nothing;
            }
            if (i == 5) {
                board[i][j] = nothing;
            }

        }
    }
    
    return board;
}


void print_board(char*** board) {
    for (int i=7; i >= 0; i--) {
        for (int j=0; j < columns; j++) {
            printf("%s", board[i][j]);
        }
        printf("\n");
    }
}
