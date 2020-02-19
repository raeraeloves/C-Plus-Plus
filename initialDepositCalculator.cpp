//
//  main.cpp
//  initialDepositCalculator
//
//  Created by Rachel Kuntz on 2/19/20.
//  Copyright © 2020 Rachel Kuntz. All rights reserved.
//

/* This program will tell you how much you need to deposit to make a goal amount
 of interest income in a specified period of time with a given interest rate */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void getUserValues(double &futureValue, double &interestRate, double &numYears);
double presentValue(double &futureValue, double &interestRate, double &numYears);
void display(double &futureValue, double &interestRate, double &numYears, double valueNow);


int main() {
    double futureValue;
    double interestRate;
    double numYears;
    double valueNow;
    
    getUserValues(futureValue, interestRate, numYears);
    
    valueNow = presentValue(futureValue, interestRate, numYears);
    
    display(futureValue, interestRate, numYears, valueNow);
    
    return 0;
}

void getUserValues (double &futureValue, double &interestRate, double &numYears) {
    cout << "Enter the future value you want in the account: ";
    cin >> futureValue;
    cout << "Enter the annual interest rate: ";
    cin >> interestRate;
    cout << "Enter the number of years you will leave the money in the account: ";
    cin >> numYears;
}

double presentValue(double &futureValue, double &interestRate, double &numYears) {
    double valueNow;
    
    valueNow = futureValue / (pow((1 + interestRate), numYears));
    
    return valueNow;
}

void display(double &futureValue, double &interestRate, double &numYears, double valueNow){
    cout << fixed << setprecision(2);
    cout << "If you deposit $" << valueNow << " today in an account with an annual interest rate of " << interestRate * 100 << "% for " << static_cast<int>(numYears) << " years, you will have $" << futureValue << "." << endl;
}
