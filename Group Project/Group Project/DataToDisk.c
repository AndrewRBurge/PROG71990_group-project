#include <stdio.h>
#include"DataToDisk.h"
#include "List.h"
#include"Task.h"
// following functions created by Andrew Burge



void LoadTaskDataFromFile(PLISTNODE* list) {

    printf("Loading data...\n");
    FILE* file = fopen("TasksData.dat", "rb");
    if (file == NULL) {
        printf("No saved tasks found, starting fresh.\n");
        return;
    }

    //basiclly anything that fits into a container of a task is being read we add that data to the list as a task
    TASK t;
    while (fread(&t, sizeof(TASK), 1, file)) {
        AddTaskToList(list, t);
    }

    fclose(file);
    printf("Tasks loaded from disk successfully.\n");

}


void SaveTaskDataToFile(PLISTNODE* list) {
    int savecounter = 0;
   
    // user input to confirm saving data
    printf("would like to save your data to disk\nplease input a number below\n1) yes\n2) no\n");
      int numsymbols = scanf("%d", &savecounter); 
        if (savecounter == 1) {
          
            // trying to write to error if we can't write to file for some reason
                  FILE *file = fopen("TasksData.dat", "wb");
                if (file == NULL) {
                    
                    fprintf(stderr, "Error opening file for writing\n");
                    return;
                }

                //so long as we are going down the list we keep writing until we hit the \0
                PLISTNODE current = list;
                while (current != NULL) {
                    fwrite(&current->data, sizeof(TASK), 1, file);
                    current = current->next;
                }

                fclose(file);
                printf("Tasks saved to disk successfully\n");

               

        }
        else if (savecounter == 2) {
            printf("data not saved\n");
            return;

        }

}

void SearchTask(PLISTNODE list) {
    //encase of no tasks
    if (list == NULL) {
        printf("No tasks to search.\n");
        return;
    }

    //input number
    int targetNumber;
    printf("Enter the task number to search\n");
    int result = scanf("%d", &targetNumber);
    while (getchar() != '\n'); 

    if (result != 1) {
        printf("Invalid input. Please enter a valid task number.\n");
        return;
    }

    int found = 0;
    PLISTNODE current = list;
    //compare each struck in the lists number with the number inputed
    while (current != NULL) {
        if (current->data.number == targetNumber) {
            PrintTask(current->data);
            printf("\n------------------------\n");
            found = 1;
            break;  
        }
        current = current->next;
    }
    //if we can't find anything we remove
    if (!found) {
        printf("No task found with number %d.\n", targetNumber);
    }
}