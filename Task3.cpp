/*#include <iostream>

using namespace std;

int main() {
    char board[3][3] = { {' ', ' ', ' '},
                        {' ', ' ', ' '},
                        {' ', ' ', ' '} };

    char currentPlayer = 'X';

    while (true) {
        // Display the current state of the board
        cout << "-------------" << endl;
        for (int i = 0; i < 3; ++i) {
            cout << "| ";
            for (int j = 0; j < 3; ++j) {
                cout << board[i][j] << " | ";
            }
            cout << endl << "-------------" << endl;
        }

        
        int row, col;
        cout << "Player " << currentPlayer << ", enter your move \nrow (0-2) :";
        cin >> row;

        cout<<"column (0-2) : ";
        cin>>col;

        
        if (row < 0 || row >= 3 || col < 0 || col >= 3 || board[row][col] != ' ') {
            cout << "Invalid move! Try again." << endl;
            continue;
        }

        
        board[row][col] = currentPlayer;

        
        bool win = false;
        for (int i = 0; i < 3; ++i) {
            if ((board[i][0] == currentPlayer && board[i][1] == currentPlayer && board[i][2] == currentPlayer) ||
                (board[0][i] == currentPlayer && board[1][i] == currentPlayer && board[2][i] == currentPlayer)) {
                win = true;
                break;
            }
        }

        
        if (!win && ((board[0][0] == currentPlayer && board[1][1] == currentPlayer && board[2][2] == currentPlayer) ||
            (board[0][2] == currentPlayer && board[1][1] == currentPlayer && board[2][0] == currentPlayer))) {
            win = true;
        }

        if (win) {
            
            cout << "-------------" << endl;
            for (int i = 0; i < 3; ++i) {
                cout << "| ";
                for (int j = 0; j < 3; ++j) {
                    cout << board[i][j] << " | ";
                }
                cout << endl << "-------------" << endl;
            }
            cout << "Player " << currentPlayer << " wins!" << endl;
            break;
        }

        
        bool draw = true;
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                if (board[i][j] == ' ') {
                    draw = false;
                    break;
                }
            }
            if (!draw) {
                break;
            }
        }

        if (draw) {
            
            cout << "-------------" << endl;
            for (int i = 0; i < 3; ++i) {
                cout << "| ";
                for (int j = 0; j < 3; ++j) {
                    cout << board[i][j] << " | ";
                }
                cout << endl << "-------------" << endl;
            }
            cout << "It's a draw!" << endl;
            break;
        }

        
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    return 0;
}
*/