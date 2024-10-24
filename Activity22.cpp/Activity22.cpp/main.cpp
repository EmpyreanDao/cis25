//
//  main.cpp
//  Activity22.cpp
//
//  Created by Samuel Tsogbe on 10/23/24.
//

#include <iostream>

#include "Name.h"
using namespace std;

int main() {
    
    string fullName;
    string firstName, lastName;
    
    
    cout << "Enter Full Name: ";
    getline (cin , fullName);// so we can have spaces
    
    
    extractFrstAndLastName(fullName, firstName, lastName);// calling the functions
    
    cout << "First Name: " << firstName << endl;
    cout << "Last Name: " << lastName << endl;
    
    
    
}
