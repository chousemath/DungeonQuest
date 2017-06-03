//
//  main.cpp
//  DungeonQuest
//
//  Created by Joseph Sungpil Choi on 3/24/17.
//  Copyright © 2017 Joseph Sungpil Choi. All rights reserved.
//

// the '#' symbol is a directive to the C-preprocessor
// cuts-and-pastes a library into your source code
#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main(int argc, const char * argv[]) {
    string playerName;
    int playerAge;
    
    // all symbols discarded at compile time
    enum gameDifficulty {NOVICE, EASY, NORMAL, HARD, UNBEATABLE};
    
    cout << "Welcome weary traveller, you have come a long, long way..." << endl;
    cout << "Tell me traveller, what is your name? ";
    cin >> playerName;
    cout << "It is not by chance that we meet here tonight " + playerName << "." << endl;
    std::string copy(playerName); // make a copy of the string
    std::reverse(copy.begin(), copy.end());
    cout << "Your name backwards, by the way, is: "
         << copy
         << endl;
    cout << "Your garments hide your features, what, may I ask, is your age? ";
    cin >> playerAge;
    if (playerAge < 15){
        cout << "The perils ahead of your are too great at this time, be gone!" << endl;
    } else {
        cout << "Ah, you have come to the right place at the right time..." << endl;
        cout << "How difficult of a quest are you prepared for traveller?" << endl;
        cout << "\t0 - NOVICE" << endl;
        cout << "\t1 - EASY" << endl;
        cout << "\t2 - NORMAL" << endl;
        cout << "\t3 - HARD" << endl;
        cout << "\t4 - UNBEATABLE" << endl;
        cout << "\nENTER DIFFICULTY NUMBER: ";
        int myDifficulty;
        cin >> myDifficulty;
        switch (myDifficulty) {
            case NOVICE:
                cout << "You have chosen the NOVICE level adventure~" << endl;
                cout << "You're kidding me right?" << endl;
                break;
            case EASY:
                cout << "You have chosen the EASY level adventure~" << endl;
                cout << "Psshhh get out of my site you simpleton!" << endl;
                break;
            case NORMAL:
                cout << "You have chosen the NORMAL level adventure~" << endl;
                cout << "A normal adventure for a normal person. You dissapoint me..." << endl;
                break;
            case HARD:
                cout << "You have chosen the HARD level adventure~" << endl;
                cout << "Good things come to those who seek a challenge." << endl;
                break;
            case UNBEATABLE:
                cout << "You have chosen the UNBEATABLE level adventure~" << endl;
                cout << "A challenge you seek? A challenge you will have!" << endl;
                break;
            default:
                cout << "You have chosen an undefined difficulty level" << endl;
                cout << "You must be totally crazy traveller, I like it!" << endl;
                break;
        }
    }
    cout << "GAME OVER" << endl;
    return 0;
}
