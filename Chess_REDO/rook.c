#include <stdio.h>
#include <stdlib.h>

#include "chessboard.h"

char*** rook_movement(char*** board, int row, int column, int row_movement, int column_movement, int side) {
    int not_nothing = 0;
    if (side == 0) {
        for (int i=0; i<rows; i++) {
            for (int j=0; j<columns; j++) {
                // If white rook moves upwards in rows
                if (row < row_movement) {
                    for (int k = row+1; k <= row_movement; k++) {
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
                } else { // If white rook moves backwards in rows
                    for (int k = row-1; k >= row_movement; k--) {
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
                // If white rook moves left in columns
                if (column_movement < column) {
                    for (int k = column-1; k >= column_movement; k--) {
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
                } else { // If white rook moves right in columns
                    for (int k = column+1; k <= column_movement; k++) {
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
                // If black rook moves upwards in rows
                if (row < row_movement) {
                    for (int k = row+1; k <= row_movement; k++) {
                        if (board[k][column] != nothing) {
                            not_nothing = 1;
                            return board;
                        }
                    }
                    if (not_nothing == 0) {
                        board[row][column] = nothing;
                        board[row_movement][column_movement] = black_rook;
                        return board;
                    }
                } else { // If black rook moves backwards in rows
                    for (int k = row-1; k >= row_movement; k--) {
                        if (board[k][column] != nothing) {
                            not_nothing = 1;
                            return board;
                        }
                    }
                    if (not_nothing == 0) {
                        board[row][column] = nothing;
                        board[row_movement][column_movement] = black_rook;
                        return board;
                    }
                }
                // If black rook moves left in columns
                if (column_movement < column) {
                    for (int k = column-1; k >= column_movement; k--) {
                        if (board[row][k] != nothing) {
                            not_nothing = 1;
                            return board;
                        }
                    }
                    if (not_nothing == 0) {
                        board[row][column] = nothing;
                        board[row_movement][column_movement] = black_rook;
                        return board;
                    }
                } else { // If black rook moves right in columns
                    for (int k = column+1; k <= column_movement; k++) {
                        if (board[row][k] != nothing) {
                            not_nothing = 1;
                            return board;
                        }
                    }
                    if (not_nothing == 0) {
                        board[row][column] = nothing;
                        board[row_movement][column_movement] = black_rook;
                        return board;
                    }
                }
            }
            return board;
        }
    }
    return board;
}


char*** rook_eating(char*** board, int row, int column, int row_movement, int column_movement, int side) {
    int not_nothing = 0;
    if (side == 0) {
        for (int i=0; i<rows; i++) {
            for (int j=0; j<columns; j++) {
                // If white rook eats upwards in rows
                if (row < row_movement) {
                    for (int k = row+1; k <= row_movement; k++) {
                        if (board[k][column] != nothing) {
                            not_nothing = 1;
                            board[row][column] = nothing;
                            board[row_movement][column_movement] = white_rook;
                            return board;
                        }
                    }
                } else { // If white rook eats backwards in rows
                    for (int k = row-1; k >= row_movement; k--) {
                        if (board[k][column] != nothing) {
                            not_nothing = 1;
                            board[row][column] = nothing;
                            board[row_movement][column_movement] = white_rook;
                            return board;
                        }
                    }
                }
                // If white rook moves left in columns
                if (column_movement < column) {
                    for (int k = column-1; k >= column_movement; k--) {
                        if (board[row][k] != nothing) {
                            not_nothing = 1;
                            board[row][column] = nothing;
                            board[row_movement][column_movement] = white_rook;
                            return board;
                        }
                    }
                } else { // If white rook moves right in columns
                    for (int k = column+1; k <= column_movement; k++) {
                        if (board[row][k] != nothing) {
                            not_nothing = 1;
                            board[row][column] = nothing;
                            board[row_movement][column_movement] = white_rook;
                            return board;
                        }
                    }
                }
            }
            return board;
        }
    } else {
        for (int i=0; i<rows; i++) {
            for (int j=0; j<columns; j++) {
                // If black rook moves upwards in rows
                if (row < row_movement) {
                    for (int k = row+1; k <= row_movement; k++) {
                        if (board[k][column] != nothing) {
                            not_nothing = 1;
                            board[row][column] = nothing;
                            board[row_movement][column_movement] = black_rook;
                            return board;
                        }
                    }
                } else { // If black rook moves backwards in rows
                    for (int k = row-1; k >= row_movement; k--) {
                        if (board[k][column] != nothing) {
                            not_nothing = 1;
                            board[row][column] = nothing;
                            board[row_movement][column_movement] = black_rook;
                            return board;
                        }
                    }
                }
                // If black rook moves left in columns
                if (column_movement < column) {
                    for (int k = column-1; k >= column_movement; k--) {
                        if (board[row][k] != nothing) {
                            not_nothing = 1;
                            board[row][column] = nothing;
                            board[row_movement][column_movement] = black_rook;
                            return board;
                        }
                    }
                } else { // If black rook moves right in columns
                    for (int k = column+1; k <= column_movement; k++) {
                        if (board[row][k] != nothing) {
                            not_nothing = 1;
                            board[row][column] = nothing;
                            board[row_movement][column_movement] = black_rook;
                            return board;
                        }
                    }
                }
            }
            return board;
        }
    }

    return board;
}
