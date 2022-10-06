#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#include "board.h"

// Adds Pieces to Table
void StartBoard(char* chess_board_dist, bool chess_board_state) {
    strcpy(chess_board_dist, "rnbqkbnrpppppppp00000000000000000000000000000000pppppppprnbqkbnr");
    chess_board_state = true;
    
}

void MakeMove(bool state_white) {
    if (state_white == true) {

        state_white = false; // Should do this action after making the move
    } else {

        state_white = true;
    }
}

// Prints Table
void PrintBoard(ChessBoard board) {
    printf("Printing Board: \n");
    for (int i=0; i<64; i++) {
        if (i % 8 == 0) {
            printf("\n");
        }
        printf("%c", board.dist[i]);
    }
    printf("\n\n");

}

