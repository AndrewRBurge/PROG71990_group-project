#pragma once
#include <stdbool.h>

typedef struct Task {
	int number;
	char title;
	int year;
	int month;
	int day;
} TASK;


TASK CreateTask(int number, char title,int year,int month,int day);

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
