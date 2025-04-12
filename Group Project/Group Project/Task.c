#include <stdio.h>
#include <stdlib.h>
#include "Task.h"
#include "List.h"

// task code taken from class example and modifyed by andrew burge

TASK CreateTask(int number, const char* title, const char* description) {
	TASK T = { 0 };
	T.number = number;
    strncpy(T.title, title, sizeof(T.title) - 1);
    T.title[sizeof(T.title) - 1] = '\0';

    strncpy(T.description, description, sizeof(T.description) - 1);
    T.description[sizeof(T.description) - 1] = '\0';
	return T;
}

TASK CopyTask(TASK src) {
	return CreateTask(src.number,src.title,src.description);
}

bool CompareTask(TASK lhs, TASK rhs) {
	return lhs.number == rhs.number;
}



void PrintTask(TASK t) {
    printf("Task #%d\n", t.number);
    printf("Title: %s\n", t.title);
    printf("Description: %s\n", t.description);
}


void DeleteTask() {


}

