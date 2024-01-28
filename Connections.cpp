//
// Created by darkf on 1/27/2024.
//

#include "Connections.h"
#include <ctime>
using namespace std;

inline Connections::Connections() {
    int random = rand() % 15 + 1;
    wordlist choice = wordlist(random);
}


//OVERLOAD OPERATOR - USED TO DETERMINE IF THINGS ARE EQUAL BY WHETHER THEY HAVE THE SAME ENUM VALUE
//ENUM - SIXTEEN WORDS, EACH WITH 1,2,3,4 AND THAT DETERMINES WHICH GROUP

bool inline Connections::print_grid() {

}

bool inline Connections::print_rules() {
    cout << "Welcome to Connections, based off the daily New York Times game!" << endl;
    cout << "You will be shown a grid of sixteen words in random order." << endl;
    cout << "These words fit into four secret categories!" << endl;
}