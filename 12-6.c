// 개행 문자로 인해 gets 함수가 입력을 못하는 경우
#include <stdio.h>

int main(void)
{
	int age; // 나이를 저장할 변수
	char name[20]; // 이름을 저장할 배열

	printf("Enter age : ");
	scanf("%d", &age);

	printf("enter name :");
	gets(name);
	printf("Age : %d, name : %s\n", age, name);

	return 0;
}
