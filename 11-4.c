#include <stdio.h>

int main(void)
{
	char ch;
	int i;
	for (i = 0; i < 3; i++) // 3번 반복
	{
		scanf_s("%c", &ch); // enter character
		printf("%c", ch); // print entered character
	}

	return 0;
}