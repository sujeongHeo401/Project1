﻿#include <stdio.h>
int main(void)
{
	double weight, height, bmi;

	printf("몸무게(kg), cm input: ");
	scanf_s("%lf%lf", &weight, &height);

	height = height / 100.0; // height /= 100.0;

	bmi = weight / (height * height);
	((bmi >= 20.0) && (bmi < 25.0))
		? printf("표준입니다.\n")
		: printf("체중관리가 필요합니다.\n");

	return 0;
}