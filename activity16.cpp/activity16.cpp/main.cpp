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

void findHighestGrade(const vector<double>& grades, const vector <string>& names){
    int maxGrade = grades[0];
    for (int grade: grades){
        if (grade > maxGrade){
            maxGrade = grade;
        }
    }
    cout << "Highest Grade: " << maxGrade << " achieved by: ";
    for (size_t i = 0; i < grades.size(); i++){
        if (grades[i] == maxGrade){
            cout << names[i];
        }
        cout << endl;
    }
}

void findLowestGrade(const vector<double>& grades, const vector <string>& names){
    int minGrade = grades[0];
    for (int grade: grades){
        if (grade < minGrade){
            minGrade = grade;
        }
    }
    cout << "Lowest Grade: " << minGrade << " achieved by: ";
    for (size_t i = 0; i < grades.size(); i++){
        if (grades[i] == minGrade){
            cout << names[i];
        }
        cout << endl;
    }
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
