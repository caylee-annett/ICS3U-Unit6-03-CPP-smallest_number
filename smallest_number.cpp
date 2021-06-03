// Copyright (c) 2021 Caylee Annett All rights reserved
//
// Created by Caylee Annett
// Created on June 2021
// This program finds the smallest number from an array of random numbers and
//  uses a For In loop

#include <iostream>
#include <random>
#include <array>

template<size_t N>
int CalculateNumber(std::array<int, N> listOfNumbers) {
    // This function finds the smallest number

    int smallest_number = 100;

    for (int counter : listOfNumbers) {
        if (counter <= smallest_number) {
            smallest_number = counter;
        }
    }

    return smallest_number;
}

main() {
    // This function generates the random numbers
    std::array<int, 10> numberList;
    int randomNumber;
    int number;

    // Process
    std::cout << "This program prints the smallest number from an array."
        << std::endl;
    std::cout << "" << std::endl;
    for (int loopCounter = 0; loopCounter < numberList.size(); loopCounter++) {
        std::random_device rseed;
        std::mt19937 rgen(rseed());
        std::uniform_int_distribution<int> idist(1, 100);
        randomNumber = idist(rgen);
        std::cout << "The random number is: " << randomNumber << std::endl;
        numberList[loopCounter] = randomNumber;
    }

    // Call functions
    number = CalculateNumber(numberList);

    // Output
    std::cout << "" << std::endl;
    std::cout << "The smallest number is: " << number << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}
