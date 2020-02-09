//
//  kuntzrt_lab4b.cpp
//  Lab 4
//
//  Created by Rachel Kuntz on 2/3/20.
//  Copyright © 2020 Rachel Kuntz. All rights reserved.
//

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    // define variables
    int die1;
    int die2;
    int sum;
    bool winning;
    bool losing;
    
    // initialize variables
    winning = 0;
    losing = 0;
    
    // roll dice
    do {
        // seed variable by system time
        srand(time(NULL));
        
        // initialize dice
        die1 = (rand() % 6) + 1;
        die2 = (rand() % 6) + 1;
        
        // roll dice
        cout << die1 << " " << die2 << endl;
        sum = die1 + die2;
        if ((sum == 4) || (sum == 6) || (sum == 12)) {
            cout << "Tie!" << endl;
            cout << "Roll again!" << endl;
        } else if ((sum == 7) || (sum == 9) || (sum == 11)) {
            cout << "Win!" << endl;
            winning = 1;
        } else if ((sum == 2) || (sum == 3) || (sum == 5)) {
            cout << "Lose!" << endl;
            losing = 1;
        } else {
            cout << "You managed to roll " << sum
                 << " and broke the game!" << endl;
            winning = 1;
            losing = 1;
        }
    } while (losing == 0 && winning == 0);
}
