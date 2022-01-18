#include <stdio.h>

int main(void)
{
	char fruit[20] = "strawberry"; /// chart 배열 선언과 문자열 초기화

	printf("strawberry : %s\n", fruit); // 배열 명으로 저장된 문자열 출력
	printf("strawberry jam :  %s %s\n", fruit, "jam"); // 문자열 상수를 직접 %s 로 출력

	return 0;
}