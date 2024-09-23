//
//  main.cpp
//  classActivity11.cpp
//
//  Created by Samuel Tsogbe on 9/22/24.
//

#include <iostream>
using namespace std;

int main(){
    double num1, num2, larger;
    cout << "please enter two numbers please seperated by spaces:";
    cin >> num1 >> num2;
    
    cout << "i will preced to print out the bigger number of the two numbers you have entered: ";
    
    // if edition
    /*if (num1 > num2)
         larger = num1;
    else larger = num2;
    */
    
    
    // conditional edition
    larger = (num1 >num2)? num1 : num2;
    
    cout << larger << endl;
    
    
}
