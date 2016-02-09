#include "stdafx.h"
#include "Square.h"
#include "Piece.h"
#include "Board.h"



int board[8][8] = { {0,1,0,1,0,1,0,1},{1,0,1,0,1,0,1,0},{ 0,1,0,1,0,1,0,1 },{ 1,0,1,0,1,0,1,0 } ,{ 0,1,0,1,0,1,0,1 },{ 1,0,1,0,1,0,1,0 } ,{ 0,1,0,1,0,1,0,1 },{ 1,0,1,0,1,0,1,0 } };

char boardletter(int letter)
{
	switch (letter)
	{
	case 1:	return 'a';case 2: return 'b';case 3: return 'c';case 4: return 'd';case 5: return 'e';case 6: return 'f';case 7: return 'g';case 8: return 'h';
	}
}

Board::Board()
	:squares{ new Square() }
{
	for (auto x = 0; x != 8; ++x){
		for (auto y = 0; y != 8; ++y) {		
			char* xcoor = new char[1];
			char* ycoor = new char[1];
			
			sprintf(xcoor, "%d", x+1);
			sprintf(ycoor, "%c", boardletter(y+1));
			squares[x][y] = new Square(ycoor,xcoor, nullptr, Colour(board[x][y])); //sets up square colours and indicates they do not initially contain a piece object
		}
	}
}

Board::~Board()
{
	for (auto x = 0; x != 8; ++x)
		for (auto y = 0; y != 8; ++y)
			squares[x][y] = nullptr;
}

Square* Board::getSquare(int x, int y)
{
	return squares[x][y];
}

