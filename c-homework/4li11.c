/*
    递增显示从0到输入的正整数为止的各个整数（for）
*/
#include <stdio.h>

int main (void)

{

    int i, no;
    do {
        printf("请输入一个正整数:" );
        scanf("%d", &no);
    } while (no < 0);

    for (i = 0; i <= no; i++)
        printf("%3d", i );
    printf("\n");

    return 0;

}