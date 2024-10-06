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
bool taskCompleted[MAX_TASKS] = {false};  // Initialized to 'false' for all tasks (not completed)

void showMenu();
void showTasks();
void addTask();
void removeTasks(int);
void removeTasks(string);
void markTasks(int);
void markTasks(string);
bool searchTasks(int);// to see if the input corresponds to a proper task
bool searchTasks(string);


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
                
                int Id_NameOption;// this is so they can choose what task to remove by two diffrent methods ie the name and id ;
                int taskBeingRemovedID;
                string taskBeingRemovedName;
                
                
                cout << "choose task by entering 1 or 2"<< endl;
                cout << "1: Task ID" << endl;
                cout << "2: Task Name" << endl;
                cin >>  Id_NameOption;
                while( !(Id_NameOption == 1 || Id_NameOption == 2) ){
                    cout << "Invalid choice. Please enter 1 or 2: ";
                    cin >> Id_NameOption ;
                }
                
                switch (Id_NameOption)
                {
                    case 1:
                        cout << "Please enter an ID Number:";
                        cin >> taskBeingRemovedID;
                        if (searchTasks(taskBeingRemovedID))
                            removeTasks(taskBeingRemovedID);
                        else
                            cout << "Task not found." << endl;
                        break;
                        
                    case 2:
                        cout << "Please enter the task name:";
                        cin >> taskBeingRemovedName;
                        if (searchTasks(taskBeingRemovedName))
                            removeTasks(taskBeingRemovedName);
                        else
                            cout << "Task not found." << endl;
                        break;
                        
                        
                    default:
                        cout << "Invalid task choice." << endl;
                        break;
                }
                
                break;
            }
                
            case 3:{
                int Id_NameOption;
                int taskToMarkID;
                string taskToMarkName;
                
                
                cout << "Choose how to maek the task as completed:" << endl;
                cout << "1: Task ID" << endl;
                cout << "2: Task Name" << endl;
                cin >>  Id_NameOption;
                
                while( !(Id_NameOption == 1 || Id_NameOption == 2) ){
                    cout << "Invalid choice. Please enter 1 or 2: ";
                    cin >> Id_NameOption ;
                }
                
                switch (Id_NameOption)
                {
                    case 1:
                        cout << "Please enter the task ID: ";
                        cin >> taskToMarkID;
                        markTasks(taskToMarkID);
                        break;
                        
                    case 2:
                        cout << "Please enter the task name: ";
                        cin >> taskToMarkName;
                        markTasks(taskToMarkName);
                        break;
                    default:
                        cout << "Invalid choice." << endl;
                        break;
                        
                }

                break;
            }
                
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
        cout << "ID: " << taskIds[i] << " | Name: " << taskNames[i] << " | Priority: " << taskPriority[i] << " | Completion"<<  taskCompleted[i[] << endl;
    }
        
}

bool searchTasks(int id){
    bool taskExist = false;
    for ( int i = 0; i <= taskCount ; i++ ){
       if ( taskIds[i] == id)
           taskExist = true;
    }
    return taskExist;
    
}

bool searchTasks(string name){
    
    bool taskExist = false;
    for ( int i = 0; i <= taskCount ; i++ ){
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
                taskDueDate[j] = taskDueDate[j + 1];
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
