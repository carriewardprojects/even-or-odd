// A Simple C++ program that determines if an integer value is even or odd.
// Created by Carrie Ward on 8/12/17.


#include <iostream>
using namespace std;

int main() {
    
    int number = 1;
    
    // Request a number from the user
    cout << "Type an integer number and press ENTER: ";
    
    // Store the usr input
    cin >> number;
        
    // If the remainder is 0, the number input is even.
    // Otherwise it is odd.
    if (number % 2 == 0){
        cout << "\nThe number " << number << " is even\n" << endl;
    } else {
        cout << "\nThe number " << number << " is odd\n" << endl;
    }
    
    return 0;
}
