﻿/// 유효 숫자 확인
#include <stdio.h>

int main(void)
{
	float ft = 1.234567890123456789; // 유효 숫자가 많은 값으로 초기화 
	double db = 1.23456789023456789;

	printf("float 형 변수의 값ㅇ :  %.20F\n", ft); // 소수점 이하 20자리까지 출력
	printf("double 형 변수의 값ㅇ :  %.20lf\n",db); // 소수점 이하 20자리까지 출력

	//float ? ? ? ? ? ? : 1.23456788063049316406
	//	double ? ? ? ? ? ? : 1.23456789023456781074
	return 0;
}