#include <stdio.h>

int main(void)
{
	int a = 10;
	int b = 12;

	printf("a & b  : ", a & b);
	printf("a ^ b  : ", a ^ b);
	printf("~a : ", ~a);
	printf("a ||b ", a || b);
	printf("a << 1  : ", a << 1);
	printf("a >> 2  : ", a >> 2);
}