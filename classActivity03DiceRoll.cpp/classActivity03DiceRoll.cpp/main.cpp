//
//  main.cpp
//  classActivity03DiceRoll.cpp
//
//  Created by Samuel Tsogbe on 9/13/24.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;



int main (){
    long  timeSeed = time (0);
    
    srand(timeSeed);
    
    int minValue = 1;
    int maxValue = 6;
    
    int die1 = (rand() % (maxValue - minValue + 1)) + minValue;
    int die2 = (rand() % (maxValue - minValue + 1)) + minValue;
    
    cout << "You rolled:\n";
    cout << "Die 1: " << die1 << endl;
    cout << "Die 2: " << die2 << endl;
    
}
    
    
    
    

