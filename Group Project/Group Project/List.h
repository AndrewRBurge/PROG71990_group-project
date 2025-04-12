#pragma once
#include "Task.h"
#include <stdio.h>
#include <stdlib.h>


typedef struct listnode {
	TASK data;
	struct listnode* next;
} LISTNODE, * PLISTNODE;

void AddTaskToList(PLISTNODE* list, TASK t);

void RemoveTaskFromList(PLISTNODE* list, TASK t);

void DisplayList(PLISTNODE list);

void DeleteList(PLISTNODE* list);

void DeleteTaskdata(PLISTNODE* list);

void updateTask(PLISTNODE* list);

void addTask(PLISTNODE* list);

