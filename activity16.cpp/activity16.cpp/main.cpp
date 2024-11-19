//
//  main.cpp
//  activity16.cpp
//
//  Created by Samuel Tsogbe on 11/18/24.
//

#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

double calculateAverage(const vector<double>& grades){
    double total = 0;
    for (int grade: grades){
        total += grade;
    }
    return total / grades.size();
}

int main(){
    
    int amountStudents;
    
    cout << "PLease enter how many students you have:";
    cin >> amountStudents;
    
    
    string studentNames[amountStudents];
    int student grades[amountStudents];
    
    for (int i = 0; i < amountStudents; i ++){
        cout << "Please enter the name of students that you have"
    }
}
