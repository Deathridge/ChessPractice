#pragma once
class Square;

class Board {
public:
	Board();
	~Board();
	Square* getSquare(int x, int y);
private:
	Square* squares[8][8];
};