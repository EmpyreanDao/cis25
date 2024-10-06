//
//  ToDoListManager.h
//  ToDoListManager.cpp
//
//
#ifndef TODOLISTMANAGER_H
#define TODOLISTMANAGER_H


#include <string>
const int MAX_TASKS = 100;// for how many tasks i want to deal with
const int MAX_PRIORITY = 5;
const int MIN_PRIORITY = 1;

extern int taskCount; // keep track of how many tasks i have
// four  aarrays to store the data
extern int taskIds[MAX_TASKS];
extern std::string taskNames[MAX_TASKS];
extern int taskPriority[MAX_TASKS];
extern bool taskCompleted[MAX_TASKS];
// Initialized to 'false' for all tasks (not completed)



// the declaation
void showMenu();
void showTasks();
void addTask();
void removeTasks(int);
void removeTasks(std::string);
void markTasks(int);
void markTasks(std::string);
bool searchTasks(int);// to see if the input corresponds to a proper task
bool searchTasks(std::string);

#endif

