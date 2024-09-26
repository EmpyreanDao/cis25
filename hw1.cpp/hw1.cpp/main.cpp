//
//  main.cpp
//  hw1.cpp
//
//  Created by Samuel Tsogbe on 9/25/24.
//

#include <iostream>
using namespace std;


int main() {
    int num;
    
    // Getting input from the user
    cout << "Enter a positive integer: ";
    cin >> num;

    // for if the number is 0
    if (num == 0) {
        cout << "Binary: 0" << endl;
        return 0;
    }

    string binary = "";  //

   
    while (num > 0) {
        int remainder = num % 2;// this is to get the first num of the binary
        binary = to_string(remainder) + binary;// puts it at the front
        num /= 2;// devides by 2 so we can get whats the next number 
    }

  
    cout << "Binary: " << binary << endl;

    return 0;
}

