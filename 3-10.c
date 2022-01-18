
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int age; // 나이는 정수형
	double height; // 키는 실수형 
	printf("Enter age and height: "); // 입력하세요
	scanf("%d%lf", &age, &height); // 나이와 키를 입력
	printf("age is %d , height is %.1lfcm\n", age, height);
	return 0;
}