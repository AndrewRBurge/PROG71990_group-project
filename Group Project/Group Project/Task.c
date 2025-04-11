#include <stdio.h>
#include "Task.h"
#include "List.h"

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
    int index;

    printf("Enter task number to delete (1-%d): ", taskCount);

    scanf("%d", &index);

    if (index < 1 || index > taskCount) {

        printf("Invalid task number.\n");

        return;

    }

    for (int i = index - 1; i < taskCount - 1; i++) {

        tasks[i] = tasks[i + 1];

    }

    taskCount--;

    printf("Task deleted successfully.\n");
}

void updateTask() {

    int index;

    printf("Enter task number to update (1-%d): ", taskCount);

    scanf("%d", &index);

    if (index < 1 || index > taskCount) {

        printf("Invalid task number.\n");

        return;

    }

    printf("Enter new title: ");

    scanf(" %[^\n]", tasks[index - 1].title);

    printf("Enter new description: ");

    scanf(" %[^\n]", tasks[index - 1].description);

    printf("Task updated successfully.\n");

}


void addTask(PLISTNODE* list) {

    if (taskCount >= MAX_TASKS) {

        printf("Task list is full!\n");

        return;

    }
    TASK t;
    AddTaskToList(PLISTNODE * list, TASK t);

    printf("Enter task title: ");

    scanf(" %[^\n]", tasks[taskCount].title);

    printf("Enter task description: ");

    scanf(" %[^\n]", tasks[taskCount].description);

    taskCount++;

    printf("Task added successfully!\n");

}


void listTasks() {

    if (taskCount == 0) {

        printf("No tasks to display.\n");

        return;

    }

    for (int i = 0; i < taskCount; i++) {

        printf("\nTask #%d\nTitle: %s\nDescription: %s\n", i + 1, tasks[i].title, tasks[i].description);

    }


/*





void deleteTask() {

   

}











*/