#include <stdio.h>
#include <string.h>

#include "board.h"

// Adds Pieces to Table
void StartBoard(char* new_chess_board_dist) {
    strcpy(new_chess_board_dist, "rnbqkbnrpppppppp00000000000000000000000000000000pppppppprnbqkbnr");
    
}

// Prints Table
void PrintBoard(ChessBoard board) {
    printf("Printing Board: \n%s\n", board.dist);

}
