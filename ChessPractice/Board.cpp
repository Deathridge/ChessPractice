#include "stdafx.h"
#include "Square.h"
#include "Piece.h"
#include "Board.h"


enum boardletter {A=1,B=2,C=3,D=4,E=5,F=6,G=7,H=8};
int board[8][8] = { {0,1,0,1,0,1,0,1},{1,0,1,0,1,0,1,0},{ 0,1,0,1,0,1,0,1 },{ 1,0,1,0,1,0,1,0 } ,{ 0,1,0,1,0,1,0,1 },{ 1,0,1,0,1,0,1,0 } ,{ 0,1,0,1,0,1,0,1 },{ 1,0,1,0,1,0,1,0 } };
Board::Board()
	:squares{new Square()}
{
	for (auto x = 0; x != 8; ++x)
		for (auto y = 0; y != 8; ++y )
			
			squares[x][y] = new Square((char *)boardletter(x+1), (char*)y, nullptr, Colour(board[x][y]));
			
}

Square* Board::getSquare(int x, int y)
{
	return squares[x][y];
}