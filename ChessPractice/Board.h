#pragma once
class Square;

class Board {
public:
	Board();
	~Board();
	Square* getSquare(int x, int y);
	int setSquare(Square* s, int x, int y);
	char getBoardletter(int inputnum);
	char* getType(int inputtype);
private:
	Square* squares[8][8];
};