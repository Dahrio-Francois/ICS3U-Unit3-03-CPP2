// Copyright (c) 2022 Dahrio Francois All rights reserved
//
// Created by: Dahrio Francois
// Created on: Feb 2022
// This program makes a number guessing game
//      with user input

#include <iostream>


int main() {
    // this function makes the game
    const int NUMBER = 7;
    int guess;

    // input
    std::cout << "Enter your guess (between 0 & 9): ";
    std::cin >> guess;

    // process
    if (guess != NUMBER) {
        std::cout << "\nIncorrect! Try again?";
        std::cout << "\n\nDone";
    } else {
        std::cout << "\nCorrect! You guessed the right number!";
        std::cout << "\n\nDone";
    }
}
