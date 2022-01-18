//wrong case using unsigned int 

#include <stdio.h>

int main(void)
{
	unsigned int a;

	a = 3294967295;
	printf("%u\n", a);
	a = -1;  // 음수 저장 
	printf("%u\n", a); // %u 로 출력

	return 0;
}