#include <iostream>
#include <string>

using namespace std;

int main() {
    int countdown;
    cin >> countdown;
    for(int i=0; i<countdown; i++) {
        string game;
        string gameline = "";
        cin >> game;
        int inputLength = game.length();
        for(int i=inputLength; i>1; i--) {
            char backwardsline = game[i-1];
            if(backwardsline == '0'){
                gameline += "000";
            } else if(backwardsline == '1') {
                gameline += "100";
            } else if(backwardsline == '2') {
                gameline += "010";
            } else if(backwardsline == '3') {
                gameline += "110";
            } else if(backwardsline == '4') {
                gameline += "001";
            } else if(backwardsline == '5') {
                gameline += "101";
            } else if(backwardsline == '6') {
                gameline += "011";
            } else if(backwardsline == '7') {
                gameline += "111";
            }
        }
        string playedSpots = gameline.substr(0, 9);
        string choiceSpots = gameline.substr(9, 18);
        string tictac = "";
        int j = 0;
        for(int i=0; i<9; i++) {
            if(playedSpots[i] == '1') {
                if(choiceSpots[j] == '1') {
                    tictac += "x";
                }
                else {
                    tictac += "o";
                }
                j+=1;
            }
            else {
                tictac += " ";
            }
        }
        string topLine = tictac.substr(0, 3);
        string oldMiddleLine = tictac.substr(3, 6);
        string middleLine = oldMiddleLine.substr(0, 3);
        string bottomLine = tictac.substr(6, 9);
        /*
        cout << topLine[0] << topLine[1] << topLine[2] << endl;
        cout << middleLine[0] << middleLine[1] << middleLine[2] << endl;
        cout << bottomLine[0] << bottomLine[1] << bottomLine[2] << endl;
        */
        if(topLine[0] == topLine[1] and topLine[1] == topLine[2] and topLine[2] == 'x') {
            cout << "X wins" << endl;
        } else if(topLine[0] == topLine[1] and topLine[1] == topLine[2] and topLine[2] == 'o') {
            cout << "O wins" << endl;
        } else if(middleLine[0] == middleLine[1] and middleLine[1] == middleLine[2] and middleLine[2] == 'x') {
            cout << "X wins" << endl;
        } else if(middleLine[0] == middleLine[1] and middleLine[1] == middleLine[2] and middleLine[2] == 'o') {
            cout << "O wins" << endl;
        } else if(bottomLine[0] == bottomLine[1] and bottomLine[1] == bottomLine[2] and bottomLine[2] == 'x') {
            cout << "X wins" << endl;
        } else if(bottomLine[0] == bottomLine[1] and bottomLine[1] == bottomLine[2] and bottomLine[2] == 'o') {
            cout << "O wins" << endl;
        } else if(topLine[0] == middleLine[0] and middleLine[0] == bottomLine[0] and bottomLine[0] == 'x') {
            cout << "X wins" << endl;
        } else if(topLine[0] == middleLine[0] and middleLine[0] == bottomLine[0] and bottomLine[0] == 'o') {
            cout << "O wins" << endl;
        } else if(topLine[1] == middleLine[1] and middleLine[1] == bottomLine[1] and bottomLine[1] == 'x') {
            cout << "X wins" << endl;
        } else if(topLine[1] == middleLine[1] and middleLine[1] == bottomLine[1] and bottomLine[1] == 'o') {
            cout << "O wins" << endl;
        } else if(topLine[2] == middleLine[2] and middleLine[2] == bottomLine[2] and bottomLine[2] == 'x') {
            cout << "X wins" << endl;
        } else if(topLine[2] == middleLine[2] and middleLine[2] == bottomLine[2] and bottomLine[2] == 'o') {
            cout << "O wins" << endl;
        } else if(topLine[0] == middleLine[1] and middleLine[1] == bottomLine[2] and bottomLine[2] == 'x') {
            cout << "X wins" << endl;
        } else if(topLine[0] == middleLine[1] and middleLine[1] == bottomLine[2] and bottomLine[2] == 'o') {
            cout << "O wins" << endl;
        } else if(topLine[2] == middleLine[1] and middleLine[1] == bottomLine[0] and bottomLine[0] == 'x') {
            cout << "X wins" << endl;
        } else if(topLine[2] == middleLine[1] and middleLine[1] == bottomLine[0] and bottomLine[0] == 'o') {
            cout << "O wins" << endl;
        } else if(playedSpots == "111111111") {
            cout << "Cat's" << endl;
        } else {
            cout << "In progress" << endl;
        }
    }
}
