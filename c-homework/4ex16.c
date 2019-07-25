// 编写一段程序，输入一个整数值，
// 显示该整数值以下的所有奇数。

#include<stdio.h>

int main (void) {
    int no, i;
    printf("请输入一个正整数：" );
    scanf("%d", &no);

    for (i = 1; i <= no; ++i) {
        if (i % 2)
            printf("%3d", i );
    }
    printf("\n");
    return 0;
}