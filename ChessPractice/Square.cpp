#include "stdafx.h"
#include "Square.h"
#include "Piece.h"

Square::Square(char* coordX, char* coordY, Piece* piece, Colour colour)
	:coorX{ coordX }, coorY{ coordY }, currentPiece{piece}, squareColour{colour}
{
	
}

Square::Square()
	:coorX{ nullptr }, coorY{ nullptr }, currentPiece{ nullptr }, squareColour{ White }
{

}

Colour Square::getColour()
{
	return squareColour;
}

char* Square::getCoorX() 
{
	return coorX;
}
char* Square::getCoorY()
{
	return coorY;
}

Piece* Square::getPiece()
{
	return currentPiece;
}