#include "Task.h"
#include "list.h"
#include <stdio.h>
#include <stdlib.h>

void AddTaskToList(PLISTNODE* list, TASK t) {
	PLISTNODE newNode = (PLISTNODE)malloc(sizeof(LISTNODE));
	if (newNode == NULL) {
		fprintf(stderr, "error allocating memory\n");
		exit(EXIT_FAILURE);
	}
	else {
		newNode->data = CopyTask(t);
		newNode->next = *list;

		*list = newNode;
	}
}

void RemoveTaskFromList(PLISTNODE* list, TASK t) {
	PLISTNODE current = *list;
	if (current != NULL && CompareTask(current->data, t)) {
		*list = current->next;
		DeleteTask(current->data);
		free(current);
		return;
	}

	PLISTNODE prev = NULL;
	while (current != NULL && !CompareTask(current->data, t)) {
		prev = current;
		current = current->next;
	}

	if (current == NULL)
		return;				
	else {
		prev->next = current->next;
		DeleteTask(current->data);
		free(current);
	}

}

void DisplayList(PLISTNODE list) {
	PLISTNODE current = list;
	while (current != NULL) {
		PrintTask(current->data);
		current = current->next;
	}
}


void DeleteList(PLISTNODE* list) {
	PLISTNODE current = *list;
	while (current != NULL) {
		PLISTNODE tmp = current;
		current = current->next;
		DeleteTask(tmp->data);
		free(tmp);
	}
}