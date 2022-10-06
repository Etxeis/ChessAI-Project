#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#include "pawn.h"

void Pawn_First_Move(char* dist, bool white_turn, int position, int spaces) {
    if (white_turn) { //White Pawn Move
        if (position == 1) {
            if (spaces == 1) {
                strcpy(dist, "rnbqkbnrpppppppp000000000000000000000000p00000000ppppppprnbqkbnr");

            } else if (spaces == 2) {

            } else {
                printf("Invalid Position");
                
            }

        } else if (position == 2) {
            if (spaces == 1) {

            } else if (spaces == 2) {

            } else {
                printf("Invalid Position");

            }

        } else if (position == 3) {
            if (spaces == 1) {

            } else if (spaces == 2) {

            } else {
                printf("Invalid Position");

            }

        } else if (position == 4) {
            if (spaces == 1) {

            } else if (spaces == 2) {

            } else {
                printf("Invalid Position");

            }

        } else if (position == 5) {
            if (spaces == 1) {

            } else if (spaces == 2) {

            } else {
                printf("Invalid Position");

            }

        } else if (position == 6) {
            if (spaces == 1) {

            } else if (spaces == 2) {

            } else {
                printf("Invalid Position");

            }

        } else if (position == 7) {
            if (spaces == 1) {

            } else if (spaces == 2) {

            } else {
                printf("Invalid Position");

            }

        } else if (position == 8) {
            if (spaces == 1) {

            } else if (spaces == 2) {

            } else {
                printf("Invalid Position");

            }

        } else {
            printf("Invalid position");
        }


    } else { // Black Pawn Move
        if (position == 1) {
            if (spaces == 1) {

            } else if (spaces == 2) {

            } else {
                printf("Invalid Position");

            }

        } else if (position == 2) {
            if (spaces == 1) {

            } else if (spaces == 2) {

            } else {
                printf("Invalid Position");

            }

        } else if (position == 3) {
            if (spaces == 1) {

            } else if (spaces == 2) {

            } else {
                printf("Invalid Position");

            }

        } else if (position == 4) {
            if (spaces == 1) {

            } else if (spaces == 2) {

            } else {
                printf("Invalid Position");

            }

        } else if (position == 5) {
            if (spaces == 1) {

            } else if (spaces == 2) {

            } else {
                printf("Invalid Position");

            }

        } else if (position == 6) {
            if (spaces == 1) {

            } else if (spaces == 2) {

            } else {
                printf("Invalid Position");

            }

        } else if (position == 7) {
            if (spaces == 1) {

            } else if (spaces == 2) {

            } else {
                printf("Invalid Position");

            }

        } else if (position == 8) {
            if (spaces == 1) {

            } else if (spaces == 2) {

            } else {
                printf("Invalid Position");

            }

        } else {
            printf("Invalid position");
        }
    }
}
