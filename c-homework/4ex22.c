// 显示出一个横向较长的长方形
#include<stdio.h>
int main (void) {
    int m, n, temp, i, j;
    printf("输入长：");
    scanf("%d", &m);
    printf("输入宽：");
    scanf("%d", &n);

    if (m < n) {
        temp = m;

        m = n;
        n = temp;
    }
    for (i = 1; i <= n; ++i) {
        for (j = 1; j <= m; ++j)
            putchar('*');
        printf("\n");
    }
    printf("\n");
    return 0;



}
