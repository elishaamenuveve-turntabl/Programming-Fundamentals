#include <iostream>

using namespace std;
void displayBoard(char board[][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << " " << board[i][j] << " ";
        }
        cout << endl;
    }
}

void startGame(char board[][3]) {
        for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = '?';
        }
    } 
}

void checkforGameOver(bool endGame, int board[][3]) {
    
}

void makeMove(char board[][3], bool& displayX, int coordinate[]) {
    if (displayX) {
        board[coordinate[0]][coordinate[1]] = 'X';
    } else {
        board[coordinate[0]][coordinate[1]] = 'O';
    }
    displayX = !displayX;
}
void requestMove(int moves[], bool playerOnesMove) {
    // make sure coordinates are valid
    int player = playerOnesMove? 1 : 2;
    cout << "Player " << player << "'s move" << endl;
    cout << "Coordinates start from row 0 column 0 and end at row 2 column 2.";
    cout << "Please type coordinates (e.g. 1 2) that haven't been taken: ";
    cin >> moves[0] >> moves[1];
}




int main() {
    /*  Write a 2 dimensional noughts and crosses game (tic-tac-toe), 
    implemented with either a 1D or 2D array. 
    The game should be displayed using an X character for a cross, 
    O for a nought, and ? for free location.
    The program should first display an empty board (full of ?s), 
    and repeatedly prompt two users for their next move. 
    Requests for Xs and Os are made alternately. 
    Moves may be indicated by a two digit code 
    (0 0 - top left, 2 2 bottom right),
    or any other mechanism considered helpful. 
    At the start of the game, and after each move the board should be re-displayed.*/

    char gameBoard[3][3];
    bool gameOver {false};
    bool isPlayerOnesTurn = true;
    int playersMove[2] {'\0'};

    startGame(gameBoard);
    while (!gameOver) {
        displayBoard(gameBoard);
        requestMove(playersMove,isPlayerOnesTurn);
        makeMove(gameBoard, isPlayerOnesTurn, playersMove);
    }
    
       

    return 0;
}


