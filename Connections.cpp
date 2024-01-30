//
// Created by darkf on 1/27/2024.
//

#include "Connections.h"
#include <ctime>
#include <list>
#include <string>
#include <sstream>
using namespace std;

inline Connections::Connections() {
    int random = rand() % 15 + 1;
    wordlist choice = wordlist(random);
}


//OVERLOAD OPERATOR - USED TO DETERMINE IF THINGS ARE EQUAL BY WHETHER THEY HAVE THE SAME ENUM VALUE
//ENUM - SIXTEEN WORDS, EACH WITH 1,2,3,4 AND THAT DETERMINES WHICH GROUP

bool inline Connections::print_grid() {
    return true;
}

bool inline Connections::print_rules() {
    cout << "Welcome to Connections, based off the daily New York Times game!" << endl;
    cout << "You will be shown a grid of sixteen words in random order." << endl;
    cout << "These words fit into four secret categories." << endl;
    cout << "It is your job to separate them into these categories to win the game!" << endl;
    return true;
}

void inline Connections::scramble(int rows) {
    //Take all words and randomly assign places in grid
    //Uses number remaining???
    int randomNumber, listSize;
    string currentWord;

    //Make a backup list to iterate through while sorting
    vector<string> wordsCopy;
    wordsCopy = words;

    //Number of columns
    for (int down = 0; down < rows; ++down) {
        //Number of rows
        for (int across = 0; across < 4; ++across) {
            //Now will iterate through from left to right
            listSize = wordsCopy.size(); //should automatically update while iterating through
            randomNumber = rand() % listSize + 1;
            currentWord = wordsCopy[randomNumber];

            //replaces position of grid with current word
            grid[down][across] = currentWord;

            //removes current word from wordscopy
            wordsCopy.erase(wordsCopy.begin() + randomNumber);

        }
    }



}

bool inline Connections::remove_words() {
    return true;
}

bool inline Connections::print_turn(int guesses) {
    cout << "You have " << guesses << " guesses remaining. " << endl;
    cout << "Type your four words separated by spaces to guess, type (s) to shuffle words, or type (r) for rules." << endl;
    return true;
}

bool inline Connections::input_validation(string guess, int rows) {
    //Test if asking for instructions or shuffle:
    cout << guess << endl;
    if (guess == "r") {
        print_rules();
    }
    else if (guess == "s") {
        scramble(rows);
    }
    else {
        //We are looking for four separate words, separated by at least one space.
        //Number of spaces do not matter

        //https://www.simplilearn.com/tutorials/cpp-tutorial/string-stream-in-cpp#:~:text=StringStream%20in%20C%2B%2B%20is,defined%20in%20the%20StringStream%20class.
        stringstream ss(guess);
        string wordOne, wordTwo, wordThree, wordFour;
        string singleWord;
        int counter = 1;

        //Separate into four words - if more then fails
        while(ss.good()) {
            getline(ss, singleWord);
            if (counter == 1) {
                wordOne = singleWord;
                counter++;

            } else if (counter == 2) {
                wordTwo = singleWord;
                counter++;

            } else if (counter == 3) {
                wordThree = singleWord;
                counter++;

            } else if (counter == 4) {
                wordFour = singleWord;
                counter++;

            } else {
                return false;
            }
        }

        //Verifies that you do not have fewer than four words
        if (counter != 5) {
            return false;
        }

        //Verify that words are in the list
        //Make a copy of the vector
        vector<string> wordsCopy;
        wordsCopy = words;
        int counting = 0;

        for (int i = 0; i < words.size(); i++) {
            if (wordOne == wordsCopy[i]) {
                wordsCopy[i].erase(i);
                counting++;
            }

            if (wordTwo == wordsCopy[i]) {
                wordsCopy[i].erase(i);
                counting++;
            }

            if (wordThree == wordsCopy[i]) {
                wordsCopy[i].erase(i);
                counting++;
            }

            if (wordFour == wordsCopy[i]) {
                wordsCopy[i].erase(i);
                counting++;
            }
        }

        //Tests that all four were removed from the copy, meaning all four words still existed in possibilities
        int comparisonSize = words.size() - 4;
        if (counting == 4 && wordsCopy.size() == comparisonSize) {
            verify_guess(wordOne, wordTwo, wordThree, wordFour);
            //TODO return here after verify guess
        }


        //guess >> wordOne >> wordTwo >> wordThree >>wordFour;


    }

}

bool inline verify_guess(string wordOne, string wordTwo, string wordThree, string wordFour) {
    //OVERLOAD OPERATORS !!!!

    if (wordOne == wordTwo == wordThree == wordFour) {

    }

}