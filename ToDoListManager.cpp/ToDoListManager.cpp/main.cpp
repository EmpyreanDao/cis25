//
//  main.cpp
//  ToDoListManager.cpp
//
//  Created by Samuel Tsogbe on 10/2/24.
//

#include <iostream>
#include <string>
using namespace std;

const int MAX_TASKS = 100; // for how many tasks i want to deal with
int taskCount = 0; // keep track of how many tasks i have



// four  aarrays to store the data
int taskIDs[MAX_TASKS];
string taskNames[MAX_TASKS];
int taskPriority[MAX_TASKS];
int taskDueDate[MAX_TASKS];

void showMenu();
void addTask(int ,int , string);
void removeTasks(int ,int , string);
void markTasks(int ,int , string);


using namespace std;
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
            case 2:
                removeTasks(1, 2, "Task Name");
                break;
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
    cin >> taskIDs[taskCount];
    
    cout << "Please enter the task Name";
    cin >> taskNames[taskCount];
    
    cout << "Please enter the task priority 1-5";
    cin >> taskPriority[taskCount];
    while( !(taskPriority[taskCount] > 0 && taskPriority[taskCount] < 5) )
        cin >> taskPriority[taskCount];

    
    cout << "Please enter the task id";
    cin >> taskDueDate[taskCount];
    
    
}
