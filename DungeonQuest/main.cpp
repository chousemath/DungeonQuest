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
#include <stdlib.h>

using namespace std;

void say(string text) {
    cout << text << endl;
}

int endGame() {
    say("GAME OVER");
    return 0;
}

int main(int argc, const char * argv[]) {
    string playerFirstName;
    string playerLastName;
    int playerAge;
    int playerExperience;
    int magicPoints;
    
    // all symbols discarded at compile time
    enum gameDifficulty {NOVICE, EASY, NORMAL, HARD, UNBEATABLE};
    enum riddle1Answers {DOG, TABLE, MAN, SQUID};
    enum choice1Answers {CLEAR, OVERGROWN, DARK, LIGHT};
    
    // PLAYER NAME
    say("Welcome weary traveller, you have come a long, long way...");
    cout << "Tell me traveller, what is your first name? ";
    cin >> playerFirstName;
    cout << "And what is your last name? ";
    cin >> playerLastName;
    cout << "It is not by chance that we meet here tonight " + playerFirstName + " " + playerLastName
         << "." << endl;
    std::string copy(playerFirstName + " " + playerLastName); // make a copy of the string
    std::reverse(copy.begin(), copy.end());
    cout << "Your name backwards, by the way, is: "
         << copy
         << endl;
    
    // PLAYER AGE AND EXPERIENCE
    cout << "Your garments hide your features, what, may I ask, is your age? ";
    cin >> playerAge;
    cout << "And for how many years have you been on this never ending quest? ";
    cin >> playerExperience;
    // check if what the player just entered makes sense
    while (playerAge < playerExperience) {
        say("\nThat is nonsense! Please be truthful...I will ask you again...");
        cout << "Your garments hide your features, what, may I ask, is your age? ";
        cin >> playerAge;
        cout << "And for how many years have you been on this never ending quest? ";
        cin >> playerExperience;
    }
    
    if (playerAge < 15){
        say("The perils ahead of your are too great at this time, be gone!");
    } else {
        say("Ah, you have come to the right place at the right time...");
        say("How difficult of a quest are you prepared for traveller?");
        say("\t0 - NOVICE");
        say("\t1 - EASY");
        say("\t2 - NORMAL");
        say("\t3 - HARD");
        say("\t4 - UNBEATABLE");
        cout << "\nENTER DIFFICULTY NUMBER: ";
        int myDifficulty;
        cin >> myDifficulty;
        switch (myDifficulty) {
            case NOVICE:
                say("You have chosen the NOVICE level adventure~");
                say("You're kidding me right?");
                break;
            case EASY:
                say("You have chosen the EASY level adventure~");
                say("Psshhh get out of my site you simpleton!");
                break;
            case NORMAL:
                say("You have chosen the NORMAL level adventure~");
                say("A normal adventure for a normal person. You disapoint me...");
                break;
            case HARD:
                say("You have chosen the HARD level adventure~");
                say("Good things come to those who seek a challenge.");
                break;
            case UNBEATABLE:
                say("You have chosen the UNBEATABLE level adventure~");
                say("A challenge you seek? A challenge you will have!");
                break;
            default:
                say("You have chosen an undefined difficulty level");
                say("You must be totally crazy traveller, I like it!");
                break;
        }
    }
    
    cout << "Before you embark on your quest, I must ask you a riddle\n"
         << "What walks on 4 legs in the morning, 2 in the afternoon, and 3 in the evening?" << endl;
    say("\t0: a dog");
    say("\t1: a table");
    say("\t2: a man");
    say("\t3: a squid");
    cout << "\nENTER ANSWER NUMBER: ";
    int riddle1Answer;
    cin >> riddle1Answer;
    switch (riddle1Answer) {
        case DOG:
            say("\"DOG\" is not the correct answer you FOOL");
            return endGame();
            break;
        case TABLE:
            say("\"TABLE\" is incorrect you IDIOT");
            return endGame();
            break;
        case MAN:
            say("You have chose wisely...");
            break;
        case SQUID:
            say("Get out of my sight you fool, \"SQUID\" is WRONG");
            return endGame();
            break;
        default:
            say("You disappoint me stranger...");
            return endGame();
            break;
    }
    
    say("Now that you have passed the first challenge, I will award you with 10 magic points");
    magicPoints += 10;
//    say("You have " + magicPoints + " magic points currently");
    say("Now for the first choice on your long journey...");
    say("You see a road before you, what kind of road is it?");
    say("\t0: clear");
    say("\t1: overgrown");
    say("\t2: dark");
    say("\t3: light");
    cout << "\nENTER ANSWER NUMBER: ";
    int choice1Answer;
    cin >> choice1Answer;
    switch (choice1Answer) {
        case CLEAR:
            say("I see you have chosen the clear path...interesting...");
            break;
        case OVERGROWN:
            say("Aaaaah the overgrown path, very fascinating...");
            break;
        case DARK:
            say("The dark path? You surprise me traveller...");
            break;
        case LIGHT:
            say("Staying in the light I see? Very well...");
            break;
        default:
            say("Come now...I have no time for games...");
            break;
    }
    say("You have come to the end dear traveller...");
    return endGame();
}
