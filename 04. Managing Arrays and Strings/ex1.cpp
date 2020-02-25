// Copied from textbook answer

int main() {
    enum Square {
        Empty = 0,
        Pawn,
        Rook,
        Knight,
        Bishop,
        King,
        Queen
    };

    Square chessBoard[8][8];

    // Initialize the squares containing rooks
    chessBoard[0][0] = chessBoard[0][7] = Rook;
    chessBoard[7][0] = chessBoard[7][7] = Rook;

    return 0;
}