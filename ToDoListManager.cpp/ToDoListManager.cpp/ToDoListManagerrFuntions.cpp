//
//  ToDoListManager.cpp
//  ToDoListManager.cpp
//

//
#include "ToDoListManager.h"
#include <iostream>
#include <string>

using namespace std;

int taskCount = 0;  // Initialize global variables
int taskIds[MAX_TASKS];
string taskNames[MAX_TASKS];
int taskPriority[MAX_TASKS];
bool taskCompleted[MAX_TASKS] = {false};  

void showMenu(){
    cout << "Please choose an option 1-5  and click enter." << endl;
    cout << "1. Add a task" << endl;
    cout << "2. Remove a task" << endl;
    cout << "3. Mark a task as completed" << endl;
    cout << "4. View all tasks" << endl;
    cout << "5. Exit" << endl;
}
void addTask(){
    if (taskCount >= MAX_TASKS){
        cout << "Tasks list full" << endl;
        return;
    }
    
    int newTaskID;
    string newTaskName;
    cout << "Please enter the task id: ";
    cin >> newTaskID;
    
    if( searchTasks(newTaskID)){
        cout << " A task with this ID already exists. please enter a unique ID:" << endl;
        cin >> newTaskID;
    }
    taskIds[taskCount] = newTaskID;
    
    cout << "Please enter the task Name: ";
    cin.ignore();
    getline(cin, newTaskName);
    if( searchTasks(newTaskName)){
        cout << " A task with this name already exists. please enter a unique Name" << endl;
    }
    taskNames[taskCount] = newTaskName;
    
    
    cout << "Please enter the task priority 1-5: ";
    cin >> taskPriority[taskCount];
    while( !(taskPriority[taskCount] >= MIN_PRIORITY && taskPriority[taskCount] <= MAX_PRIORITY) ){
        cout << "Invalid input, please try again ";
        cin >> taskPriority[taskCount];
        
        
        
    }
    taskCount++;
    
}

void showTasks(){
    if (taskCount == 0){
        cout << "There are no tasks available ATM" << endl;
        return;
    }
    for (int i = 0; i < taskCount; i++){
        cout << "ID: " << taskIds[i]
        << " | Name: " << taskNames[i]
        << " | Priority: " << taskPriority[i]
        << " | Completion: "<<  (taskCompleted[i] ? "Completed" : "Not Completed") << endl;
    }
        
}

bool searchTasks(int id){
    bool taskExist = false;
    for ( int i = 0; i < taskCount ; i++ ){
       if ( taskIds[i] == id)
           taskExist = true;
    }
    return taskExist;
    
}

bool searchTasks(string name){
    
    bool taskExist = false;
    for ( int i = 0; i < taskCount ; i++ ){
        if ( taskNames[i] == name)
           taskExist = true;
    }
    return taskExist;
}




void removeTasks(int id) {
    for (int i = 0; i < taskCount; i++) {
        if (taskIds[i] == id) {
            // Shift all tasks after this one up by 1
            for (int j = i; j < taskCount - 1; j++) {
                taskIds[j] = taskIds[j + 1];
                taskNames[j] = taskNames[j + 1];
                taskPriority[j] = taskPriority[j + 1];
                taskCompleted[j] = taskCompleted[j + 1];
            }
            taskCount--; // Reduce task count after removal
            cout << "Task with ID " << id << " has been removed." << endl;
            return;
        }
    }
    cout << "Task with ID " << id << " not found." << endl;
}

void removeTasks(string name) {
    for (int i = 0; i < taskCount; i++) {
        if (taskNames[i] == name) {
            // Shift all tasks after this one up by 1
            for (int j = i; j < taskCount - 1; j++) {
                taskIds[j] = taskIds[j + 1];
                taskNames[j] = taskNames[j + 1];
                taskPriority[j] = taskPriority[j + 1];

            }
            taskCount--; // Reduce task count after removal
            cout << "Task with name " << name << " has been removed." << endl;
            return;
        }
    }
    cout << "Task with name " << name << " not found." << endl;
}

void markTasks(int id ){
    for (int i = 0; i < taskCount; i++){
        if (taskIds[i] == id ){
            taskCompleted[i] = true;
            cout << "Task with ID" << id << " marked as completed!"<< endl;
            return;
        }
    }
    cout << "Task with ID " << id << " not found." << endl;
}

void markTasks(string name ){
    for (int i = 0; i < taskCount; i++){
        if (taskNames[i] == name ){
            taskCompleted[i] = true; // this makes the name true
            cout << "Task with name" << name << " marked as completed!"<< endl;
            return;
        }
    }
    cout << "Task with name " << name << " not found." << endl;
    
}
