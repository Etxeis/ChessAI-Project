#include <stdio.h>

#include "chessboard.h"
#include "pawn.h"

int main() {
    char*** board = create_board();
    print_board(board);
    printf("\n");
    board = pawn_first_move(board, 1, 2, 2, 0);
    board = pawn_first_move(board, 6, 3, 2, 1);
    print_board(board);
    printf("\n");
    board = pawn_eating_move(board, 3, 2, 4, 3, 0);
    print_board(board);
    printf("\n");


    return 0;
}
