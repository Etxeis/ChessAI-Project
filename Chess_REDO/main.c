#include <stdio.h>

#include "chessboard.h"
#include "pawn.h"
#include "rook.h"
#include "knight.h"
#include "bishop.h"

int main() {
    char*** board = create_board();
    print_board(board);
    printf("\n");
    board = pawn_first_move(board, 1, 3, 2, 0);
    print_board(board);
    printf("\n");
    board = pawn_first_move(board, 6, 4, 2, 1);
    print_board(board);
    printf("\n");
    board = bishop_move(board, 0, 2, 4, 6, 0);
    print_board(board);
    printf("\n");
    board = bishop_move(board, 7, 5, 6, 4, 1);
    print_board(board);
    printf("\n");


    return 0;
}
