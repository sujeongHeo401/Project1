#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> /// strcpy 함수 사용을 위한 include 

int main(void)
{
	char str1[80] = "strawberry"; // char 배열에 문자열 초기화
	char str2[80] = "apple"; //char 배열에 문자열 초기화 
	char* ps1 = "banana"; // 포인터로 문자열 상수 연결
	char* ps2 = str2; // 포인터로 배열 연결 

	printf("first string : %s\n", str1);
	strcpy_s(str1, 80, str2);
	printf("changed string : %s\n", str1);

	strcpy_s(str1, 80, ps1); // 배열을 연결할 포인터 사용
	printf("changed string: %s\n", str1); 

	strcpy_s(str1, 80, ps2); // 배열을 연결할 포인터 사용
	printf("changed string: %s\n", str1);

	strcpy_s(str1, 80, "banana"); //문자열 상수 사용 
	printf("changed string : %s\n", str1);

	return 0;
}