#include <stdio.h>
//reverse(ary, ary.size(ary) / sizeof(*ary));
void reverse(double *pa,int size);
int main(void)
{
	int ary[] = { 10, 20, 30, 40, 50 };
	int size = sizeof(ary) / sizeof(ary[0]);
	int* pa = ary;
	int* pb = ary + (size - 1);
	int temp, i;

	while (pa < pb)
	{
		temp = *pa;
		*pa = *pb;
		*pb = temp;
		pa++;
		pb--;
	}

	for (i = 0; i < size; i++)
	{
		printf("%d ", ary[i]);
	}

	return 0;
}
void reverse(double* pa, int size)
{
	int i;
	double temp;

	for (i = 0; i < size / 2; i++) // 좌우의 값을 바꾸는 횟수는 배열 요소 수의 절반
	{
		temp = pa[i];
		pa[i] = pa[size - 1 - i];
		pa[size - 1 - i] = temp; // 오른쪽의 배열 요소에 임시 변수의 값 대입
	}
}