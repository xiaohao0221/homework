// 显示出直角在左上方的等腰直角三角形

#include<stdio.h>

int main (void) {
    int i, j, m;
    printf("输入直角边边长：");
    scanf("%d", &m);

    for (i = 1; i <= m; ++i) {
        for (j = 1; j <= m - i + 1; ++j)
            putchar('*');
        printf("\n");
    }
    printf("\n");

    return 0;
}