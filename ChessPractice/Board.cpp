#include "stdafx.h"
#include "Square.h"
#include "Piece.h"
#include "Board.h"
#include <iostream>

enum Type{ King, Queen, Knight, Rook, Bishop, Pawn, Empty };
int board[8][8] = { {0,1,0,1,0,1,0,1},{1,0,1,0,1,0,1,0},{ 0,1,0,1,0,1,0,1 },{ 1,0,1,0,1,0,1,0 } ,{ 0,1,0,1,0,1,0,1 },{ 1,0,1,0,1,0,1,0 } ,{ 0,1,0,1,0,1,0,1 },{ 1,0,1,0,1,0,1,0 } };
Type types[8][8] = { { Rook,Knight,Bishop,King,Queen,Bishop,Knight,Rook },
					{ Pawn,Pawn,Pawn,Pawn,Pawn,Pawn,Pawn,Pawn },
					{ Empty,Empty,Empty,Empty,Empty,Empty,Empty,Empty },
					{ Empty,Empty,Empty,Empty,Empty,Empty,Empty,Empty },
					{ Empty,Empty,Empty,Empty,Empty,Empty,Empty,Empty },
					{ Empty,Empty,Empty,Empty,Empty,Empty,Empty,Empty },
					{ Pawn,Pawn,Pawn,Pawn,Pawn,Pawn,Pawn,Pawn },
					{ Rook,Knight,Bishop,King,Queen,Bishop,Knight,Rook } };

char* Board::getType(int inputtype)
{
	switch (inputtype)
	{
	case 0:	return "King"; case 1: return "Queen"; case 2: return "Knight"; case 3: return "Rook"; case 4: return "Bishop"; case 5: return "Pawn"; case 6: return "Empty";
	}
}

Board::Board()
	:squares{ new Square() }
{
	for (auto x = 0; x!= 8; ++x){
		for (auto y = 0; y!= 8; ++y) {		
			char* colour;
			Piece* piece;
			if (x == 0 || x == 1) {
				colour = "Black";
				piece = new Piece(getType(types[x][y]), colour);
				
			}
			else if (x == 6 || x== 7)
			{
				colour = "White";
				piece = new Piece(getType(types[x][y]), colour);
			}
			else
			{				
				colour = "None";
				piece = new Piece("Empty", colour);
			}
			squares[y][x] = new Square(x,y, piece, Colour(board[x][y])); //sets up square colours and shows which do not initially contain a piece object
			
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
	if(squares[x][y])
		return squares[x][y];
	
}


int Board::setSquare(Square* s, int x, int y)
{
	squares[x][y] = s;
	return 0;
}

char Board::getBoardletter(int inputnum)
{
	switch (inputnum)
	{
	case 1:	return 'a'; case 2: return 'b'; case 3: return 'c'; case 4: return 'd'; case 5: return 'e'; case 6: return 'f'; case 7: return 'g'; case 8: return 'h';
	}
	
}

