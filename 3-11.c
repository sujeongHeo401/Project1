#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char grade;
	char name[20]; // 학점을 입력할 변수

	printf("학점 입력 : "); 
	scanf("%c", &grade);

	printf("이름 입력 : "); 
	scanf("%s", name);
	printf("%s 의 학점은 %c 입니다 . \n", name, grade);

	return 0;
}