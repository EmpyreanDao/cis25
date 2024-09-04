//
//  main.cpp
//  swap.cpp
//
//  Created by Samuel Tsogbe on 9/3/24.
//

#include <iostream>
using namespace std;
void swap(int&, int&);

int main(){
    int a = 3;
    int b = 5;
     
    cout << "A is : " << a << "and B is: "<< b << endl;
    cout << "===================== After swap"<<endl;
    swap(a,b);
    cout << "A is : " << a << " and B is: "<< b << endl;
    
    
}

void swap(int &a, int &b){
    int swapVar = b;
    
    
    b = a;
    a = swapVar;
    
    
}
