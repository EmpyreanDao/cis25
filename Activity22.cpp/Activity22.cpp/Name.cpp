//
//
//


#include "Name.h"
#include <string>
#include <iostream>

using namespace std;

void extractFrstAndLastName(const std::string& fullName, std::string& firstName, std::string& lastName){
    // to find the first space
    size_t firstSPace = fullName.find(' ');
    
    if (firstSPace != string::npos){
        //subtracts teh 0 index to the the index of the first space
        firstName = fullName.substr(0, firstSPace);
        
        //holds the last n+1 index of the first name to the end
        lastName = fullName.substr(firstSPace + 1 );
    }else {

    }
    
    
    
}
