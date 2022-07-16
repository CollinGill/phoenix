#pragma once

#include <cstdint>

namespace Board
{
    typedef uint64_t Bitboard;

    // Bitboards for the white and black pieces
    Bitboard white_pawns;
    Bitboard white_knights;
    Bitboard white_bishops;
    Bitboard white_rooks;
    Bitboard white_queen;
    Bitboard white_king;

    Bitboard black_pawns;
    Bitboard black_knights;
    Bitboard black_bishops;
    Bitboard black_rooks;
    Bitboard black_queen;
    Bitboard black_king;
}