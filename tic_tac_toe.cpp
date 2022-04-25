#include <iostream>
#include <cstdlib>
#include <cctype>
#include <vector>
#include <string>

using namespace std;

// global functions
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

void newBoard() {

    int game_board[9];

    for(int i = 0; i < 9; i++) {

        game_board[i] = i + 1;
        
    }

    cout << "   |   |  " << endl;
    cout << " " << game_board[0] << " | " << game_board[1] << " | " << game_board[2] << endl;
    cout << "___|___|___" << endl;
    cout << " " << game_board[3] << " | " << game_board[4] << " | " << game_board[5] << endl;
    cout << "___|___|___" << endl;
    
    cout << " " << game_board[6] << " | " << game_board[7] << " | " << game_board[8] << endl;
    cout << "   |   |  " << endl;

    cout << endl;

}

int quitGame() {

    return 0;
}

int main() {


    bool isWin = false;
    char userInput = ' ';

    while(!isWin) {

        // print game options for the players
        printOptions();

        if(userInput == ' ') {

            // print new board
            newBoard();
        }

        cout << "Please enter a valid game option : ";
        cin >> userInput;
        
        if(toupper(userInput) == 'Q') {
            
            // exit the application
            break;
        }
    }








    return 0;
}