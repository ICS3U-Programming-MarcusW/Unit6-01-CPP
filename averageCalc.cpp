// Copyright (c) 2022 Marcus Wehbi All rights reserved.
//
// Created by: Marcus Wehbi
// Created on: Dec 14 2022
// This program generates 10 random numbers between 0 and 100 and then
// Calculates their average


#include <iostream>
#include <random>

// Function to generate numbers and calculate their average
int main() {
    // Declaring the constants
    // Amount of numbers to be generated
    const float MAX_ARRAY_SIZE = 10;
    // Lowest possible mark (start range)
    const int MIN_NUM = 0;
    // Highest possible mark (end range)
    const int MAX_NUM = 100;

    // Initialize the sum and counter
    int counter = 0;
    int sum = 0;

    // Declare the average variable and the array to hold the marks
    float average;
    int listOfInts[10];

    // Explain what the program does
    std::cout << "This program generates a list of 10 random ";
    std::cout << "numbers between 0 and 100. It then calculates the average.";
    std::cout << std::endl;
    std::cout << std::endl;

    // For loop to get ten numbers and add them to the sum
    // Track the marks added to the array
    for (counter = 0; counter < MAX_ARRAY_SIZE; counter++) {
        // Declare random number
        int randomNumber;

        std::random_device rseed;

        // mersenne_twister
        std::mt19937 rgen(rseed());

        // [0, 100]
        std::uniform_int_distribution<int> idist(MIN_NUM, MAX_NUM);

        randomNumber = idist(rgen);

        // Declaring array variable
        listOfInts[counter] = randomNumber;
        // Add each mark to the sum
        sum = sum + listOfInts[counter];
        // Display each mark as it is added to the sum
        std::cout << listOfInts[counter] << " added to the list at position ";
        std::cout << counter;
        std::cout << std::endl;
    }

    // Code to calculate the average
    average = sum / MAX_ARRAY_SIZE;
    // Code to display the average
    std::cout << std::endl;
    std::cout << "The average is " << average;
}
