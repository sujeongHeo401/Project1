#include <stdio.h>
#include <math.h>
int main(void)
{
	double weight, height, bmi;
	printf("weight, height");
	scanf_s("%lf%lf", &weight, &height);

	height /= 100.0;
	bmi = weight / pow(height, 2);
	((bmi >= 20.0) && (bmi < 25.0))
	? printf("standard\n")
		: printf("need work\n");

	return 0;
}