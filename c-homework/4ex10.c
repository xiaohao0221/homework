#include<stdio.h>

int main (void) {
    int i = 1, m;
    printf("输入整数值：");
    scanf("%d", &m);

    if (m >= 0) {
        while (i <= m) {
            putchar('*');
            ++i;
        }
    } else
        printf("\n");

    return 0;


}


