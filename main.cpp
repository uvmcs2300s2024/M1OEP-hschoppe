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

            int inputReturn = connections.input_validation(guess, rows);
            if (inputReturn == 1) {
                //Reset or scramble, condition does not change
            }
            else if (inputReturn == 2) {
                //everything correct, rows - 1
                rows -= 1;
            }
            else if (inputReturn == 3) {
                //valid guesses but not correct
                guesses -= 1;
                cout << "This is not a correct group. You have " << guesses << " guesses remaining." << endl;
            }
            else {
                cout << "Invalid input" << endl;
                connections.print_turn(guesses);
            }
        }
    }
    //Lose condition
    if (guesses == 0 || guesses < 0) {
        cout << "Game Over! You Lose." << endl;
    }

    //Win condition
    if (rows == 0) {
        cout << "Congratulations! You win! " << endl;
    }
}