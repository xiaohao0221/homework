/*
    画一个长方形
*/
#include <stdio.h>

int main(void) {

    int i, j, m, n;
    printf("输入长：" );
    scanf("%d", &i);
    printf("输入宽" );
    scanf("%d", &j);

    for (m = 1; m <= i; ++m) {
        for (n = 1; n <= j; ++n)
            putchar('*');
        printf("\n");
        

    }
    return 0;
}