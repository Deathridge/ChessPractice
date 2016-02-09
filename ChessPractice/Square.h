#pragma once

class Piece;
enum Colour {White=0, Black=1};
class Square {
	
public:
	Square(int coordX, int coordY, Piece* piece, Colour colour);
	Square();
	~Square();
	Colour getColour();
	int getCoorX();
	int getCoorY();
	Piece* getPiece();
private:	
	Piece* currentPiece;
	Colour squareColour;
	int coorX;
	int coorY;	 
};