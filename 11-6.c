#include <stdio.h>

void my_gets(char* str, int size);

int main(void)
{
	char str[7]; /// 
	my_gets(str, sizeof(str)); 
	printf("string that entered : %s\n", str);

	return 0;
}

void my_gets(char* str, int size) /// str 은 char 배열, size 는 배열의 크기
{
	int ch; // getchar 함수의 반환값을 저장할 변수 
	int i = 0;  // str 배열 첨자

	ch = getchar(); // 첫 번째 문자 입력
	while ((ch != '\n') && (i < size - 1)) // 배열의 크기만큼 입력
	{
		str[i] = ch; //입력한 문자를 배열에 저장
		i++; /// 첨자 증가 
		ch = getchar(); // 새로운 문자 입력 

	}
	str[i] = '\0'; // 입력된 문자열의 끝에 널 문자를 저장 

}