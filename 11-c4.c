/// 11장 추가문제 4번
#include <stdio.h>

int main(void)
{
	int num;
	char alpha;

	printf("What is your favorite number? ");
	scanf_s("%d", &num);
	getchar(); //
	printf("What is your favorite alphabet ? ");

	alpha = getchar();
	printf("%d %c\n", num, alpha);

	return 0;

}