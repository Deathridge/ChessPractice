#include "stdafx.h"
#include "Piece.h"

Piece::Piece(char[] position, char[] type)
	:position{ position }, type{ type }, id{}
{

}

char& Piece::position[](int id)
{
	return position;
}

char& Piece::type[](int id)
{
	return type;
}