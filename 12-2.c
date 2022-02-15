//// using string array with pointer 

#include <stdio.h>
int main(void)
{
	char* pa = "apple";
	char* pb = "apple";
	printf("%p %p", pa, pb);
}