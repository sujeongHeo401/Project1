#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double apple; // 실수
	int banana; // 정수
	int orange; // 정수

	apple = 5.0 / 2.0; // 실수와 실수의 나누기 연산 
	banana = 5 / 2;
	orange = 5 % 2; 

	printf("apple : %.1lf\n", apple);
	printf("banana : %d\n", banana);
	printf("orange : %d\n", orange);

	return 0;
}