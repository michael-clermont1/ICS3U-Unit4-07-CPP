// Copyright (c) 2022 Michael Clermont All rights reserved
//
// Created by: Michael Clermont
// Created on: Feb 2022
// This program prints numbers in columns of 5

#include <iostream>

int main() {
    // this function prints numbers in columns of 5
    int loopCounter = 1000;

    // process & output
    while (loopCounter <= 2000) {
        std::cout << loopCounter << " ";
        loopCounter++;
        if (loopCounter % 5 == 0) {
            std::cout << "\n";
        }
    }
    std::cout << "\nDone." << std::endl;
}
