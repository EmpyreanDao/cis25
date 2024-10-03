//
//  main.cpp
//  ToDoListManager.cpp
//
//  Created by Samuel Tsogbe on 10/2/24.
//

#include <iostream>
using namespace std;

void showMenu();
void addTask(int ,int , string);
void removeTasks(int ,int , string);
void markTasks(int ,int , string);


using namespace std;
int main (){
    bool running = true;
    int choice;
    cout << "To do list manager"<< endl;
    showMenu();
    while(running){
        
        cin >> choice;
        
        switch(choice)
        {
            case 1; addTask(<#int#>, <#int#>, <#string#>)
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
