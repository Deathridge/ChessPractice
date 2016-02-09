#include "stdafx.h"
#include "Piece.h"

Piece::Piece(char* type,char* colour)
	:type{ type }, colour{colour}
{

}

Piece::Piece()
	: type{nullptr}, colour{nullptr}
{

}

Piece::~Piece()
{
	
	type = nullptr;
	colour = nullptr;
}



char* Piece::getType()
{
	return type;
}

char* Piece::getColour()
{
	return colour;
}


