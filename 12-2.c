//// using string array with pointer 

#include <stdio.h>
int main(void)
{
	char* dessert = "apple"; // init array to pointer
	
	while (*dessert != '\0')
	{
		putchar(*dessert); //print the word that dessert pointed
		dessert++;
	}

	printf("today's dessert is %s .\n", dessert);  // print string array
	dessert = "banana"; //// assign new array
	printf("tomorrow's dessert is %s\n", dessert); // print changed array

	return 0;
}