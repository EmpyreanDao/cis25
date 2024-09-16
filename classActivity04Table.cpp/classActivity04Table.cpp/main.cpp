//
//  main.cpp
//  classActivity04Table.cpp
//
//  Created by Samuel Tsogbe on 9/13/24.
//

#include <iostream>
#include <iomanip>


int main(){
    // the headers
    std::string header1 = "Course";
    std::string header2 = "Student";
    
    // the data
    std::string course1 = "C++";
    int students1 = 100;
    
    std::string course2 = "JavaScript";
    int students2 = 50;
    
    //collums widths
    const int width1 = 15;
    const int width2 = 10;
    
    
    std::cout << std::left << std::setw(width1) << header1
    << std::right << std::setw(width2) << header2 << std::endl;

    // seperator line
    std::cout << std::string(width1 + width2, '-') << std::endl;
    
    //first row
    std::cout << std::left << std::setw(width1) << course1
    << std::right << std::setw(width2) << students1 << std::endl;
    
    //second row
    std::cout << std::left << std::setw(width1) << course2
    << std::right << std::setw(width2) << students2 << std::endl;


    
}
