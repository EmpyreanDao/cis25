//
//  main.cpp
//  classActivity13.cpp
//
//  Created by Samuel Tsogbe on 9/23/24.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    
    double totalTemp= 0,
    averageTemp;
    const int days = 7;
    double arr[days];

    cout << "We're going to be calculatng the average temp for the last seven days.\n";
    cout << " PLease enter the last seven tempatures reading in degrees or celciuus and well give you the average: ";
    for (int i = 0; i < days; i ++ ){
        cin >> arr[i];
        totalTemp += arr[i];
    }
    averageTemp = totalTemp / days;
    cout << "Your average temp for the last days where:" << fixed << setprecision(2)<< averageTemp << endl;
}
