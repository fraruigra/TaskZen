//Task Zen version 0.1
//Author: fraruigra || Github: https://github.com/fraruigra || Email: fraruigra@outlook.com

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define maxTaskName 25
#define maxTaskDescription 500

//Functions
void menuChoice;
void addNewTask;
void showActiveTask;
void modifyTask;
void deleteTask;
void showCompleteTask;

int main () {
    int option, counter, day, month, year;
    char taskName[maxTaskName], taskDescription[maxTaskDescription];
    bool menuOption=true;

    printf("Hello, I'm Task Zen!\n\n");

    menuChoice();



}