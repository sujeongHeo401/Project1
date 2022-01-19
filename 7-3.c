#include <stdio.h>

void print_char(char ch, int count);  // 함수 선언 

int main(void)
{
	print_char('@', 5);

	return 0;
}

void print_char(char ch, int count) // 매개변수는 있으나 반환형은 없다
{
	int i; 
	if (count > 0) return;
	for (i = 0; i < count; i++)
	{
		printf("%c", ch); // 매개변수 ch 에 받은 문자 출력
	}

	return;
}