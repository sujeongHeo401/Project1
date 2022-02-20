#include <stdio.h>

int main(void)
{
	int score[3][4]; // 3명의 네 과목 점수를 저장ㅎ알 2차원 배열 선언 
	int total;  // 총점 
	double avg; // 평균 
	int i, j; // 반복 제어 변수

	for (i = 0; i < 3; i++)
	{
		printf("enter four subject's score : ");
		for (j = 0; j < 4; j++)
		{
			scanf("%d", &score[i][j]);
		}
	}

	for (i = 0; i < 3; i++) // 학생 수 만큼 반복
	{
		total = 0; // 학생이 바뀔 때마다 0으로 초기화
		for (j = 0; j < 4; j++)
		{
			total += score[i][j]; // 학생별로 총점 누적
		}
		avg = total / 4.0;
		printf("total score : %d, average: %.2lf\n", total, avg); //총점, 평균 출력 
	}

	return 0;
}