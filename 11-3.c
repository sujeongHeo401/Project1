#include <stdio.h>

int main(void)
{
	int ch;// 입력 문자를 저장할 변수

	ch = getchar(); // 함수가 반환하는 문자를 바로 저장
	printf("chracter that entered : ");
	putchar(ch); // print entered character
	putchar('\n'); // print open line character

	return 0;
}

