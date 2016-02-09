#include "stdafx.h"
#include "Square.h"
#include "Piece.h"

Square::Square(int coordX, int coordY, Piece* piece, Colour colour)
	:coorX{ coordX }, coorY{ coordY }, currentPiece{piece}, squareColour{colour}
{
	
}

Square::Square()
	:coorX{ NULL }, coorY{ NULL }, currentPiece{ nullptr }, squareColour{ White }
{

}

Square::~Square()
{
	delete currentPiece;
}

Colour Square::getColour()
{
	return squareColour;
}

int Square::getCoorX() 
{
	return coorX;
}
int Square::getCoorY()
{
	return coorY;
}

Piece* Square::getPiece()
{
	if (currentPiece)
		return currentPiece;
	else
		return new Piece("Empty", "White");
}