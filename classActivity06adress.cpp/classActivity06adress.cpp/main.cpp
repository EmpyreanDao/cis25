//
//  main.cpp
//  classActivity06adress.cpp
//
//  Created by Samuel Tsogbe on 9/13/24.
//

#include <iostream>
#include <string>

int main() {
    std::string street, city, state, zip;

    // Asking for street address
    std::cout << "Enter Street Address: ";
    std::getline(std::cin, street);

    // askiog for city
    std::cout << "Enter City: ";
    std::getline(std::cin, city);

    // Asking for state
    std::cout << "Enter State: ";
    std::getline(std::cin, state);

    // asking for zip code
    std::cout << "Enter Zip Code: ";
    std::getline(std::cin, zip);

    // Printing the address with the correct fornat 
    std::cout << "\nYour Address:\n";
    std::cout << street << "\n" << city << ", " << state << " " << zip << std::endl;

    return 0;
}
