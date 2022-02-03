//// 배열에 값을 입력하는 함수
#include <stdio.h>

void input_ary(double* pa, int size);

int main(void)
{
	double ary[5];
	double max; // 최댓값 저장할 함수
	int month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int size = sizeof(month) / sizeof(month[0]); //배열 요소의 개수 계산

	input_ary(month, size); // 배열에 값 입력
	return 0;
}

void input_ary(int* mp, int size)
{
	int i;
	printf("size - %d: ", size);
	for (i = 0; i < size; i++) {
		printf("%5d", mp[i]);
		if (((i + 1) % 5) == 0) printf("\n");
	}
}
