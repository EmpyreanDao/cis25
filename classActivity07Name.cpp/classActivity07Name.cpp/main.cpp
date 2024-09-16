//
//  main.cpp
//  classActivity07Name.cpp
//
//  Created by Samuel Tsogbe on 9/13/24.
//

#include <iostream>
#include <string>

int main() {
    // array fo teh names
    std::string names[3];

    // asking for teh names
    std::cout << "Enter the first name: ";
    std::getline(std::cin, names[0]);

    std::cout << "Enter the second name: ";
    std::getline(std::cin, names[1]);

    std::cout << "Enter the third name: ";
    std::getline(std::cin, names[2]);

    // priting the first name
    std::cout << "\nThe first name you entered is: " << names[0] << std::endl;

    return 0;
}
