//
//  main.cpp
//  classActivity12.cpp
//
//  Created by Samuel Tsogbe on 9/22/24.
//

#include <iostream>
using namespace std;

int main(){
    double num,
    factorial = 1;;
    
    cout << "Give me a positive nuumber bigger than 2 please: ";
    cin >> num;
    
    while( num < 2){
        cout << "Please input a positive number bigger than 2";
        cin >> num;
    }
    
    for (int i = num; i >= 1; i--){
        factorial *= i;
        
    }
    
    cout << "The Factorial of " << num << " is: " << factorial << endl ;
    
}
