﻿#include <stdio.h>
int main(void)
{
	char str[80];
	printf("enter string: ");  /// announce input message
	gets(str);  // 빈칸을 포함한 문자열 입력
	puts("입력된 문자열 : "); // 문자열 상수 출력 
	puts(str); /// 배열에 저장된 문자열 출력
	return 0;
}