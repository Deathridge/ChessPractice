// ChessPractice.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Piece.h"
#include "Square.h"
#include "Board.h"
#include <iostream>

int main()
{
	Piece* p = new Piece("d3", "Queen");
	Square* s = new Square("d", "3", p, White);
	Board* b = new Board();

	for (auto x = 0; x != 8; ++x)
		for (auto y = 0; y != 8; ++y)
			std::cout << b->getSquare(x, y)->getColour();

    return 0;
}

