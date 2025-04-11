#include <stdio.h>
#include "Task.h"
#include "List.h"

TASK CreateTask(int number, char title[], char decription[]) {
	TASK T = { 0 };
	T.number = number;
	T.title = title;
    T.description = decription; 
	return T;
}

TASK CopyTask(TASK src) {
	return CreateTask(src.number,src.title,src.description);
}

bool CompareTask(TASK lhs, TASK rhs) {
	return lhs.number == rhs.number;
}

void PrintTask(TASK t) {
	printf("TASK: %d. %c\nDate: %d/%d/%d", t.number, t.title,t.description);
}

void DeleteTask(PLISTNODE* list) {
    int index;
    TASK t;

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
    char title[100], description[200];
    int number;

    printf("Enter task number: ");
    scanf("%d", &number);
    getchar(); // clear newline

    printf("Enter task title: ");
    fgets(title, sizeof(title), stdin);
    strtok(title, "\n"); // remove trailing newline

    printf("Enter task description: ");
    fgets(description, sizeof(description), stdin);
    strtok(description, "\n");

    t = CreateTask(number, title, description);
   
    taskCount++;
    AddTaskToList(list, t); 
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