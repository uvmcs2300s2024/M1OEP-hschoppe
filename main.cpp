//
// Created by darkf on 1/25/2024.
//
#include "Connections.cpp"
using namespace std;

int main() {
    Connections connections;
    connections.print_rules();

    int guesses = 5;
    int rows = 4;
    string guess;

    //repeat until guesses = 0 OR rows = 0
    while (guesses > 0 && rows > 0) {
        connections.print_grid();
        connections.print_turn(guesses); // in a loop?
        bool condition = false;

        //Repeat until a guess is made correctly or incorrectly
        while (!condition) {
            getline(cin, guess);

            if (connections.input_validation(guess, rows)) {
                cout << "wow" << endl;
            }
            else {
                cout << "Invalid input" << endl;
                connections.print_turn(guesses);
            }
        }



    }

    //rand() % 15 + 1 to choose word
}