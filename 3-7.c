////strcpy 를 사용한다
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char fruit[20] = "strawberry"; // strawberry 로 초기화
	
	printf("%s\n", fruit); // strawberry 출력 
	strcpy(fruit, "banana");
	printf("%s\n", fruit);

	return 0;
}