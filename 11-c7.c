#include <stdio.h>

int main(void)
{
    char ary[10];
    int ch;
    int weight = 1;
    int tot = 0;
    int i = 0;

    while ((ch = getchar()) != '\n')
    {
        ary[i++] = ch; // 입력하고 나서 i를 더한다 
    }

    //printf("i ------ %d : ", i);
    //for (int j = 0; j < i; j++) {
    //    printf("~~~~~%d ~~~~\n\n", ary[j]);
    //}

    while (i > 0)
    {
        //printf("!!! %d : ", i);

        i -= 1;
        tot += ((ary[i] - '0') * weight);
        weight *= 10;
    }

    printf("%d\n", tot + 10);
    return 0;
}