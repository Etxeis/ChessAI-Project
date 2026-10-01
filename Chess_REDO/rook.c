#include <stdio.h>
#include <stdlib.h>

#include "chessboard.h"

char*** rook_movement(char*** board, int row, int column, int row_movement, int column_movement, int side) {
    int not_nothing = 0;
    if (side == 0) {
        for (int i=0; i<rows; i++) {
            for (int j=0; j<columns; j++) {
                if (row_movement < row) {
                    for (int k = row; row-1 >= row_movement; k--) {
                        if (board[k][column] != nothing) {
                            not_nothing = 1;
                            return board;
                        }
                    }
                    if (not_nothing == 0) {
                        board[row][column] = nothing;
                        board[row_movement][column_movement] = white_rook;
                        return board;
                    }
                } else {
                    for (int k = row; row+1 <= row_movement; k++) {
                        if (board[k][column] != nothing) {
                            not_nothing = 1;
                            return board;
                        }
                    }
                    if (not_nothing == 0) {
                        board[row][column] = nothing;
                        board[row_movement][column_movement] = white_rook;
                        return board;
                    }
                }
                if (column_movement < column) {
                    for (int k = column; column-1 >= column_movement; k--) {
                        if (board[row][k] != nothing) {
                            not_nothing = 1;
                            return board;
                        }
                    }
                    if (not_nothing == 0) {
                        board[row][column] = nothing;
                        board[row_movement][column_movement] = white_rook;
                        return board;
                    }
                } else {
                    for (int k = column; column+1 <= column_movement; k++) {
                        if (board[row][k] != nothing) {
                            not_nothing = 1;
                            return board;
                        }
                    }
                    if (not_nothing == 0) {
                        board[row][column] = nothing;
                        board[row_movement][column_movement] = white_rook;
                        return board;
                    }
                }
            }
            return board;
        }



    } else {
        for (int i=0; i<rows; i++) {
            for (int j=0; j<columns; j++) {
                if (column_movement < column) {
                    for (int k = column; column_movement <= column-1; k--) {
                        if (board[row][k] != nothing) {
                            not_nothing = 1;
                        }
                    }
                    if (not_nothing == 0) {
                        board[row][column] = nothing;
                        board[row_movement][column_movement] = white_rook;
                        return board;
                    } else {
                        return board;
                    }
                } else {
                    for (int k = column; column_movement >= column+1; k++) {
                        if (board[row][k] != nothing) {
                            not_nothing = 1;
                        }
                    }
                    if (not_nothing == 0) {
                        board[row][column] = nothing;
                        board[row_movement][column_movement] = white_rook;
                        return board;
                    } else {
                        return board;
                    }
                }
            }
        }
        return board;
    }
    return board;
}
