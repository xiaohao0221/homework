/*
    递增显示从0到输入的正整数为止的各个整数
*/
#include <stdio.h>

int main (void) {
    int no;

    printf("请输入一个正整数:");
    scanf("%d", &no);

    if (no <= 0)
        printf("请输入一个正整数:\n");

    else {
        do {
            printf("%d", no--);
        } while (no >= 0);
    }
    printf("\n");
    return 0;

}