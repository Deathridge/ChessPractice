#pragma once
class Piece {
public:
	Piece(char[] position, char[] type);
	char& position[](int id);
	char& type[](int id);
private:
	int id;
	char* position;
	char* type;
};
