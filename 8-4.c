#include <stdio.h>
int main(void)
{
	char str[80] = "applejam";
	printf("test : %s\n", str); // 초기화 문자열 입력 
	printf("test : "); 
	scanf("%s", str);
	printf("test : Ss\n", str); // 입력된 문자열 출력 

	return 0;
}