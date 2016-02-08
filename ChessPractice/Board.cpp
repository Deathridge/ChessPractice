#include "stdafx.h"
#include "Square.h"
#include "Piece.h"
#include "Board.h"


enum boardletter {A=1,B=2,C=3,D=4,E=5,F=6,G=7,H=8};
Board::Board()
	:squares{new Square()}
{
	for (auto x = 0; x != 8; ++x)
		for (auto y = 0; y != 8; ++y )
			if ((x - 1) % 2 == 0 && (y - 1) % 2 == 0)
			{
				squares[x][y] = new Square((char *)boardletter(x), (char*)y, nullptr, Black);
			}
			else
			{
				squares[x][y] = new Square((char *)boardletter(x), (char*)y, nullptr, White);
			}
}

Square* Board::getSquare(int x, int y)
{
	return squares[x][y];
}