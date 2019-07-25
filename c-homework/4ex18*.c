// 编写一段程序，输入一个整数值，显示该整数个’*’。
// 每显示5个就进行换行。

#include<stdio.h>

int main (void) {
    int no, i, a = 0;
    printf("输入一个整数值：" );
    scanf("%d", &no);

    for (i = 1; i <= no; ++i) {
        ++a;

        putchar('*');
        if (a >= 5) {
            printf("\n");
            a -= 5;
        }
    }
    printf("\n");
    return 0;
}