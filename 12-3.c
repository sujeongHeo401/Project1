#include <stdio.h>

int main(void)
{
	char str[80];

	printf("enter character array : ");
	scanf("%s", str);
	printf("enter first word : %s \n", str); // print the string of array 
	scanf("%s", str);
	printf("second word that in buffer %s\n", str);

	return 0;
}