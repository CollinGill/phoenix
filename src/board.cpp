#include "include/board.h"
#include <iostream>

Board::CBoard::CBoard() 
{
    this->en_passant    = NONE;

    this->white_pieces  = 0x0;
    this->white_pawns   = 0x0;
    this->white_knights = 0x0;
    this->white_bishops = 0x0;
    this->white_rooks   = 0x0;
    this->white_queens  = 0x0;
    this->white_king    = 0x0;

    this->black_pieces  = 0x0;
    this->black_pawns   = 0x0;
    this->black_knights = 0x0;
    this->black_bishops = 0x0;
    this->black_rooks   = 0x0;
    this->black_queens  = 0x0;
    this->black_king    = 0x0;

}

Board::CBoard::~CBoard() {};

void Board::CBoard::load_fen(std::string fen)
{
    // Starting Position FEN: rnbqkbnr/pppppppp/8/8/8/8/PPPPPPPP/RNBQKBNR w KQkq - 0 1

    // Piece position:
    int char_in_fen = 0;
    Square position = a8;
    for (auto &chr : fen) {
        // End of the pieces part of FEN
        if (chr == ' ') {
            char_in_fen += 2;
            break;
        }

        // End of the rank
        if (chr == '/') {
            position = static_cast<Square>(position - 16);
            char_in_fen++;
            continue;
        }
        parse_fen_piece(chr, position);
        char_in_fen++;
    }

    fen = fen.substr(char_in_fen); 
    to_move = (fen[0] == 'w') ? Color::WHITE : Color::BLACK;
}

void Board::CBoard::parse_fen_piece(char chr, Square& pos)
{
    // Figure out how to increment the enum to the next position
    switch (chr)
    {
        case 'p':
            black_pawns &= (1 << pos);
            black_pieces &= (1 << pos);
            pos = static_cast<Square>(pos + 1);
            break;
        case 'n':
            black_knights &= (1 << pos);
            black_pieces &= (1 << pos);
            pos = static_cast<Square>(pos + 1);
            break;
        case 'b':
            black_bishops &= (1 << pos);
            black_pieces &= (1 << pos);
            pos = static_cast<Square>(pos + 1);
            break;
        case 'r':
            black_rooks &= (1 << pos);
            black_pieces &= (1 << pos);
            pos = static_cast<Square>(pos + 1);
            break;
        case 'q':
            black_queens &= (1 << pos);
            black_pieces &= (1 << pos);
            pos = static_cast<Square>(pos + 1);
            break;
        case 'k':
            black_king &= (1 << pos);
            black_pieces &= (1 << pos);
            pos = static_cast<Square>(pos + 1);
            break;
        case 'P':
            white_pawns &= (1 << pos);
            white_pieces &= (1 << pos);
            pos = static_cast<Square>(pos + 1);
            break;
        case 'N':
            white_knights &= (1 << pos);
            white_pieces &= (1 << pos);
            pos = static_cast<Square>(pos + 1);
            break;
        case 'B':
            white_bishops &= (1 << pos);
            white_pieces &= (1 << pos);
            pos = static_cast<Square>(pos + 1);
            break;
        case 'R':
            white_rooks &= (1 << pos);
            white_pieces &= (1 << pos);
            pos = static_cast<Square>(pos + 1);
            break;
        case 'Q':
            white_queens &= (1 << pos);
            white_pieces &= (1 << pos);
            pos = static_cast<Square>(pos + 1);
            break;
        case 'K':
            white_king &= (1 << pos);
            white_pieces &= (1 << pos);
            pos = static_cast<Square>(pos + 1);
            break;
        default:
            if (isdigit(chr))
                pos = static_cast<Square>(pos + (chr - '0'));
            else 
                std::cout << "ERROR: Invalid character in FEN `" << std::string(1, chr) << "` ";

            break;
    } 
}

void Board::CBoard::dump()
{
    // TODO: Either dump the raw hex of the bitboards to the terminal or print out the state of the chess board
}