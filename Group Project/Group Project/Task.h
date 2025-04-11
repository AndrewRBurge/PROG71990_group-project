#pragma once
#include <stdbool.h>

#define MAX_TASKS 100

#define MAX_LEN 100

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

int taskCount;

TASK CreateTask(int number, char title, char decription;);

TASK CopyTask(TASK src);

bool CompareTask(TASK lhs, TASK rhs);

void PrintTask(TASK t);

void DeleteTask(TASK t);


/*
typedef struct {

    char title[MAX_LEN];

    char description[MAX_LEN];

} Task;



Task tasks[MAX_TASKS];

int taskCount = 0;




}







*/
