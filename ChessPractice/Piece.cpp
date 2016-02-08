#include "stdafx.h"
#include "Piece.h"

Piece::Piece(char* position, char* type)
	:position{ position }, type{ type }
{

}

Piece::Piece()
	:position{nullptr}, type{nullptr}
{

}

Piece::~Piece()
{
	position = nullptr;
	type = nullptr;
}

char* Piece::getPosition()
{
	return position;
}

char* Piece::getType()
{
	return type;
}

void Piece::movePiece(char* pos)
{
	position = pos;
}