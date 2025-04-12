#include <stdio.h>
#include"DataToDisk.h"
#include "List.h"
// following functions created by Andrew Burge



void LoadTaskDataFromFile(PLISTNODE* list) {

    printf("Loading data...\n");
    FILE* file = fopen("TasksData.dat", "rb");
    if (file == NULL) {
        printf("No saved tasks found, starting fresh.\n");
        return;
    }

    TASK t;
    while (fread(&t, sizeof(TASK), 1, file)) {
        AddTaskToList(list, t);
    }

    fclose(file);
    printf("Tasks loaded from disk successfully.\n");
	
	/*
    	
	//basiclly anything that fits into a contair of a task is being read we add that data to the list as a task

    TASK t;
    while (fread(&t, sizeof(TASK), 1, file)) {
        AddTaskToList(list, t);  // Adds each task to the list
    }

    fclose(file);
    printf("Tasks loaded from disk successfully.\n");
    
    


  
    
    
    */
    

}


void SaveTaskDataToFile(PLISTNODE* list) {
    int savecounter = 0;
   
    printf("would like to save your data to disk\nplease input a number below\n1) yes\n2) no\n");
      int numsymbols = scanf("%d", &savecounter); 
        if (savecounter == 1) {
            printf("data saved\n");
            
                  FILE *file = fopen("TasksData.dat", "wb");
                if (file == NULL) {
                    
                    fprintf(stderr, "Error opening file for writing\n");
                    return;
                }

                PLISTNODE current = list;
                while (current != NULL) {
                    fwrite(&current->data, sizeof(TASK), 1, file);
                    current = current->next;
                }

                fclose(file);
                printf("Tasks saved to disk successfully.\n");

               

        }
        else if (savecounter == 2) {
            printf("data not saved\n");
            return;

        }

}