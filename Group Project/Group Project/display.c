#include "Display.h"
#include <stdio.h>


void DisplaySingleTask(PLISTNODE list, int taskNumber) {
    PLISTNODE current = list;
    bool found = false;

    while (current != NULL) {
        if (current->data.number == taskNumber) {
            PrintTask(current->data);
            found = true;
            break;
        }
        current = current->next;
    }

    if (!found) {
        printf("Task with number %d not found.\n", taskNumber);
    }
}

void DisplayTaskRange(PLISTNODE list, int startNumber, int endNumber) {
    if (startNumber > endNumber) {
        printf("Invalid range: start number must be less than or equal to end number.\n");
        return;
    }

    PLISTNODE current = list;
    bool foundAny = false;

    printf("Tasks in range %d to %d:\n", startNumber, endNumber);
    printf("------------------------\n");

    while (current != NULL) {
        if (current->data.number >= startNumber && current->data.number <= endNumber) {
            PrintTask(current->data);
            printf("\n------------------------\n");
            foundAny = true;
        }
        current = current->next;
    }

    if (!foundAny) {
        printf("No tasks found in the specified range.\n");
    }
}

void DisplayAllTasks(PLISTNODE list) {
    if (list == NULL) {
        printf("No tasks available.\n");
        return;
    }

    printf("All Tasks:\n");
    printf("------------------------\n");

    PLISTNODE current = list;
    while (current != NULL) {
        PrintTask(current->data);
        printf("\n------------------------\n");
        current = current->next;
    }
}