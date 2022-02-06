#include <stdio.h>

int main(void)
{
	printf("start address that apple  is saved : %p\n", "apple"); // print address value 
	printf("value that the second character starts : %p\n", "apple" + 1); // print address value 
	printf("first character : %c\n", *"apple"); // indirection operation
	printf("second character : %c\n", *("apple" + 1)); //  pointer operation
	printf("character that we express with array : %c\n", "apple"[2]); // array operation
	
	return 0;
}