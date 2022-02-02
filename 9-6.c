///Pointer type which not allowed
#include <stdio.h>

int main(void)
{
	int a = 10; // init variable
	int* p = &a;
	double* pd; // 

	pd = p; // put p into pd
	printf("%lf\n", *pd); // print value that pd pointing . 

	return 0;


}