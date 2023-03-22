#include <iostream>

using namespace std;


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

    tictacNo::startGame(gameBoard);
    while (!gameOver) {
        tictacNo::displayBoard(gameBoard);
       tictacNo::requestMove(playersMove,isPlayerOnesTurn);
        tictacNo::makeMove(gameBoard, isPlayerOnesTurn, playersMove);
    }
    
       

    return 0;
}


