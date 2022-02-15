#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[20] = "mango tree"; // 배열 초기화
	strncpy_s(str, 20, "apple-pie", 5);
	str[5] = '\0';
	printf("%s\n", str); // 복사 받은 문자열 출력 

	return 0;
}