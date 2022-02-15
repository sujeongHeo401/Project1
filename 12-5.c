#include <stdio.h>
#include <string.h>
int main(void)
{
	char str[80];
	printf("Enter which string contains blank: ");
	fgets(str, sizeof(str), stdin); // 문자열 입력
	str[strlen(str) - 1] = '\0';
	printf("Entered String is %s\n", str); // 문자열 출력
	
	return 0;
}