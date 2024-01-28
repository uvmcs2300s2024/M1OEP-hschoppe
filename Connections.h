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
    const enum wordlist { ache = 1, burn = 1, smart = 1, sting = 1,
                    guard = 2, mind = 2, tend = 2, watch = 2,
                    brain = 3, courage = 3, heart = 3, home = 3,
                    answer = 4, two = 4, wrist = 4, wrong = 4};
    string grid[4][4] = {{"a", "a", "a", "a"},
                         {"a", "a", "a", "a"},
                         {"a", "a", "a", "a"},
                         {"a", "a", "a", "a"}};
    const list<string> words{"ache" "burn" "smart" "sting" "guard" "mind" "tend" "watch" "brain" "courage" "heart" "home" "answer" "two" "wrist" "wrong"};
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


    bool scramble();


    bool remove_words();



};















#endif //M1OEP_HSCHOPPE_CONNECTIONS_H
