//
//  main.cpp
//  activity20.cpp
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int size;
    
    cout << " enter the number of slott u want";
    cin >> size;
    
    int* arr = new int[size];
    
    cout << " enter " << size << "integers:" << endl;
    for ( int i = 0; i < size; i++){
        cin >> arr[i];
    }
    
    int  sum = 0;
    for ( int i = 0; i < size; i++){
       sum =+ arr[i];
    }
    
    
    cout << "The sum of the array is: " << sum << endl;
    
    delete[] arr;
    return 0;
}
