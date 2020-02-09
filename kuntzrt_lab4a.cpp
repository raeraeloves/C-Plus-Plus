//
//  main.cpp
//  lab4A
//
//  Created by Rachel Kuntz on 2/3/20.
//  Copyright © 2020 Rachel Kuntz. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    // define variables
    int x; // times program executes
    double y; // manipulable value
    
    // get number of rows
    cout << "This program calculates and displays a Logarithm Table." << endl;
    cout << "How many rows do you want to evaluate? " << endl;
    cin >> x;
    
    // define y
    y = 1.0;
    
    // generate table
    cout << setw(3) << "x" << setw(13) << "log10(x)" << setw(13)
         << "log2(x)" << setw(13)    << "ln(x)" << endl;
    for (int i = 1; i <= x; i++) {
        cout << setw(3) << static_cast<long long>(y) << fixed << setw(13)
             << setprecision(9) << log10(y) << setw(13) << setprecision(9)
             << log2(y) << setw(13) << setprecision(9) << log(y) << endl;
        y += pow(10, static_cast<int>(log10(y)));
    }
    return 0;
}

