#include <stdio.h>
#include <string.h> // strlen 함수 사용을

int main(void)
{
	char str1[80], str2[80];
	char* resp; // 문자열이 긴 배열을 선택할 포인터

	printf("Enter two file name : ");

	scanf("%s%s", str1, str2); // 배열에 입력된 문자열의 길이 비교
	if (strlen(str1) > strlen(str2))
		resp = str1;
	else
		resp = str2;

	printf("File name that the name is longer ?? %s\n", resp);

	return 0;
}