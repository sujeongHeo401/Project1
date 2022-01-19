#include <stdio.h>

int main(void)
{
	int score[5];

	int i;
	int total = 0;
	double avg;
	int count;       // 배열요소의 개수를 계산

	count = sizeof(score) / sizeof(score[0]); /// 배열 요소의 개수 계산 
	for (i = 0; i < count; i++) {
		scanf_s("%d", &score[i]);
	}

	for (i = 0; i < count; i++) {
		total += score[i];
	}
	avg = total / (double)count; //총합을 count 로 나누어 평균 계산

	for (i = 0; i < count; i++) {
		printf("%5d", score[i]);
	}
	printf("\n");

	printf("average : %.1f\n", avg); 
	return 0;
}