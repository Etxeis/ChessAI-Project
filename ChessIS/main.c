#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#include "board.h"
#include "pawn.h"


int main() {
    printf("Starting new Chess Project\n");

    ChessBoard chess_board;
    StartBoard(chess_board.dist, chess_board.white_turn);
    printf("\nWhite State: %d\n\n", chess_board.white_turn);
    PrintBoard(chess_board);
    Pawn_First_Move(chess_board.dist, chess_board.white_turn, 1, 1);
    PrintBoard(chess_board);

    while (true) {

        break;
    }

    return 0;
}


