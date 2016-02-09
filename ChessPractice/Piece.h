
class Piece {
public:
	Piece(char* type, char* colour);
	Piece();
	~Piece();	
	char* getType();
	char* getColour();	
	
private:
	
	char* type;
	char* colour;
};

//Create inheriting class Pawn from Piece class
class Pawn : public Piece
{
public:
	Pawn(char* colour)
		:Piece("Pawn", colour)
	{}	
};

class King : public Piece
{
public:
	King(char* colour)
		:Piece("King", colour)
	{}
};

class Queen : public Piece
{
public:
	Queen(char* colour)
		:Piece("Queen", colour)
	{}
};

class Knight : public Piece
{
public:
	Knight(char* colour)
		:Piece("Knight", colour)
	{}
};

class Rook : public Piece
{
public:
	Rook(char* colour)
		:Piece("Rook", colour)
	{}
};

class Bishop : public Piece
{
public:
	Bishop(char* colour)
		:Piece("Bishop", colour)
	{}
};