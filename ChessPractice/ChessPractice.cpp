// ChessPractice.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Piece.h"
#include "Square.h"
#include "Board.h"
#include <iostream>

int main()
{
	Board* b = new Board();	

	for (auto c = 0; c != 8; ++c)
	{
		for (auto r = 0; r != 8; ++r) {
			std::cout << b->getSquare(r,c)->getPiece()->getType();		
			std::cout << " ";
		}
		std::cout << "\n";
	}
	for (auto c = 0; c != 8; ++c)
	{
		for (auto r = 0; r != 8; ++r) {
			std::cout << b->getSquare(r, c)->getPiece()->getColour();
			std::cout << " ";
		}
		std::cout << "\n";
	}
	
		
    return 0;
}

