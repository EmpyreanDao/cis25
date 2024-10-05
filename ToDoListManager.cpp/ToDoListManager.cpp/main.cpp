//
//  main.cpp
//  ToDoListManager.cpp
//
//  Created by Samuel Tsogbe on 10/0/24.
//

#include <iostream>
#include <string>
using namespace std;

const int MAX_TASKS = 100; // for how many tasks i want to deal with
int taskCount = 0; // keep track of how many tasks i have



// four  aarrays to store the data
int taskIds[MAX_TASKS];
string taskNames[MAX_TASKS];
int taskPriority[MAX_TASKS];
int taskDueDate[MAX_TASKS];

void showMenu();
void showTasks();
void addTask();
void removeTasks(int);
void removeTasks(string);
void markTasks(int ,int , string);
int searchTasks ();


int main (){
    bool running = true;
    int choice;
    
    cout << "To do list manager"<< endl;
    
    while(running){
        showMenu();
        
        cin >> choice;
        
        // lets the user just choose one number.
        switch(choice)
        {
            case 1:
                addTask();
                break;
            case 2:{
                int inputOption;// this is so they can choose what task to remove by two diffrent methods ie the name and id ;
                int taskBeingRemovedID;
                string taskBeingRemovedName;
                cout << "choose task by entering 1 or 2"<< endl;
                cout << "1: Task ID" << endl;
                cout << "2: Task Name" << endl;
                cin >>  inputOption;
                while( !(inputOption == 1 || inputOption == 2) )
                    cin >> inputOption ;
                switch (inputOption)
                {
                    case 1:
                        cout << "Please enter an ID Number:";
                        cin >> taskBeingRemovedID;
                        removeTasks(taskBeingRemovedID);
                        
                        break;
                    case 2:
                        cout << "Please enter the task name:";
                        cin >> taskBeingRemovedName;
                        removeTasks(taskBeingRemovedName);
                        break;
                    default:
                        cout << "Invalid task choice." << endl;
                        break;
                }
                
                break;
            }
                
            case 3:
                markTasks(1, 2, "Task Name");
                break;
                
            case 4:
                cout << "Diplaying tasks..." << endl;
                // gotta creat a functino here to show tasks most lilkey with vectors
                break;
                
            case 5:
                cout << "Exiting..."<< endl;
                running = false; // stops the loop
                break;
                
                
                
            
        }
    }

}
void showMenu(){
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
    
    
    cout << "Please enter the task id";
    cin >> taskIds[taskCount];
    
    cout << "Please enter the task Name";
    cin >> taskNames[taskCount];
    
    cout << "Please enter the task priority 1-5";
    cin >> taskPriority[taskCount];
    while( !(taskPriority[taskCount] > 0 && taskPriority[taskCount] < 6) )
        cin >> taskPriority[taskCount];

    
    cout << "Please enter the task id";
    cin >> taskDueDate[taskCount];
    
    
}

void showTasks(){
    if (taskCount == 0){
        cout << "There are no tasks available ATM" << endl;
        return;
    }
    for (int i = 0; i < taskCount; i++){
        cout << "ID: " << taskIds[i] << " | Name: " << taskNames[i] << " | Priority: " << taskPriority[i] << endl;
    }
        
}

void removeTasks(int id){
    
}

void choose(){
    
}
