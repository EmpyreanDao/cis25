//
//  main.cpp
//  classActivity5.cpp
//
//  Created by Samuel Tsogbe on 9/10/24.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main (){
    
    cout <<"The size is of an a short:" <<  sizeof(short) << endl;
    cout <<"Max is " << numeric_limits<short>:: max()<< endl;
    cout << "Min is " <<numeric_limits<short>:: min()<< endl<< endl;
    
    
    cout <<"The size is of an a double:" <<  sizeof(double) << endl;
    cout << "Max is "<< numeric_limits<double>:: max()<< endl;
    cout << "Min is "<< numeric_limits<double>:: min()<< endl;
}
