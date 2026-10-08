#include <stdio.h>
#include <stdlib.h>

int sgn(int value_one, int value_two) {
    if (value_two - value_one > 0) {
        return  1;
    } else if (value_two - value_one < 0) {
        return -1;
    } else {
        return 0;
    }
}
