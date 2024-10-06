//
//  main.cpp
//  ToDoListManager.cpp
//
//  Created by Samuel Tsogbe on 10/0/24.
//
#include "ToDoLIstManager.h"
#include <iostream>
#include <string>
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
            case 2:{
                
                int Id_NameOption;// this is so they can choose what task to remove by two diffrent methods ie the name and id ;
                int taskBeingRemovedID;
                string taskBeingRemovedName;
                
                
                cout << "choose task by entering 1 or 2"<< endl;
                cout << "1: Task ID" << endl;
                cout << "2: Task Name" << endl;
                cin >>  Id_NameOption;
                while( !(Id_NameOption == 1 || Id_NameOption == 2) ){// validation
                    cout << "Invalid choice. Please enter 1 or 2: ";
                    cin >> Id_NameOption ;
                }
                // switch case for which on they choose
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
                
                
                cout << "Choose how to mark the task as completed:" << endl;
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
                showTasks();
                break;
                
            case 5:
                cout << "Exiting..."<< endl;
                running = false; // stops the loop
                break;
                
                
                
            
        }
    }

}
