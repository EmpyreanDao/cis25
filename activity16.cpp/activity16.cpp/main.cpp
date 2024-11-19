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
#include <sstream>
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

void listAboveAverage(const vector<double>& grades, const vector <string>& names, double average){
    cout << "Students above average (" << average << "): ";
    for (size_t i = 0; i < grades.size(); i++){
        if (grades[i] > average){
            cout << names[i] << " ";
        }
    }
    cout << endl;
}

void compareGrades(const vector<double>& grades, const vector <string>& names){
    string student1, student2;
    cout << "Enter the name of the first student to compare: ";
    cin >> student1;
    cout << "Enter the name of the second student to compare: ";
    cin >> student2;
    
    int index1 = -1, index2 = -1;
    
    //finding the students here based on the names inputed
    for(size_t i = 0; i < names.size(); i++){
        if (names[i] == student1){
            index1 = i;
        }
        if (names[i] == student2){
            index2 = i;
        }
    }
    
    if(index1 != -1 && index2 != -1){
        cout << student1 << "'s grade: "<< grades[index1] << endl;
        cout << student2 << "'s grade: "<< grades[index2] << endl;
        if (grades[index1] > grades[index2])
            cout << student1 << " has a higher grade than " << student2 << "." << endl;
        else if (grades[index1] < grades[index2])
            cout << student2 << " has a higher grade than " << student1 << "." << endl;
        else cout << student1 << " and " << student2  << " have the same grade." << endl;
    }else
        cout << "One or both of the students names not found." << endl;
}


bool parseInput(const string& input, string& name, double& grade){
    stringstream ss(input);
    ss >> name;// extracting name
    if (!(ss >> grade)){
        return false;
    }
    return true;
}
"

int main(){
    vector<string> names;
    vector<double> grades;
    int amountStudents;
    
    cout << "PLease enter how many students you have:";
    cin >> amountStudents;
    cin.ignore();
    
   
    cout << "ENter the names and grades of the students (e.g., 'Samuel 98'):\n";
    for (int i = 0; i < amountStudents; i ++){
        string input, name;
        int grade;
        getline(cin, input); // fopr reading the whole thing for the sstream
        
        if (parseInput(input,name,grade)){
            names.push_back(name);
            grades.push_back(grade);
        }else{
            cout << "invalid input. Please enter in correct format 'Name Grade'.\n";
            i--;// so we don't have an empty index
        }
        
    }
}
