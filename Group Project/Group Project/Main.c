#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//PROG71990 - W25 - Group 12 - Task manager

/* Task

 The program your group will write will be one of:

 a taskmanager


required features:
 1.add a new appt/task/recipe/other
 2.delete an existing appt/task/recipe/other
 3.update an existing appt/task/recipe/other
 4.display single appt/task/recipe/other
 5.display range appt/task/recipe/other
 6.display all appt/task/recipe/other
 7. search for appt/task/recipe/other
 8. friendly/easy to use UI(or menu system)
 9. save accumulated data to disk
 10. load accumulated data from disk
 11.you may add additional features, increasing your group’s overall
 mark to a maximum of 100%.

*/



int main(void) {

	// load data from disk
	//LoadTaskDataFromFile



	// UI/menu system by Andrew Burge
	char LetterLabel = 'z';
	//display menu 
	printf("|------------------TASK MANAGER------------------|\n");
	printf("please input a letter Label below\n");
	printf("a) add a task\n");
	printf("b) delete a task\n");
	printf("c) display single task\n");
	printf("d) display range of tasks\n");
	printf("e) display all tasks\n");
	printf("f) search task\n");
	printf("g) Quit\n");
	char numsymbols = scanf("%c", &LetterLabel);
	printf("|------------------------------------------------|\n");



	
	while (LetterLabel != 'g') {
	

		// there hass been a error involving the input 
		// my reserch has shown to remove any extra space when inputing values we can us getchar() to only read the letter inputed
		// https://learn.microsoft.com/en-us/previous-versions/visualstudio/visual-studio-2013/x198c66c(v=vs.120)
		getchar();

		if (LetterLabel == 'a') {
			//a)add a task
			printf("           \n");

			printf("add a task\n");  /// <- place function here

			printf("           \n");
			
		}

		if (LetterLabel == 'b') {
			//b) delete a task
			printf("           \n");

			printf("delete a task\n"); /// <- place function here

			printf("           \n");
		}

		if (LetterLabel == 'c') {
			//c)display single task
			printf("           \n");

			printf("display single task\n"); /// <- place function here

			printf("           \n");
		}

		if (LetterLabel == 'd') {
			//d) display range of tasks
			printf("           \n");

			printf("display range of tasks\n"); /// <- place function here

			printf("           \n");
		}

		if (LetterLabel == 'e') {
			// e) display all tasks
			printf("           \n");

			printf("display all tasks\n"); /// <- place function here

			printf("           \n");
		}

		if (LetterLabel == 'f') {
			// f) search tasks
			printf("           \n");

			printf("search tasks\n"); /// <- place function here

			printf("           \n");
		}

		if (LetterLabel == 'g') {
			// g) Quit
			printf("           \n");

			printf("quiting program\n"); /// <- place function here

			printf("           \n");

		//load data to disk
			//SaveTaskDataToFile();

			exit(0);

		}

		//display menu 
		printf("|------------------TASK MANAGER------------------|\n");
		printf("please input a letter Label below\n");
		printf("a) add a task\n");
		printf("b) delete a task\n");
		printf("c) display single task\n");
		printf("d) display range of tasks\n");
		printf("e) display all tasks\n");
		printf("f) search task\n");
		printf("g) Quit\n");
		char numsymbols = scanf("%c", &LetterLabel);
		printf("|------------------------------------------------|\n");

	} 

}