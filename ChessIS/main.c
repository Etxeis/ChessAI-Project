#include <stdio.h>
#include <string.h>

#include "board.h"


int main() {
    printf("Starting new Chess Project\n");

    ChessBoard chess_board;
    StartBoard(chess_board.dist);
    PrintBoard(chess_board);

    return 0;
}


