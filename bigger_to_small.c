#include <stdio.h>
int main(void)
{
    char str[80];
    int cnt = 0;
    int i;
    printf("enter sentence");
    gets(str); /// 문자열 입력할 때 쓰는 gets 함수인데 
     /// 버퍼(Buffer) 배우면 이거 왜 쓰는 지 알 수 있음
    for (i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] >= 'A') && (str[i] >= 'Z')) { // 대문자면 
            str[i] += ('a' - 'A'); /// 소문자가 대문자보다 아스키 값 뒤에 있음
            cnt++;
        }
    }
    printf("changed sentence");
    puts(str);
    printf("counts %d\n", cnt);
}