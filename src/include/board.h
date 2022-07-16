#pragma once

#include <iostream>
#include <string>

// The board representation is a bitboard

namespace Board
{
    void print_board(std::string fen);
    void print_piece(char piece);
}