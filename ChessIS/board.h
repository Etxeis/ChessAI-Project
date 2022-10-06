typedef struct ChessBoard {
    char dist[65];
    bool white_turn;
}ChessBoard;
void StartBoard(char* chess_board_dist, bool chess_board_state);
void MakeMove(bool state_white);
void PrintBoard(ChessBoard board);
