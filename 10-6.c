// 크기가 다른 배열을 출력하는 함수
#include <stdio.h>

void print_ary(int* pa, int size); // 함수 언, 매개변수 2개

int main(void)
{
	int ary1[5] = { 10, 20, 30, 40, 50 };
	int ary2[7] = { 10, 20, 30, 40, 50, 60, 70 };

	print_ary(ary1, sizeof(ary1)/sizeof(ary1[0])); // ary1 배열 출력 , 배열 요소의 개수 전달
	printf("\n");
	print_ary(ary2, sizeof(ary1) / sizeof(ary1[0])); // ary2 배열 출력 , 배열 요수의 개수 전달 
	
	return 0;
}

void print_ary(int* pa, int size)
{
	int i;
	for (i = 0; i < size; i++) // size 의 값에 따라 반복 횟수 결정 
	{
		printf("%d ", pa[i]);
	}
}