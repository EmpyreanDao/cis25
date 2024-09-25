//
//  main.cpp
//  assignment15.cpp
//
//  Created by Samuel Tsogbe on 9/24/24.
//

#include <iostream>
using namespace std;
int main(){
    int row;
    cout << "Please tell input the number of rows you want: ";
    cin >> row;
    
    for (int i = 1 ; i <= row; i ++ ){
        for( int j = 0; j < i; j++ ){
            cout << "*";
        }
        cout << endl;
    }
}
