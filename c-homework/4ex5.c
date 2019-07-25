/*
    递增显示从1到输入的整数为止的各个整数
*/
#include <stdio.h>

int main (void) {



    int no;
    printf("请输入一个整数：");
    scanf("%d", &no);

    while (no >= 1)
        printf("%d", no-- );
    printf("\n");

    while (no <= 1)
        printf("%d", no++ );

    return 0;
}

