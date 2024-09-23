//
//  main.cpp
//  classActivity13Temp.cpp
//
//  Created by Samuel Tsogbe on 9/16/24.
//

#include <iostream>


int main(){
    int size;
    std::cout << "Please Give me the amount of tempatures you would like to input.\n";
    std:: cin >> size;
    
    double temp = new double[size];
    
    
    std::cout << "Please input the tempatures youb have recoreded";
    for(int i = 0; i < size; i++ ){
        std::cin >> temp[i];
    }
    
    
    
    
    
}
