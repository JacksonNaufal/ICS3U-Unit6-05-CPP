// Copyright (c) 2022 Jackson Naufal All rights reserved
// Created By Jackson Naufal
// Created On March 2022
// array, column, and row adder

#include <iostream>
#include <random>
#include <array>

template <int row, int columns>
int ArrayMean(int (&randomGrid)[row][columns]) {
    // this function calculates the mean of all the elements in a 2D array

    int sumOfArrayNumbers = 0;

    // process
    for (size_t rowVal = 0; rowVal < row; rowVal++) {
        for (size_t columnVal = 0; columnVal < columns; columnVal++)
            sumOfArrayNumbers += randomGrid[rowVal][columnVal];
    }
    int arraySize = sizeof(randomGrid)/sizeof(randomGrid[0]);
    sumOfArrayNumbers = sumOfArrayNumbers / arraySize;

    return sumOfArrayNumbers;
}


int main() {
    // this function creates a 2D array

    int randomNumber = 0;
    int roundedArrayMean;
    const int row = 4;
    const int columns = 4;
    int matrix[row][columns];

    std::random_device rseed;
    std::mt19937 rgen(rseed());
    // mersenne_twister
    std::uniform_int_distribution<int> idist(0, 50);
    // [0, 50]

    // output
    for (int rowVal = 0; rowVal < row; rowVal++) {
        for (int columnVal = 0; columnVal < columns; columnVal++) {
            randomNumber = idist(rgen);
            matrix[rowVal][columnVal] = randomNumber;
            std::cout << randomNumber << ", ";
        }
        std::cout << std::endl;
    }

    roundedArrayMean = ArrayMean(matrix);
    std::cout << "" << std::endl;
    std::cout << "The mean of the matrix is: "
    << roundedArrayMean << std::endl;
}
