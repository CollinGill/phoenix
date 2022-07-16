#pragma once

#include <cstdint>

namespace Board
{
    typedef uint64_t Bitboard;

    class CBoard
    {
    // Unsure yet exactly how to handle the encapsulation
    private:
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


        // Bitboards (little endian)
        /* Neighboring squares
           north west  north   north East
                  +7    +8    +9
                     \  |  /
        west    -1 <-  0 -> +1    east
                   /  |  \
               -9    -8    -7
        south west  south   south east
        */

        // Enum to get each square's corresponding bit
        enum squares_bit 
        {
            a1, b1, c1, d1, e1, f1, g1, h1,
            a2, b2, c2, d2, e2, f2, g2, h2,
            a3, b3, c3, d3, e3, f3, g3, h3,
            a4, b4, c4, d4, e4, f4, g4, h4,
            a5, b5, c5, d5, e5, f5, g5, h5,
            a6, b6, c6, d6, e6, f6, g6, h6,
            a7, b7, c7, d7, e7, f7, g7, h7,
            a8, b8, c8, d8, e8, f8, g8, h8
        };

        // Rank and File
        const Bitboard a_file             = 0x0101010101010101;
        const Bitboard b_file             = 0x0202020202020202;
        const Bitboard c_file             = 0x0404040404040404;
        const Bitboard d_file             = 0x0808080808080808;
        const Bitboard e_file             = 0x1010101010101010;
        const Bitboard f_file             = 0x2020202020202020;
        const Bitboard g_file             = 0x4040404040404040;
        const Bitboard h_file             = 0x8080808080808080;

        const Bitboard rank_1             = 0x00000000000000FF;
        const Bitboard rank_2             = 0x000000000000FF00;
        const Bitboard rank_3             = 0x0000000000FF0000;
        const Bitboard rank_4             = 0x00000000FF000000;
        const Bitboard rank_5             = 0x000000FF00000000;
        const Bitboard rank_6             = 0x0000FF0000000000;
        const Bitboard rank_7             = 0x00FF000000000000;
        const Bitboard rank_8             = 0xFF00000000000000;

        // Diagonals and antidiagonals
        // TODO: get the non fianchetto diagonals and anti diagonals
        const Bitboard a1_h8_diagonal     = 0x8040201008040201;
        const Bitboard h1_a8_antidiagonal = 0x0102040810204080;

        // Square colors
        const Bitboard light_squares      = 0x55AA55AA55AA55AA;
        const Bitboard dark_squares       = 0xAA55AA55AA55AA55;
    };
}