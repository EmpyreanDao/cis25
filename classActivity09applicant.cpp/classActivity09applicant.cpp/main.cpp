//
//  main.cpp
//  classActivity09applicant.cpp
//
//  Created by Samuel Tsogbe on 9/14/24.
//

#include <iostream>
#include <string>

int main() {
    std::string citizenship;
    std::string degree;
    int experience;

    
    std::cout << "Are you a US citizen? (yes/no): ";
    std::cin >> citizenship;
    
    std::cout << "Do you have a bachelor's degree? (yes/no): ";
    std::cin >> degree;


    std::cout << "How many years of experience do you have?: ";
    std::cin >> experience;

    //checking eligibilty
    if (citizenship == "yes" || citizenship == "Yes") {
        if (degree == "yes" || degree == "Yes" || experience >= 2) {
            std::cout << "\nCongratulations! You are eligible for the job." << std::endl;
        } else {
            std::cout << "\nSorry, you are not eligible for the job." << std::endl;
        }
    } else {
        std::cout << "\nSorry, you are not eligible for the job." << std::endl;
    }

    return 0;
}
