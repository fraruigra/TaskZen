//Task Zen version 0.1
//Author: fraruigra || Github: https://github.com/fraruigra || Email: fraruigra@outlook.com

//Libraries
#include <stdio.h>

//Constants
#define maxTaskName 25
#define maxTaskDescription 500

//Functions
void addNewTask(void);
void showActiveTask(void);
void modifyTask(void);
void deleteTask(void);
void showCompleteTask(void);

int main() {
    printf("Hello, I'm Task Zen!\n\n");

    int choice;
    do {
        printf("1. Add New Task\n");
        printf("2. Show Active Task\n");
        printf("3. Modify Task\n");
        printf("4. Delete Task\n");
        printf("5. Show Complete Task\n");
        printf("6. Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addNewTask();
                break;
            case 2:
                showActiveTask();
                break;
            case 3:
                modifyTask();
                break;
            case 4:
                deleteTask();
                break;
            case 5:
                showCompleteTask();
                break;
            case 6:
                printf("Goodbye!\n");
                break;
            default:
                printf("Option not valid, please enter a valid option.\n");
                break;
        }
    } while (choice != 6);


    return 0;
}