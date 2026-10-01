#include <stdio.h>
#include <stdlib.h>

#include "chessboard.h"

// Need to think more about this implementation cause what happens when rook is moving backwards
char*** rook_movement(char*** board, int row, int column, int row_movement, int column_movement, int side) {
    for (int i=0; i < rows; i++) { 
        for (int j=0; j < columns; j++) {
            if (side == 0) { 
                if (row == row_movement) {
                    if (column_movement != column) {
                        for (k = 0; k <= column_movement; k++) {
                            if (board[row][k] != nothing) {
                                return board;
                            } 
                            if (k == column_movement) {
                                if (board[row][k] == nothing) {
                                    board[row_movement][column_movement] == white_rook;
                                    return board;
                                }
                            }
                        }
                    }
                }
                if (column == column_movement) {
                    if (row != row_movement) {
                        for (k = 0; k <= column_movement; k++) {
                            if (board[k][column] != nothing) {
                                return board;
                            } 
                            if (k == row_movement) {
                                if (board[k][column] == nothing) {
                                    board[row_movement][column_movement] == white_rook;
                                    return board;
                                }
                            }
                        }
                    }

                }

            } else if (side == 1) {
                if (row == row_movement) {
                    if (column_movement != column) {
                        for (k = 0; k <= column_movement; k++) {
                            if (board[row][k] != nothing) {
                                return board;
                            } 
                            if (k == column_movement) {
                                if (board[row][k] == nothing) {
                                    board[row_movement][column_movement] == white_rook;
                                    return board;
                                }
                            }
                        }
                    }
                }
                if (column == column_movement) {
                    if (row != row_movement) {
                        for (k = 0; k <= column_movement; k++) {
                            if (board[k][column] != nothing) {
                                return board;
                            } 
                            if (k == row_movement) {
                                if (board[k][column] == nothing) {
                                    board[row_movement][column_movement] == white_rook;
                                    return board;
                                }
                            }
                        }
                    }
                }
            }
        }
    }

}
