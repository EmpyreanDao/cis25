//
//  main.cpp
//  activity17.cpp
//
//  Created by Samuel Tsogbe on 11/18/24.
//

#include <iostream>
int linearsearch(const int arr[], int size, int value){
    int index = o;
    int position = -1;
    bool found = false;
    
    while(index < size && !found){
        if (arr[index] == value){
            found = true;
            position = index;
        }
        index++;
        return position;
    }
    
}
int main(){
    
    const int size = 10;
    int arr[size]={1, 3, 6, 34, 65, 3, 76, 45, 6, 565};
    
   int results = linearsearch(arr, 10, 3);
    if (results == -1)
        cout << "you do not have a 3 in the arr";
    else {
        cout << "we found it int the index "
    }
    
    
}
