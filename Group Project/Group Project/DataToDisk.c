#include <stdio.h>
#include"DataToDisk.h"
#include "List.h"


void LoadTaskDataFromFile(void) {

    printf("data loaded\n");
    
	
	/*
    	
	      FILE *file = fopen("tasks.dat", "rb");
    if (file == NULL) {
        printf("No saved tasks found, starting fresh.\n");
        return;
    }

    TASK t;
    while (fread(&t, sizeof(TASK), 1, file)) {
        AddTaskToList(list, t);  // Adds each task to the list
    }

    fclose(file);
    printf("Tasks loaded from disk successfully.\n");
    
    
    
    
    */
    

}


void SaveTaskDataToFile(PLISTNODE list) {
	
    printf("data loaded\n");
	
	/*
      FILE *file = fopen("tasks.dat", "wb");
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
    
    */
	

}