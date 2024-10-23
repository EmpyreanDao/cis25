//
//  main.cpp
//  Activity23.cpp
//
//  Created by Samuel Tsogbe on 10/22/24.
//
#include "CustomerNumberValidator.h"

#include <iostream>
using namespace std;


int main() {
    
    string customerNumber;
    
    cout << "Enter Customer number: ";
    cin >> customerNumber;
    
    if (validateCustomerNumber(customerNumber))
        cout << "Customer number is valid. " << endl;
    
    else
            cout << "Invalid customer number format. " << endl;
        
        
        return 0;
    
    
}
