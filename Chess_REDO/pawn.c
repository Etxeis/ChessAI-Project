#include <stdio.h>
#include <stdlib.h>

#include "chessboard.h"

char*** pawn_first_move(char*** board, int row, int column, int movement, int side) {
    for (int i=0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            // Movement of white pawns
            if (side == 0) {
                if (row == 1 && j == column) {
                    if (movement == 1) {
                        board[row+movement][column] = white_pawn;
                        board[row][column] = nothing;
                        return board;
                    } else if (movement == 2) {
                        board[row+movement][column] = white_pawn;
                        board[row][column] = nothing;
                        return board;
                    }
                }
            }
            // Movement of black pawns
            if (side == 1) {
                if (row == 6 && j == column) {
                    if (movement == 1) {
                        board[row-movement][column] = black_pawn;
                        board[row][column] = nothing;
                        return board;
                    } else if (movement == 2) {
                        board[row-movement][column] = black_pawn;
                        board[row][column] = nothing;
                        return board;
                    }
                }
            }
        }
    }
    return board;

}

char*** pawn_normal_move(char*** board, int row, int column, int side) {
    for (int i=0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            // White pawn normal movement
            if (side == 0) {
                if (board[row+1][column] == nothing) {
                        board[row+1][column] = white_pawn;
                        board[row][column] = nothing;
                        return board;
                } else {
                    return board;
                }
            }

            // Black pawn normal movement
            if (side == 1) {
                if (board[row-1][column] == nothing) {
                        board[row-1][column] = black_pawn;
                        board[row][column] = nothing;
                        return board;
                } else {
                    return board;
                }
            }
        }
    }
    return board;

}

char*** pawn_eating_move(char*** board, int row, int column, int eating_row, int eating_colum, int side) {
    for (int i=0; i < rows; i++) {
        for (int j=0; j < columns; j++) {
            if (side == 0) {
                if (board[eating_row][eating_colum] != nothing) {
                    board[eating_row][eating_colum] = white_pawn;
                    board[row][column] = nothing;
                    return board;
                } else {
                    return board;
                }
            } 
            if (side == 1) {
                if (board[eating_row][eating_colum] != nothing) {
                    board[eating_row][eating_colum] = black_pawn;
                    board[row][column] = nothing;
                    return board;
                } else {
                    return board;
                }
            }
        }
    }
    return board;
}
