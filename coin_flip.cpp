// author: Javier Garcia Ramirez
// create date: Saturday, January 11th, 2020
// last modified: Thursday, April 21st, 2022
// filename: coin_flip.cpp
// description: flips a coin x times
// runtime: n/a

#include <iostream>
#include <ctime>


// outputs each flip result
void track_tosses(int sets, int *heads, int *tails);

// returns 1 for heads, 2 for tails
int flip();


int main() {   
    srand(time(NULL)); // This will randomize the number generated through the help of time.
    int flips = 0, heads_count = 0, tails_count = 0;

    std::cout << "\nEnter number of times to flip a coin: ";
    std::cin >> flips;

	track_tosses(flips, &heads_count, &tails_count);

    std::cout << "\nTotal amount of HEADS: " << heads_count << std::endl;
    std::cout << "Total amount of TAILS: " << tails_count << std::endl << std::endl;
    return 0;
}


void track_tosses(int sets, int *heads, int *tails){
    for (unsigned i = 0; i < sets; i++) {
		int toss = flip();
        if (toss == 1) {
            std::cout << i+1 << ". Coin flip result: Heads" << std::endl;
			(*heads)++;
        } else {
            std::cout << i+1 << ". Coin flip result: Tails" << std::endl;
			(*tails)++;
        }
    }
}


// returns 1 for heads, 2 for tails
int flip() {
    int rand_num = rand() % 2 + 1;            // Randomizes number from 1-2.
	return rand_num;
}