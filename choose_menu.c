#include <stdio.h>

int disp_menu(void); // 함수 선언 
int main(void)
{
	int sel; 
	sel = disp_menu();
	printf("선택된 메뉴는 %d 번입니다. \n", sel);

	return 0;
}

int disp_menu(void) // 매개변수는 없고 정수를 반환한다
{
	int sel; //선태간 메뉴 번호를 저장할 변수

	printf("=====<메뉴>=====\n\n"); // 메뉴 출력 
	printf("1. 볶음짬뽕\n\n"); // 메뉴 출력 
	printf("2. 콩나물국밥\n\n"); // 메뉴 출력 
	printf("3. 바지락 칼국수\n\n"); // 메뉴 출력 
	printf("메뉴를 선택하세요 \n\n"); // 메뉴 출력 
	scanf_s("%d", &sel);

	return sel;
}