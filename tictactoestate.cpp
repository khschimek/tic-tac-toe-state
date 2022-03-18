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
        cout << gameline << endl;
        string playedSpots = gameline.substr(0, 9);
        cout << playedSpots << endl;
        string choiceSpots = gameline.substr(9, gameline.length());
        cout << choiceSpots << endl;
    }
}
