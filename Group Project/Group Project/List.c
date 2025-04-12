#include "Task.h"
#include "List.h"
#include <stdio.h>
#include <stdlib.h>

// list code taken from class example and modifyed by andrew burge

void AddTaskToList(PLISTNODE* list, TASK t) {
	PLISTNODE newNode = (PLISTNODE)malloc(sizeof(LISTNODE));
	if (newNode == NULL) {
		fprintf(stderr, "error allocating memory\n");
		exit(EXIT_FAILURE);
	}
	else {
		newNode->data = CopyTask(t);
		newNode->next = *list;

		*list = newNode;
	}
}

void RemoveTaskFromList(PLISTNODE* list, TASK t) {
	PLISTNODE current = *list;
	if (current != NULL && CompareTask(current->data, t)) {
		*list = current->next;
		DeleteTask(current->data);
		free(current);
		return;
	}

	PLISTNODE prev = NULL;
	while (current != NULL && !CompareTask(current->data, t)) {
		prev = current;
		current = current->next;
	}

	if (current == NULL)
		return;				
	else {
		prev->next = current->next;
		DeleteTask(current->data);
		free(current);
	}

}

void DisplayList(PLISTNODE list) {
	PLISTNODE current = list;
	while (current != NULL) {
		PrintTask(current->data);
		current = current->next;
	}
}


void DeleteList(PLISTNODE* list) {
	PLISTNODE current = *list;
	while (current != NULL) {
		PLISTNODE tmp = current;
		current = current->next;
		DeleteTask(tmp->data);
		free(tmp);
	}
}

// task add/update/delete by solomon Onaghise 
// edited/intergrated by Andrew Burge


void DeleteTaskdata(PLISTNODE* list) {
    int index;
    TASK t;

    int number;
    printf("Enter task number to delete: ");
    scanf_s("%d", &index);

    PLISTNODE current = *list;
    while (current != NULL) {
        if (current->data.number == index) {
            RemoveTaskFromList(list, current->data);
            printf("Task deleted successfully.\n");
            taskCount--;
            return;
        }
        current = current->next;
    }

    printf("Task with number %d not found.\n", index);

}

void updateTask(PLISTNODE* list) {

    int index;
    int number;
    printf("Enter task number to update (1-%d): ", taskCount);
    scanf_s("%d", &number);
    getchar();

    PLISTNODE current = *list;

    while (current != NULL) {
        if (current->data.number == number) {
            printf("Enter new title: ");
            fgets(current->data.title, sizeof(current->data.title), stdin);
            strtok(current->data.title, "\n");

            printf("Enter new description: ");
            fgets(current->data.description, sizeof(current->data.description), stdin);
            strtok(current->data.description, "\n");

            printf("Task updated successfully.\n");
            return;
        }
        current = current->next;
    }

    printf("Task with number %d not found.\n", number);

}


void addTask(PLISTNODE* list) {

    if (taskCount >= MAX_TASKS) {

        printf("Task list is full!\n");

        return;

    }


    TASK t;
    char title[100], description[100];
    int number;

    printf("Enter task number: ");
    scanf_s("%d", &number);
    getchar();

    printf("Enter task title: ");
    fgets(title, sizeof(title), stdin);
    strtok(title, "\n");

    printf("Enter task description: ");
   fgets(description, sizeof(description), stdin);
  
    strtok(description, "\n");

    t = CreateTask(number, title, description);

    taskCount++;
    AddTaskToList(list, t);
    printf("Task added successfully!\n");


}