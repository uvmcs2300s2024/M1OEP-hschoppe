//
// Created by darkf on 1/25/2024.
//

#ifndef M1OEP_HSCHOPPE_CONNECTIONS_H
#define M1OEP_HSCHOPPE_CONNECTIONS_H

#include <iostream>
#include <vector>
#include <list>
#include <unordered_map>

using namespace std;

//https://stackoverflow.com/questions/7163069/c-string-to-enum
enum class Wordlist { ache = 1, burn = 1, smart = 1, sting = 1,
    guard = 2, mind = 2, tend = 2, watch = 2,
    brain = 3, courage = 3, heart = 3, home = 3,
    answer = 4, two = 4, wrist = 4, wrong = 4};

unordered_map<string, Wordlist> const word_map {
        {"ache", Wordlist::ache},
        {"burn", Wordlist::burn},
        {"smart", Wordlist::smart},
        {"sting", Wordlist::sting},
        {"guard", Wordlist::guard},
        {"mind", Wordlist::mind},
        {"tend", Wordlist::tend},
        {"watch", Wordlist::watch},
        {"brain", Wordlist::brain},
        {"courage", Wordlist::courage},
        {"heart", Wordlist::heart},
        {"home", Wordlist::home},
        {"answer", Wordlist::answer},
        {"two", Wordlist::two},
        {"wrist", Wordlist::wrist},
        {"wrong", Wordlist::wrong},
};





class Connections {

private:
    int test;
    //HURT : ache, burn, smart, sting
    //LOOK AFTER : guard, mind, tend, watch
    //SOUGHT AFTER IN WIZARD OF OZ: brain, courage, heart, home
    //SILENT W: answer, two, wrist, wrong
    //enum groups{HURT = "Hurt", LOOK AFTER = "Look After", S};

    string grid[4][4] = {{"a", "a", "a", "a"},
                         {"a", "a", "a", "a"},
                         {"a", "a", "a", "a"},
                         {"a", "a", "a", "a"}};
    const vector<string> words{"ache" "burn" "smart" "sting" "guard" "mind" "tend" "watch" "brain" "courage" "heart" "home" "answer" "two" "wrist" "wrong"};


public:

    /*
     * Default Constructor
     * Requires: nothing
     * Modifies: current_word
     * Effects: Chooses a random word from wordlist and sets up the game
     */
    Connections();

    /*
     * Default Constructor
     * Requires: nothing
     * Modifies: winning_numbers
     * Effects: Sets winning_numbers to two randomly chosen integers
     */

    bool  print_grid();

    bool print_rules();


    void scramble(int rows);



    bool print_turn(int guesses);

    bool input_validation(string guess, int rows);

    bool verify_guess(string wordOne, string wordTwo, string wordThree, string wordFour);

    bool remove_words(int number);


};

//Overload operator
//Check if two strings in wordlist carry the same value in the enum wordlist
bool operator==(string s1, string s2)  { //might need to be strings
    Wordlist word1 = word_map.at(s1);
    Wordlist word2 = word_map.at(s2);
    if (word1 == word2) {
        return true;
    }
    else {
        return false;
    }

}



#endif //M1OEP_HSCHOPPE_CONNECTIONS_H
