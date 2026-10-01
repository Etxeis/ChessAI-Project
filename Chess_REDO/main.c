#include <stdio.h>

#include "chessboard.h"
#include "pawn.h"
#include "rook.h"

int main() {
    char*** board = create_board();
    print_board(board);
    printf("\n");
    board = pawn_first_move(board, 1, 0, 2, 0);
    print_board(board);
    printf("\n");
    board = pawn_first_move(board, 6, 0, 2, 1);
    print_board(board);
    printf("\n");
    board = rook_movement(board, 0, 0, 2, 0, 1);
    print_board(board);
    printf("\n");


    return 0;
}
