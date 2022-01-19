#include <stdio.h>

int main(void)
{
	int ary[5]; /// int 형 배열 5개 선언 
	ary[0] = 10;
	ary[1] = 20;
	ary[2] = ary[0] + ary[1];
	scanf_s("%d", &ary[3]);

	printf("%d\n", ary[2]); // 세번째 배열 요소 출력 
	printf("%d\n", ary[3]); 
	printf("%d\n", ary[4]); // 마지막 배열 출력 

	return 0;
}