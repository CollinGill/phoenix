#include "include/board.h"

void Board::print_board(std::string fen)
{
    std::cout << "-----------------\n|";
    for (int i = 0; i < fen.length(); i++) {
        print_piece(fen[i]);
    }
    std::cout << "\n-----------------\n";
}

void Board::print_piece(char piece)
{
    switch (piece)
    {
        case 'p':
            std::cout << "\u265F|";
            break;
        case 'P':
            std::cout << "\u2659|";
            break;
        case 'n':
            std::cout << "\u265E|";
            break;
        case 'N':
            std::cout << "\u2658|";
            break;
        case 'b':
            std::cout << "\u265D|";
            break;
        case 'B':
            std::cout << "\u2657|";
            break;
        case 'r':
            std::cout << "\u265C|";
            break;
        case 'R':
            std::cout << "\u2656|";
            break;
        case 'q':
            std::cout << "\u265B|";
            break;
        case 'Q':
            std::cout << "\u2655|";
            break;
        case 'k':
            std::cout << "\u265A|";
            break;
        case 'K':
            std::cout << "\u2654|";
            break;
        case '/':
            std::cout << "\n-----------------\n|";
            break;
        default:
            int num_spaces = piece - '0';
            while (num_spaces > 0) {
                std::cout << " |";
                num_spaces--;
            }
    }
}