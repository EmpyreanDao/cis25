//
//  main.cpp
//  classActivity14.cpp
//
//  Created by Samuel Tsogbe on 9/23/24.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main (){
    
    srand(time(0)); // seeding
    int radomNum = rand() % 100 + 1; // making 1-100
    int guess;
    cout << "I have created a random number please guess what it is:";
    
    cin >> guess;
    while(guess != radomNum){
        if (guess < radomNum)
            cout << "Too low try again!!:";
        else
            cout << "Too high try again!!:";
        cin >> guess;
    }
    cout << "\nCongradualtions you Got it";
    
    
    
}
