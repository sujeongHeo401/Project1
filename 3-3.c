#include <stdio.h>
 
int main(void)
{
	short sh = 32767; /// short 형의 최댓값 초기화
	int in = 2147483647;  // int형의 최댓값 초기화 
	long ln = 2147483647; // long 형의 최댓값 초기화
	long long lln = 123451234512345; // 아주 큰 값 초기화
	
	printf("print short type variable: %d\n", sh);
	printf("print int type variable: %d\n", in);
	printf("print long type variable: %d\n", ln);
	printf("print long long  type variable: %lld\n",  lln);

	printf("long long형의 크기 : %d 바이트 \n", sizeof(long long)); // 14행에 추가
	//print short type variable : 32767
	//print int type variable : 2147483647
	//print long type variable : 2147483647
	//print long long  type variable : 123451234512345

	return 0;
}