//Task Zen version 0.1
//Author: fraruigra || Github: https://github.com/fraruigra || Email: fraruigra@outlook.com

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define maxTaskName 25
#define maxTaskDescription 500

//Functions
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

    do {
        printf("Main Menu\n\n");
        printf("1. Add new Task\n");
        printf("2. Show Active Tasks\n"):
        printf("3. Modify tasks\n"):    
        printf("4. Delete tasks\n"):
        printf("5. Show completed tasks\n"):
        printf("6. Exit\n"):
        scanf (%i,option);

        switch (option) {
            case 1:
                addNewTask;
            case 2:
                showActiveTask;
            case 3:
                modifyTask;
            case 4:
                deleteTask;
            case 5:
                showCompleteTask
            case 6:
                menuOption=false;
        }

    } while (menuOption);

    printf("Thank you! See you soon!"):

	getch();\
	return 0;
}