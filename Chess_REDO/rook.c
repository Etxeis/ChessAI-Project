#include <stdio.h>
#include <stdlib.h>

#include "chessboard.h"

char*** rook_movement(char*** board, int row, int column, int row_movement, int column_movement, int side) {
    bool not_nothing = true;
    if (side == 0) {
        for (int i=0; i<rows; i++) {
            for (int j=0; j<columns; j++) {
                if (row_movement < row) {
                    for (k = row; row_movement <= row-1; k--) {
                        if (board[k][column] != nothing) {
                            bool = false;
                        }
                    }
                    if (not_nothing == true) {
                        board[row][column] = nothing;
                        board[row_movement][column_movement] = white_rook;
                        return board;
                    } else {
                        return board;
                    }
                } else {
                    for (k = row; row_movement >= row+1; k++) {
                        if (board[k][column] != nothing) {
                            bool = false;
                        }
                    }
                    if (not_nothing == true) {
                        board[row][column] = nothing;
                        board[row_movement][column_movement] = white_rook;
                        return board;
                    } else {
                        return board;
                    }
                }
            }
        }
    } else if (side == 0) {
        for (int i=0; i<rows; i++) {
            for (int j=0; j<columns; j++) {
                if (column_movement < column) {
                    for (k = column; column_movement <= column-1; k--) {
                        if (board[row][k] != nothing) {
                            bool = false;
                        }
                    }
                    if (not_nothing == true) {
                        board[row][column] = nothing;
                        board[row_movement][column_movement] = white_rook;
                        return board;
                    } else {
                        return board;
                    }
                } else {
                    for (k = column; column_movement >= column+1; k++) {
                        if (board[row][k] != nothing) {
                            bool = false;
                        }
                    }
                    if (not_nothing == true) {
                        board[row][column] = nothing;
                        board[row_movement][column_movement] = white_rook;
                        return board;
                    } else {
                        return board;
                    }
                }
            }
        }
    }
}
