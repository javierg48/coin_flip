// author: Javier Garcia Ramirez
// create date: Saturday, January 11th, 2020
// last modified: Thursday, March 25th, 2021
// filename: coin_flip.cpp
// description: flips a coin x times
// runtime: n/a

#include <iostream>
#include <ctime>


void flip(int set, int *flipResults);


int main() {   
    int flipResults[] = { 0, 0 };
    int set = 0;

    std::cout << "\nEnter number of times to flip a coin: ";
    std::cin >> set;

    srand(time(NULL)); // This will randomize the number generated through the help of time.
    flip(set, flipResults);

    std::cout << "\nTotal amount of HEADS: " << flipResults[0] << std::endl;
    std::cout << "Total amount of TAILS: " << flipResults[1] << std::endl << std::endl;
    return 0;
}


// Selects either heads or tails based on the number of sets the user wants.
void flip(int set, int *flipResults) {
    int rand_num = 0;
    std::cout << std::endl;

    for (unsigned i = 0; i < set; i++) {
        rand_num = rand() % 2 + 1;            // Randomizes number from 1-2.
        if (rand_num == 1) {
            std::cout << i+1 << ". Coin flip result: Heads" << std::endl;
            flipResults[0] += 1;
        } else {
            std::cout << i+1 << ". Coin flip result: Tails" << std::endl;
            flipResults[1] += 1;
        }
    }
}
