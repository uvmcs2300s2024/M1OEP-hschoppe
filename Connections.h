//
// Created by darkf on 1/25/2024.
//

#ifndef M1OEP_HSCHOPPE_CONNECTIONS_H
#define M1OEP_HSCHOPPE_CONNECTIONS_H

#include <iostream>
#include <vector>
#include <list>
using namespace std;

class Connections {

private:
    int test;
    //HURT : ache, burn, smart, sting
    //LOOK AFTER : guard, mind, tend, watch
    //SOUGHT AFTER IN WIZARD OF OZ: brain, courage, heart, home
    //SILENT W: answer, two, wrist, wrong
    enum wordlist { ache = 1, burn = 1, smart = 1, sting = 1,
                    guard = 2, mind = 2, tend = 2, watch = 2,
                    brain = 3, courage = 3, heart = 3, home = 3,
                    answer = 4, two = 4, wrist = 4, wrong = 4};
    string grid[4][4] = {{"a", "a", "a", "a"},
                         {"a", "a", "a", "a"},
                         {"a", "a", "a", "a"},
                         {"a", "a", "a", "a"}};
    const vector<string> words{"ache" "burn" "smart" "sting" "guard" "mind" "tend" "watch" "brain" "courage" "heart" "home" "answer" "two" "wrist" "wrong"};
public:

    ostream& operator==(wordlist s1, wordlist s2, )  { //might need to be strings
        wordlist
    }
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


    bool remove_words();

    bool print_turn(int guesses);

    bool input_validation(string guess, int rows);

    bool verify_guess(string wordOne, string wordTwo, string wordThree, string wordFour);



};















#endif //M1OEP_HSCHOPPE_CONNECTIONS_H
