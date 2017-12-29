/* Vicky Mohammad
 * January 18, 2017
 * This program ask the user to write a poem
 * and count the number of words and lines
 * of the poem */

/*import libraries*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>

int main(){
	/*declare var*/
	char string[50];
	int wordCount = -1;
	int lineCount = -1;
	int exit = 0, x;
	int currentCount = 0;
	int specificLineCount[50];
	
	/*print and ask*/
	printf("\n Enter the poem \n");\
		
	/*loop until exit*/
	while(exit == 0){
		/*get string from input*/
		printf(" ");
		fgets(string, 50, stdin); /*scanf("%[^\n]s", string);*/
		/*count a line*/
		lineCount = lineCount + 1;		
		/*loop until null*/
		for (x = 0; string[x] != '\0'; x++){
			/*check for word count*/
			if ((string[x] == ' ' || string[x] == '\n') && string[x-1] != ' '){
				wordCount = wordCount + 1;
				currentCount = currentCount + 1;
			}
		}
		/*add to array and reset current count to zero*/
		specificLineCount[lineCount] = currentCount;
		currentCount = 0;
		/*exit when user input period*/
		if (string[0] == '.'){
			exit = 1;
		}	
	}

	/*print the word count*/
	if (wordCount == 1){
		printf("\n %d word on ", wordCount);
	} else {
		printf("\n %d words on ", wordCount); 
	}
	
	/*print the line count*/
	if (lineCount == 1){
		printf("%d line \n ", lineCount);
	} else {
		printf("%d lines \n ", lineCount); 
	}
	
	/*print the specific counter for each line*/
	for(x = 0; x <= lineCount-1; x++){
		printf("%d ", specificLineCount[x]);
	}
	 /*exit*/
	printf("\n\n");
	return (0);
}
