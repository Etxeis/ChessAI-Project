
char*** pawn_first_move(char*** board, int row, int column, int movement, int side);

char*** pawn_normal_move(char*** board, int row, int column, int side);

char*** pawn_eating_move(char*** board, int row, int column, int eating_row, int eating_colum, int side);
