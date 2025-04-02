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
