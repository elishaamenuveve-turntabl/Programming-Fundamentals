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
    int player;
    if (playerOnesMove)
        player = 1;
    else player = 2;
    cout << "Player " << player << "'s move" << endl;
    cout << "Coordinates start from row 0 column 0 and end at row 2 column 2.";
    cout << "Please type coordinates (e.g. 1 2) that haven't been taken: ";
    cin >> moves[0] >> moves[1];
}


