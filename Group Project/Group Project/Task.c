#include <stdio.h>
#include "Task.h"


TASK CreateTask(int number, char title, int year, int month, int day) {
	TASK T = { 0 };
	T.number = number;
	T.title = title;
	T.year = year;
	T.month = month;
	T.day = day;
	return T;
}

TASK CopyTask(TASK src) {
	return CreateTask(src.number,src.title,src.year,src.month,src.day);
}

bool CompareTask(TASK lhs, TASK rhs) {
	return lhs.number == rhs.number;
}

void PrintTask(TASK t) {
	printf("TASK: %d. %c\nDate: %d/%d/%d", t.number, t.title,t.year,t.month,t.day);
}

void DeleteTask(TASK t) {
	
}