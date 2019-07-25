// 编写一段程序，输入一个整数，
// 显示出输入整数层的金字塔形状。
// 提示：第i行显示 (i - 1) * 2 + 1 个 ‘*’。

// #include<stdio.h>

// int main (void) {
//     int i, j, m;
//     printf("输入金字塔行数：");
//     scanf("%d", &m);

//     for (i = 1; i <= m; ++i) {
//         for (j = 1; j < m - i; ++j)
//             putchar(' ');


//     int n=2i-1;
//     for (j = 1; j<=n ; ++j)
//         putchar('*');

//     putchar('\n');}

//     return 0;
// }
#include "stdio.h"
int main(void) {
    int n;
    puts("让我们来描绘一个金字塔。");
    printf("金字塔有几层:"); scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            putchar(' ');
            // 为什么写成2i-1不行？
        }
        for (int j = 1; j <= (i-1)*2+1 ; j++) {
            putchar('*');
        }
        
        putchar('\n');
    }
    return 0;
}
