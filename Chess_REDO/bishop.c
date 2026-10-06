#include <stdio.h>
#include <stdlib.h>

#include "chessboard.h"

char*** bishop_move(char*** board, int row, int column, int row_move, int column_move, int side){
    // Diagonal movement validation
    if (abs(row_move - row) != abs(column_move - column)) {
        return board;
    } 



    return board;
}
