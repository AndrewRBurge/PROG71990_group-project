#pragma once
#include "Task.h"
#include <stdio.h>
#include <stdlib.h>

// list code taken from class example and modifyed by andrew burge

typedef struct listnode {
	TASK data;
	struct listnode* next;
} LISTNODE, * PLISTNODE;

void AddTaskToList(PLISTNODE* list, TASK t);

void RemoveTaskFromList(PLISTNODE* list, TASK t);

void DisplayList(PLISTNODE list);

void DeleteList(PLISTNODE* list);

// task add/update/delete by solomon Onaghise 
// edited/intergrated by Andrew Burge

void DeleteTaskdata(PLISTNODE* list);

void updateTask(PLISTNODE* list);

void addTask(PLISTNODE* list);

