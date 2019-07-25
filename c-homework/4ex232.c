// 显示出直角在右上方的等腰直角三角形
#include<stdio.h>
int main (void) {
    int i, j, m;
    printf("输入直角边边长：" );
    scanf("%d", &m);

    for (i = 1; i <= m; ++i) {
        for (j = 1; j < i; ++j)
            putchar(' ');
        // 注意：此时每行首位已经是空格，
        // 接下来空格之后的*实际上是第三个for的第一个
        for (j = 1; j <= m-i+1; ++j)
            putchar('*');
        printf("\n");
    }
    printf("\n");
    return 0;
}
