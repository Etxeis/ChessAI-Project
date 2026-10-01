#include <stdio.h>
#include <stdlib.h>

#include "chessboard.h"

struct Possible_movements {
    int possible_row;
    int possible_column;
};

// Could be as simple to assume people are gonna make the pieces move right, but tbh should have restrictions for the sole purpose of learning.
char*** knight_move(char*** board, int row, int column, int row_move, int column_move, int side) {
    struct Possible_movements *possible_moves = (struct Possible_movements*)malloc(8 * sizeof(struct Possible_movements));

    possible_moves[0].possible_row = row+2;
    possible_moves[0].possible_column = column-1;

    possible_moves[1].possible_row = row+2;
    possible_moves[1].possible_column = column+1;

    possible_moves[2].possible_row = row+1;
    possible_moves[2].possible_column = column-2;

    possible_moves[3].possible_row = row-1;
    possible_moves[3].possible_column = column-2;

    possible_moves[4].possible_row = row-2;
    possible_moves[4].possible_column = column+1;

    possible_moves[5].possible_row = row-2;
    possible_moves[5].possible_column = column-1;

    possible_moves[6].possible_row = row+1;
    possible_moves[6].possible_column = column+2;

    possible_moves[7].possible_row = row-1;
    possible_moves[7].possible_column = column+2;

    for (int i=0; i < 7; i++) {
        if (possible_moves[i].possible_row == row_move && possible_moves[i].possible_column == column_move) {
            if (side == 0) {
                board[row][column] = nothing;
                board[row_move][column_move] = white_knight;
            } else {
                board[row][column] = nothing;
                board[row_move][column_move] = black_knight;
            }

        }
    }

    return board;
}
