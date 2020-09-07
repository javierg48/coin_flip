// author: Javier Garcia Ramirez
// create date: Saturday, January 11th, 2020
// last modified: Sunday, January 12th, 2020
// filename: 1coin_flip.cpp
// description: flips a coin x times
// runtime: n/a

#include <iostream>
#include <ctime>
using namespace std;

int number;
int set;
int headsCount = 0;
int tailsCount = 0;

// Selects either heads or tails based on the number of sets the user wants.
int flip(){
    for (int i=1; i <= set; i++){
        number = rand() % 2 + 1;            // Randomizes number from 1-2.
        if (number == 1){
            cout << i << ". heads" << endl;
            headsCount = headsCount + 1;    // Records the amount of times heads was a result.
        }
        else {
            cout << i << ". tails" << endl;
            tailsCount = tailsCount + 1;
        }
    }
    return number;
    return headsCount;
    return tailsCount;
}


int main()
{   
    cout << "\nHow many times do you want to flip a coin? ";
    cin >> set;
    srand(time(0));         // This will randomize the number through the help of time.
    flip();                 // Calls the flip function.   
    cout << "Total amount of heads: " << headsCount << endl;
    cout << "Total amount of tails: " << tailsCount << endl << endl;
    return 0;

}

