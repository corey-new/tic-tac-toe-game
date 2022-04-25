#include <iostream>
#include <cstdlib>
#include <cctype>
#include <vector>
#include <string>

using namespace std;


class boardOptions {
    public:
    // char array to create board space holder
    // c_str() to convert to 'X' or 'O' character
    vector <int>game_board;

    boardOptions() {

        for(int i = 0; i < 10; i++) {
            game_board.push_back(i);        
        }
    }

        void newBoard() {

            cout << "   |   |  " << endl;
            cout << " " << game_board[0] << " | " << game_board[1] << " | " << game_board[2] << endl;
            cout << "___|___|___" << endl;
            cout << " " << game_board[3] << " | " << game_board[4] << " | " << game_board[5] << endl;
            cout << "___|___|___" << endl;
            
            cout << " " << game_board[6] << " | " << game_board[7] << " | " << game_board[8] << endl;
            cout << "   |   |  " << endl;

            cout << endl;

        }

}; 

class playerOptions {
    public:
    // firstPlayer will always have the first move
    char firstPlayer, secondPlayer, turn;

    playerOptions() {

        firstPlayer = 'X';
        secondPlayer = 'O';
        turn = firstPlayer;
    }

    void printOptions() {
        cout << "\n" << endl;
        cout << "        TIC-TAC-TOE" << endl;
        cout << "Make move ............ Enter <Space Number>" << endl;
        cout << "New game ............. Enter N" << endl;
        cout << "Quit game ............ Enter Q" << endl;
        cout << endl;
        cout << "       CHOOSE PLAYER" << endl;
        cout << "Player X ............. Enter X" << endl;
        cout << "Player O ............. Enter O" << endl;
        cout << "\n" << endl;
    }
       

};









int main() {

    // declared game class objects
    boardOptions board;
    playerOptions player;

    // set global game variables
    bool isWin = false;
    char userInput = ' ';

    while(!isWin) {

        // print game options for the players
        player.printOptions();

        if(userInput == ' ') {
            // print new board
            board.newBoard();
        }
        cout << "Enter a valid game option\n";
        cout << "or choose player to start a game : ";
        cin >> userInput;
        
        if(toupper(userInput) == 'Q') {
            // exit the application
            break;
        }



    }

    return 0;
}