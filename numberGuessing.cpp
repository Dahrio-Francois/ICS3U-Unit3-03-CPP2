// Copyright (c) 2022 Dahrio Francois All rights reserved
//
// Created by: Dahrio Francois
// Created on: Feb 2022
// This program makes a number guessing game
//      with user input

#include <iostream>

#include <random>


int main() {
    // this function makes the game
    int someRandomNumber;
    int guess;


    std::random_device rseed;

    std::mt19937 rgen(rseed());  // mersenne_twister

    std::uniform_int_distribution<int> idist(0, 9);  // [0,9]

    someRandomNumber = idist(rgen);

    // input
    std::cout << "Enter your guess (between 0 & 9): ";
    std::cin >> guess;

    // process
    if (guess != someRandomNumber) {
        std::cout << "\nIncorrect!";
        std::cout << " The random number was " << someRandomNumber << std::endl;
        std::cout << "\nDone";
    } else {
        std::cout << "\nCorrect! You guessed the right number!";
        std::cout << "\n\nDone";
    }
}
