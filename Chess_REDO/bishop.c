#include <stdio.h>
#include <stdlib.h>

#include "chessboard.h"
#include "help_functions.h"

char*** bishop_move(char*** board, int row, int column, int row_move, int column_move, int side){
    // Diagonal movement validation
    if (abs(row_move - row) != abs(column_move - column)) {
        return board;
    }

    int row_movement = 0;
    int column_movement = 0;

    row_movement = sgn(row, row_movement);
    column_movement = sgn(column, column_movement);

    int current_row = row+row_movement;
    int current_column = column+column_movement; 

    // Checks if a piece is blocking the move
    while (current_row != row_move && current_column != column_move) {
        if (board[current_row][current_column] != nothing) {
            return board;
        } else {
            current_row = current_row + row_movement;
            current_column = current_column + column_movement;
        }

    }

    // Make move or eat piece
    if (side == 0) {
        board[row_move][column_move] = white_bishop;
        board[row][column] = nothing;
    } else {
        board[row_move][column_move] = black_bishop;
        board[row][column] = nothing;
    }

    return board;
}
