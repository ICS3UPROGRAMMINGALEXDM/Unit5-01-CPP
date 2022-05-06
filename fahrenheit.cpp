// Copyright (c) 2022 Alex De Meo All rights reserved
//
// Created By: Alex De Meo
// Date: 04s//22
// Description: Gets the degrees in celsius and converts it to fahrenheit
#include <iostream>

using std::cout;
using std::cin;
using std::stof;
using std::string;

void fahrenheit() {
    string tc;
    float tcflt, tf;
    cout << "Enter the degrees in celsius: ";
    cin >> tc;

    try {
        tcflt = stof(tc);
        tf = (9.0/5.0) * tcflt + 32;
        cout << tc << "°C is equal to " << tf << "°F";
    } catch (...) {
        cout << "The inputted value must be a valid number";
    }
}


int main() {
    fahrenheit();
}
