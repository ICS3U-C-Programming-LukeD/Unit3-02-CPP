// Copyright (c) 2025 Luke Di Bert All rights reserved.
//
// Created by: Luke Di Bert
// Date: March 17, 2025
// PLays a number guessing game with the user

#include <cmath>
// adds math library
#include <iostream>
// adds iostream library
const int NUMBER = 4;
int main() {
    int userNumber;
    // creates a variable to store input for user number
    std::cout << "Guess the right number! from 0-9" << std::endl;
    // introduces program
    std::cout << "Enter guess: " << std::endl;
    // prompts user to give guess
    std::cin >> userNumber;
    // stores user input inside the userNumber variable
    if (userNumber == NUMBER)
        std::cout << "You Guessed Right!" << std::endl;
    if (userNumber != NUMBER)
        std::cout << "You Guessed Wrong, Try Again!" << std::endl;
    // Displays message depending on guess
}
