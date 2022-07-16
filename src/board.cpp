#include "include/board.h"

Board::CBoard::CBoard() 
{
    this->white_pieces  = 0x0;
    this->white_pawns   = 0x0;
    this->white_knights = 0x0;
    this->white_bishops = 0x0;
    this->white_rooks   = 0x0;
    this->white_queen   = 0x0;
    this->white_king    = 0x0;

    this->black_pieces  = 0x0;
    this->black_pawns   = 0x0;
    this->black_knights = 0x0;
    this->black_bishops = 0x0;
    this->black_rooks   = 0x0;
    this->black_queen   = 0x0;
    this->black_king    = 0x0;

}

Board::CBoard::~CBoard() {};

void Board::CBoard::load_fen(std::string fen)
{
    // TODO: Parse FEN string and have it change the internal bit boards respectively
}

void Board::CBoard::dump()
{
    // TODO: Either dump the raw hex of the bitboards to the terminal or print out the state of the chess board
}