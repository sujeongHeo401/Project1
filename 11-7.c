﻿//버퍼의 내용을 지워야 하는 경우
#include <stdio.h>

int main(void)
{
	int num, grade; // 학번과 학점을 저장할 변수

	printf("학번 입력 : ");
	scanf_s("%d", &num); // 학번 입력

	getchar(); // 버퍼에 남아 있는 개행 문자 제거
	printf("학점 입력 : ");
	grade = getchar(); // 학점 입력
	printf("학번 : %d, 학점 : %c", num, grade);

	return 0; 
}