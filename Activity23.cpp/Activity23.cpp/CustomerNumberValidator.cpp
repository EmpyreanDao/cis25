//
//  CustomerNumberValidator.cpp
//  Activity23.cpp
//
//  Created by Samuel Tsogbe on 10/22/24.
//

#include "CustomerNumberValidator.h"
#include <cctype>
#include <string>
using namespace std;

bool validateCustomerNumber(const string& customerNumber){
    
    if( customerNumber.length() != 6){ // checking for lenght first of all
        return false;
    }
    
    
    if ( !isalpha(customerNumber[0]) || !isalpha(customerNumber[1]) ){ // checks is the first two chars are numbers
        return false ;
    }
    
    
    for ( int i = 2; i < 6 ; i++){ // check is the next four digits are numbers
        if ( !isdigit(customerNumber[i]) ){
            return false;
        }
    }
    // if it gets here than nothing was wrong so returns true
    return true;
    
    
}


