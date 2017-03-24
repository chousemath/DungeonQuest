//
//  main.cpp
//  DungeonQuest
//
//  Created by Joseph Sungpil Choi on 3/24/17.
//  Copyright © 2017 Joseph Sungpil Choi. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    string playerName;
    int playerAge;
    cout << "Welcome weary traveller, you have come a long, long way..." << endl;
    cout << "Tell me traveller, what is your name? ";
    cin >> playerName;
    cout << "It is not by chance that we meet here tonight " + playerName << "." << endl;
    cout << "Your garments hide your features, what, may I ask, is your age? ";
    cin >> playerAge;
    if (playerAge < 15){
        cout << "The perils ahead of your are too great at this time, be gone!" << endl;
    } else {
        cout << "Ah, you have come to the right place at the right time..." << endl;
    }
    cout << "GAME OVER" << endl;
    return 0;
}
