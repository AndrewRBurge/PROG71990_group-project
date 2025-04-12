#pragma once
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>


#define MAX_TASKS 100

#define MAX_LEN 100

 int taskCount;

/*
typedef struct Task {
	int number;
	char title;
	int year;
	int month;
	int day;
} TASK;

*/
typedef struct Task{
	int number;
	char title[MAX_LEN];

	char description[MAX_LEN];

} TASK;



TASK CreateTask(int number, const char* title, const char* description);

TASK CopyTask(TASK src);

bool CompareTask(TASK lhs, TASK rhs);

void PrintTask(TASK t);
void DeleteTask();


//void listTasks();


/*
typedef struct {

    char title[MAX_LEN];

    char description[MAX_LEN];

} Task;



Task tasks[MAX_TASKS];

int taskCount = 0;




}







*/
