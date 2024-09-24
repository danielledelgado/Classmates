/*
Name: Danielle Delgado Sosnowska 
Project: Other People's Prompt
Date: 9/24/24
*/

#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number 1-10" << endl;
    cin >> num;

    if (num <= 3) {
        cout << "That is a low number" << endl;
    }
    else if (num >= 4 && num <= 6) {
        cout << "That is a middle number" << endl;
    }
    else if (num >= 7 && num <= 10) {
        cout << "That is a high number" << endl;
    }
    else {
        cout << "That is not a number that is 1-10." << endl;
    }
}