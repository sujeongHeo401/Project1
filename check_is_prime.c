#include <stdio.h>

int prime_check(int n); // 함수 선언 

int main(void)
{
	int res;
	res = prime_chekc(32767); // 32767 을 주고 함수 호출
	if (res == 1) printf("소수입니다.\n"); // 반환값이 1이면 소수 
	else printf("소수가 아닙니다 \n");

	return 0;
}


int prime_check(int n)
{
	int i;
	for (i = 2; i < n; i++) 
	{
		if ((n % i) == 0) return 0; // 최초로 나눠 떨어질 때 반환 
	}
	

	return 1;
}