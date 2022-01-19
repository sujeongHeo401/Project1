#include <stdio.h>

int main(void)
{
	int score[5]; // 다섯 과목의 성적을 입력한 int 형 배열 선언 
	int i;  // 반복 제어 변수
	int total = 0; // 총점을 누적할 변수 
	double avg; // 평균을 저장하는 변수

	for (int i = 0; i < 5; i++) {
		scanf_s("%d", &score[i]);
	}

	for (i = 0; i < 5; i++) {
		total += score[i];
	}
	
	avg = total / 5.0;

	for (i = 0; i < 5; i++) {
		printf("%5d", score[i]);
	}

	printf("\n"); 
	printf("avg : %.1lf\n", avg); /// 평균 출력 

	return 0;
}