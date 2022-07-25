#include "include/board.h"

int main(int argc, char* argv[])
{
    Board::CBoard board = Board::CBoard();
    board.load_fen("rnbqkbnr/pppppppp/8/8/8/8/PPPPPPPP/RNBQKBNR w KQkq - 0 1");
    return 0;
}