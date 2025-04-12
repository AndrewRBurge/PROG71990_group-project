#pragma once
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

// task by solomon Onaghise 
// edited/intergrated by Andrew Burge

#define MAX_TASKS 100

#define MAX_LEN 100

 int taskCount;

typedef struct Task{
	int number;
	char title[MAX_LEN];

	char description[MAX_LEN];

} TASK;

// task code taken from class example and modifyed by andrew burge

TASK CreateTask(int number, const char* title, const char* description);

TASK CopyTask(TASK src);

bool CompareTask(TASK lhs, TASK rhs);

void PrintTask(TASK t);
void DeleteTask();


