#pragma once

class Piece;
enum Colour {White=0, Black=1};
class Square {
	
public:
	Square(char* coordX, char* coordY, Piece* piece, Colour colour);
	Square();
	~Square();
	Colour getColour();
	char* getCoorX();
	char* getCoorY();
	Piece* getPiece();
private:	
	Piece* currentPiece;
	Colour squareColour;
	char* coorX;
	char* coorY;	 
};