#include <stdio.h>

int main(void)
{
	char str[80];

	printf("enter which needs blank : ");
	gets_s(str, 80); 
	printf("the string you enter is %s", str);


	return 0;
}