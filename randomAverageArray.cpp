// Copyright (c) 2022 Jackson Naufal All rights reserved
// Created By Jackson Naufal
// Created On March 2022
// This is a random number averager

#include <iostream>
#include <random>

main() {
    float randomNum[10];
    float randomNumber;
    float total;
    float average;

    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne_twister
    std::uniform_int_distribution<int> idist(0, 100);  // [0,9]


    // process & output
    for (int counter = 0; counter <= 11; counter++) {
        randomNumber = idist(rgen);
        randomNum[counter] = randomNumber;
        std::cout << "The random number is " << randomNumber << std::endl;
    }

    for (int counter = 0; counter <= 11; counter++) {
        total = total + randomNum[counter];
    }
        average = total / 10;
        std::cout << "\nThe average number is " << average << std::endl;

    std::cout << "\nDone." << std::endl;
}
