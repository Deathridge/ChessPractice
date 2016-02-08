class Piece {
public:
	Piece(char * position, char * type);
	Piece();
	~Piece();
	char* getPosition();
	char* getType();
	void movePiece(char* position);
private:
	char* position;
	char* type;
};
