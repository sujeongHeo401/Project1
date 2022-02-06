#include <stdio.h>

int main(void)
{
	int ch;
	int len, max = 0;

	while (1)
	{
		len = 0;
		ch = getchar(); // 문자 입력
		// Ctrl + Z 키를 누르거나 엔터 키를 치지 않는 동안 반복 입력 
		while ((ch != -1) && (ch != '\n'))
		{
			len++;
			ch = getchar();
		}
		if (ch == -1) break;
		if (len > max) max = len;
	}
	printf("가장 긴 단어의 길이 : %d\n", max);

	return 0;
}